#include "musical_notes.h"

#define buzzer 3

void setup() {
  pinMode(buzzer, OUTPUT);
  MIDI();
}

void loop() {
}

void playTone(long frequency, long millisecond) {
    if(frequency > 0){
      long delayValue = 1000000 / frequency / 2;
      long numCycles = frequency * millisecond / 1000;
      for (long i = 0; i < numCycles; i++) {
          digitalWrite(buzzer, HIGH);
          delayMicroseconds(delayValue);
          digitalWrite(buzzer, LOW);
          delayMicroseconds(delayValue);
      }
    }
    else delay(millisecond);
}

void MIDI()
{
  playTone(note_Gb5, 35);
  delay(2);
  playTone(note_Eb7, 35);
}