
  // include this file in your arduino program

#define ign0	22
#define start	23
#define lys0	24
#define hibeam	25
#define blinkl	26
#define blinkr	27
#define comp	28
#define rocklights	29
#define brake	30
#define rygg	31
#define wiper0	32
#define wiper1	33
#define heat0	34
#define heat2	35
#define horn	36
#define fan0	A0
#define fan1	A1
#define radiator	A2
#define joyN	A3
#define joyW	A4
#define joyE	A5
#define joyS	A6
#define arbfront	37
#define arbrear	38
#define clys	42
#define chibeaml	43
#define chibeamr	44
#define cblinkl	45
#define cblinkr	46
#define ccomp	47
#define cvf	48
#define chf	49
#define cvb	50
#define chb	51
#define crocklights	52
#define chorn	A12
#define cfan	A13
#define cwiper	A14
#define carbfront	A10
#define carbrear	A11

  // Call this from setup()
void initAutogenPins() {
 pinMode(ign0,INPUT_PULLUP);
 pinMode(start,INPUT_PULLUP);
 pinMode(lys0,INPUT_PULLUP);
 pinMode(hibeam,INPUT_PULLUP);
 pinMode(blinkl,INPUT_PULLUP);
 pinMode(blinkr,INPUT_PULLUP);
 pinMode(comp,INPUT_PULLUP);
 pinMode(rocklights,INPUT_PULLUP);
 pinMode(brake,INPUT_PULLUP);
 pinMode(rygg,INPUT_PULLUP);
 pinMode(wiper0,INPUT_PULLUP);
 pinMode(wiper1,INPUT_PULLUP);
 pinMode(heat0,INPUT_PULLUP);
 pinMode(heat2,INPUT_PULLUP);
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
 pinMode(chibeaml,OUTPUT);
 pinMode(chibeamr,OUTPUT);
 pinMode(cblinkl,OUTPUT);
 pinMode(cblinkr,OUTPUT);
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
};
