
#include <map>
#include <string>

using namespace std;
map <string,string> pinDesc;


#define HIGH 1
#define LOW 0
#define millis GetTickCount


bool pinStatus[54+16];
bool pinWriteable[54+16];

const int INPUT_PULLUP=0;
const int OUTPUT=1;

const int A0=54;
const int A1=54+1;
const int A2=54+2;
const int A3=54+3;
const int A4=54+4;
const int A5=54+5;
const int A6=54+6;
const int A7=54+7;
const int A8=54+8;
const int A9=54+9;
const int A10=54+10;
const int A11=54+11;
const int A12=54+12;
const int A13=54+13;
const int A14=54+14;
const int A15=54+15;
const int A16=54+16;

//array<String>^ pinDesc = {
//static const CString pinDesc[] = {
/*std::string pinDesc[] = {

	"ign","start",
	"lysoff","lysflip",
	"blinkl","blinkr",
	"compon",
	"rocklights",
	"brems",
	"rygg",
	"wiperoff","wiperon",
	"heat0","heat2",
	"horn",
	"spare","spare","spare",
	//outputs
	"ign","start","lys","highbeam","blinkl","blinkr","compressor","VF","HF","VB","HB","rocklights","brakes","rygg",
	// Analog pins
	"fan0", "fan1",
	"radiator",
	"joyNorth", "joyWest", "joyEast", "joySouth",
	"", "", "",  "", "", 
	"horn", 
	"fan", 
	"wiper", 
	"heater"
};*/

int digitalWrite(int pin, int value) {
	return pinStatus[pin]=value;
}

int digitalRead(int pin) {
	return pinStatus[pin];
}

int pinMode(int pin, int value) {
	pinWriteable[pin]=value;
	return 0;
}

