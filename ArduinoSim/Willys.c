
//#define debug

#include "autogentags.h"

int inFrom=22;
int inTo=36;
int outFrom=40;
int outTo=53;

int highBeamButtonState=HIGH;
bool highBeam=false;

bool fanResult;

//bool bl,br=0; // blink left, blink right
unsigned long blinkTimer=0;
bool bl[2]; // blink left, right, and hazard
bool blold[2];
bool blinker[2];
 
const int VF=47;
const int HF=48;  // styrebrems ut
const int VB=49;
const int HB=50;

const int jOpp=A3;
const int jH=A4;
const int jV=A5;
const int jNed=A6;
bool rOpp,rH,rV,rNed;
bool wVF,wHF,wVB,wHB;

unsigned long intervalTimer=0;
const unsigned long wiperMotorPulse=200;
bool wiperRun=false,intervalState=HIGH;
unsigned long interval=3000;
int hazard = 0; // hazard blinker mode (varselblink)
int numWiperToggles = -1; // number of times wiper switch has been cycled within maxInterval
const unsigned long maxInterval = 20000;
unsigned long lastWiperChange = 0;
bool wiper0old, wiper1old;
int lightMode = 0; // 0:all off  1:low power (rocklights+ryggelys) 2:all on
bool ign, ignOld;

int debugWrite(int pin, int n) {
  #ifdef debug
   Serial.print(bool(n));
  #endif
  digitalWrite(pin,n);
  return n;
}

void setup()
{
       #ifdef debug
	Serial.begin(9600);
       #endif

	initAutogenPins();

}

void loop()
{

	if ((ign = debugWrite(cign, digitalRead(ign0))))// Ignition/main. Inverse signal
		lightMode = 2;
	if (ignOld!=ign) {
		if (!(ignOld = ign))
			lightMode = 0;
		else highBeam = false;
	}
    
	if (debugWrite(cstart,!digitalRead(start)))   // Start
		lightMode=0; 

    if (!digitalRead(hibeam) && highBeamButtonState) {        // High beam
            highBeam=!highBeam;
			if (!ign) {
				lightMode++;
				if (lightMode > 2) lightMode = 0;
			}
    } 
    highBeamButtonState=digitalRead(hibeam);
 
        // Detta er en luring. Har jeg klart å tenke rektig i blinde her nå
        // så skal den toggle highBeam BARE når highbeam-knappen skifter fra ON til OFF

   


//    if ((digitalRead(hibeam)==LOW)&&!digitalRead(lys0))
//     highBeam=true; //  lyshorn!

	if (!debugWrite(clys, digitalRead(lys0)&&(lightMode==2)))      // Lys (main). Fulltlys alltid av ved oppstart
		highBeam = false;

    debugWrite(chibeam,highBeam&&ign);


	for (int i=0; i<2; i++) { // traverse both side blinkers & switches
     bl[i]=!digitalRead(26+i);
     if (bl[i]||(hazard>4)) // if switch on OR hazard set
      if ((millis()-blinkTimer)>500) { // do only if .5 sec passed
       blinker[i]=!blinker[i];
       hazard--;
       if (hazard>5) {
         blinker[1]=blinker[0];  // this
         hazard++;
//		 blinkTimer=millis();
       }
       blinkTimer=millis(); // because this will never reach i=1 when hazard on
       
      }
      if (bl[i]!=blold[i]) { // on switch change
        hazard++;
        
        blinker[i]=blold[i]=bl[i];
        blinkTimer=millis();
        
      }
     digitalWrite(44+i,blinker[i]);
     }
    if (hazard<0) hazard=0;
    if ((millis()-blinkTimer>400)&&(!bl[0]&&!bl[1])) {
     hazard=0;
     blinker[0]=blinker[1]=0;
    }
   
       
	// Wipers

	// detect swith change within maxInterval
	if ((wiper1old != digitalRead(wiper1))) {
		numWiperToggles++;
		if (numWiperToggles > 2) {
			interval = millis() - lastWiperChange;
			numWiperToggles = 0;
		}
		lastWiperChange = millis();

	}
	if (millis() > lastWiperChange + maxInterval)
		numWiperToggles = 0;

	if (!digitalRead(wiper0)) wiperRun = false; // hvis brytern er AV- stopp pussermotorn
	else if (!digitalRead(wiper1)) wiperRun = true; // hvis 0 signal (bryter i midtposisjon=ON)
	else {
/*		if (intervalState) {    // Intervallpusser
			
			intervalTimer = millis() + interval;
		}
		intervalState = digitalRead(33);*/

		if (millis() > intervalTimer) {
			wiperRun = true;
			if (millis() > intervalTimer + wiperMotorPulse)
				intervalTimer = millis() + interval;
		}
		else wiperRun = false;
	}

//	wiperRun=(&&digitalRead(33))||wiperRun; 
    digitalWrite(cwiper,wiperRun&&ign); // styring av vinduspussermotor

	wiper0old = digitalRead(wiper0); // store switch state
	wiper1old = digitalRead(wiper1);


	if (!digitalRead(comp) && lightMode) { // compressor
		debugWrite(ccomp, HIGH);
		debugWrite(carbfront, arbfront);
		debugWrite(carbrear, arbrear);
		wVF = wHF = wVB = wHB = false; // clear write registers

        rOpp=!digitalRead(joyN);  // poll joystick
        rH=!digitalRead(joyE);      // and store in r*
        rV=!digitalRead(joyW);
        rNed=!digitalRead(joyS);


        wVF=rNed || rH;
        wHF=rNed || rV;
        wVB=rOpp || rH;
        wHB=rOpp || rV;


/*        rOpp
           ^            VF   HF
      rV<- | ->rH
           v            VB   HB
          rNed

*/
        debugWrite(cvf,wVF&&ign);
        debugWrite(chf,wHF&&ign);
        debugWrite(cvb,wVB&&ign);
        debugWrite(chb,wHB&&ign);

    }
    else {
        debugWrite(ccomp,LOW);  //  make sure we zero the cutting brakes
        debugWrite(cvf,LOW); 
        debugWrite(chf,LOW);
        debugWrite(cvb,LOW);
        debugWrite(chb,LOW);
		debugWrite(carbfront, LOW);
		debugWrite(carbrear, LOW);

    }


    debugWrite(51,!digitalRead(29)&&lightMode); // rock lights
    debugWrite(52,!digitalRead(30)); // Bremselys
	debugWrite(53, !digitalRead(31) || ((lightMode==2)&&!ign)); // Ryggelys
    debugWrite(A12,!digitalRead(36)); // Horn

	fanResult = !digitalRead(fan1) || !digitalRead(radiator);
	if (!digitalRead(fan0)||(lightMode<2)) fanResult=false;
	
	debugWrite(cfan,fanResult);



   // debug
/*    for (int i=outFrom; i<=outTo; i++)
        Serial.print(bool(digitalRead(i)));*/
   #ifdef debug
    Serial.println();
    delay(50);
   #endif


/*        Serial.println();
        Serial.print(bool(wVF));
        Serial.println(bool(wHF));
        Serial.print(bool(wVB));
        Serial.println(bool(wHB));*/




}
