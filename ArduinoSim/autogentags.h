
  // include this file in your arduino program

#define lys0	22
#define hibeam	23
#define blinkl	24
#define blinkr	25
#define comp	26
#define rocklights	27
#define rocklights2	28
#define brake	29
#define rygg	30
#define wiper0	31
#define wiper1	32
#define horn	33
#define fan0	34
#define fan1	35
#define radiator	36
#define joyN	37
#define joyW	38
#define joyE	39
#define joyS	40
#define arbfront	41
#define arbrear	42
#define clys	A0
#define clowbeam	A1
#define chibeaml	A2
#define chibeamr	A3
#define cblinkfl	A4
#define cblinkfr	A5
#define cblinkrl	A6
#define cblinkrr	A7
#define cbrakel	A8
#define cbraker	A9
#define ccomp	A10
#define cvf	A11
#define chf	A12
#define cvb	A13
#define chb	A14
#define crocklights	A15
#define chorn	4
#define cfan	5
#define cwiper	6
#define carbfront	7
#define carbrear	8
#define cspare2	9
#define cspare3	10
#define cspare4	11
#define cspare5	12

  // Call this from setup()
void initAutogenPins() {
 pinMode(lys0,INPUT_PULLUP);
 pinMode(hibeam,INPUT_PULLUP);
 pinMode(blinkl,INPUT_PULLUP);
 pinMode(blinkr,INPUT_PULLUP);
 pinMode(comp,INPUT_PULLUP);
 pinMode(rocklights,INPUT_PULLUP);
 pinMode(rocklights2,INPUT_PULLUP);
 pinMode(brake,INPUT_PULLUP);
 pinMode(rygg,INPUT_PULLUP);
 pinMode(wiper0,INPUT_PULLUP);
 pinMode(wiper1,INPUT_PULLUP);
 pinMode(horn,INPUT_PULLUP);
 pinMode(fan0,INPUT_PULLUP);
 pinMode(fan1,INPUT_PULLUP);
 pinMode(radiator,INPUT_PULLUP);
 pinMode(joyN,INPUT_PULLUP);
 pinMode(joyW,INPUT_PULLUP);
 pinMode(joyE,INPUT_PULLUP);
 pinMode(joyS,INPUT_PULLUP);
 pinMode(arbfront,INPUT_PULLUP);
 pinMode(arbrear,INPUT_PULLUP);
 pinMode(clys,OUTPUT);
 pinMode(clowbeam,OUTPUT);
 pinMode(chibeaml,OUTPUT);
 pinMode(chibeamr,OUTPUT);
 pinMode(cblinkfl,OUTPUT);
 pinMode(cblinkfr,OUTPUT);
 pinMode(cblinkrl,OUTPUT);
 pinMode(cblinkrr,OUTPUT);
 pinMode(cbrakel,OUTPUT);
 pinMode(cbraker,OUTPUT);
 pinMode(ccomp,OUTPUT);
 pinMode(cvf,OUTPUT);
 pinMode(chf,OUTPUT);
 pinMode(cvb,OUTPUT);
 pinMode(chb,OUTPUT);
 pinMode(crocklights,OUTPUT);
 pinMode(chorn,OUTPUT);
 pinMode(cfan,OUTPUT);
 pinMode(cwiper,OUTPUT);
 pinMode(carbfront,OUTPUT);
 pinMode(carbrear,OUTPUT);
 pinMode(cspare2,OUTPUT);
 pinMode(cspare3,OUTPUT);
 pinMode(cspare4,OUTPUT);
 pinMode(cspare5,OUTPUT);
};
