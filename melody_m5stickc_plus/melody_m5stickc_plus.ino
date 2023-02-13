#include "M5StickCPlus.h"

#define BEAT 300

void setup() {
  // put your setup code here, to run once:
  M5.begin();
}

void loop() {
  // put your main code here, to run repeatedly:
  M5.update();
  M5.Beep.update();

  if (M5.BtnA.isPressed()) {
    M5.Beep.tone(880, BEAT);
    delay(BEAT);
    M5.Beep.tone(739.989, BEAT);
    delay(BEAT);
    M5.Beep.tone(880, BEAT);
    delay(BEAT);
    M5.Beep.tone(987.767, BEAT * 2);
    delay(BEAT * 2);
    M5.Beep.tone(739.989, BEAT);
    delay(BEAT);
    M5.Beep.tone(659.255, BEAT);
    delay(BEAT);
    M5.Beep.tone(587.330, BEAT);
    delay(BEAT);

    M5.Beep.tone(659.255, BEAT);
    delay(BEAT);
    M5.Beep.tone(587.330, BEAT);
    delay(BEAT);
    M5.Beep.tone(880, BEAT);
    delay(BEAT);
    M5.Beep.tone(739.989, BEAT * 2);
    delay(BEAT * 2);
    M5.Beep.tone(783.991, BEAT);
    delay(BEAT);
    M5.Beep.tone(739.989, BEAT);
    delay(BEAT);
    M5.Beep.tone(659.255, BEAT);
    delay(BEAT);

    M5.Beep.tone(587.330, BEAT * 2);
    delay(BEAT * 2);
    M5.Beep.tone(739.989, BEAT * 2);
    delay(BEAT * 2);
    M5.Beep.tone(659.255, BEAT * 2);
    delay(BEAT * 2);
    M5.Beep.tone(493.883, BEAT * 2);
    delay(BEAT * 2);

    M5.Beep.tone(554.365, BEAT);
    delay(BEAT);
    M5.Beep.tone(587.330, BEAT);
    delay(BEAT);
    M5.Beep.tone(659.255, BEAT);
    delay(BEAT);
    M5.Beep.tone(587.330, BEAT * 3);
    delay(BEAT * 3);                            
  }
}
