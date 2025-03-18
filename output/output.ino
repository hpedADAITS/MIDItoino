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
  playTone(note_F7, 677);
  delay(37);
  playTone(note_G7, 677);
  delay(37);
  playTone(note_Bb7, 337);
  delay(19);
  playTone(note_C8, 337);
  delay(19);
  playTone(note_G7, 337);
  delay(19);
  playTone(note_F7, 337);
  delay(19);
  playTone(note_G7, 337);
  delay(19);
  playTone(note_C7, 337);
  delay(19);
  playTone(note_Eb7, 337);
  delay(19);
  playTone(note_F7, 337);
  delay(19);
  for(int i=0; i<337/200; i++){ playTone(note_Bb6, 10); delay(10); }
  playTone(note_D7, 337);
  delay(19);
  playTone(note_Eb7, 337);
  delay(19);
  playTone(note_D7, 337);
  delay(19);
  playTone(note_Bb6, 337);
  delay(19);
  for(int i=0; i<677/200; i++){ playTone(note_G6, 10); delay(10); }
  playTone(note_C7, 677);
  delay(37);
  playTone(note_G6, 337);
  delay(19);
  playTone(note_Bb6, 337);
  delay(19);
  for(int i=0; i<337/200; i++){ playTone(note_G6, 10); delay(10); }
  playTone(note_C7, 337);
  delay(19);
  playTone(note_Eb7, 337);
  delay(19);
  playTone(note_F7, 337);
  delay(19);
  playTone(note_Eb7, 337);
  delay(19);
  for(int i=0; i<677/200; i++){ playTone(note_Bb6, 10); delay(10); }
  playTone(note_F7, 677);
  delay(37);
  playTone(note_F7, 337);
  delay(19);
  playTone(note_Eb7, 337);
  delay(19);
  playTone(note_F7, 337);
  delay(19);
  playTone(note_Bb7, 337);
  delay(19);
  for(int i=0; i<1355/200; i++){ playTone(note_Eb7, 10); delay(10); }
  playTone(note_G7, 1355);
  delay(72);
  for(int i=0; i<337/200; i++){ playTone(note_Eb7, 10); delay(10); }
  playTone(note_G7, 337);
  delay(19);
  playTone(note_Bb7, 337);
  delay(19);
  for(int i=0; i<337/200; i++){ playTone(note_Eb7, 10); delay(10); }
  playTone(note_C8, 337);
  delay(19);
  for(int i=0; i<337/200; i++){ playTone(note_Eb7, 10); delay(10); }
  playTone(note_C8, 337);
  delay(19);
  for(int i=0; i<337/200; i++){ playTone(note_Eb7, 10); delay(10); }
  playTone(note_Bb7, 337);
  delay(19);
  playTone(note_C8, 337);
  delay(19);
  for(int i=0; i<677/200; i++){ playTone(note_D7, 10); delay(10); }
  playTone(note_G7, 677);
  delay(37);
  for(int i=0; i<337/200; i++){ playTone(note_D7, 10); delay(10); }
  playTone(note_G7, 337);
  delay(19);
  playTone(note_Eb7, 337);
  delay(19);
  for(int i=0; i<337/200; i++){ playTone(note_C7, 10); delay(10); }
  playTone(note_F7, 337);
  delay(19);
  playTone(note_G7, 337);
  delay(19);
  for(int i=0; i<337/200; i++){ playTone(note_Bb6, 10); delay(10); }
  playTone(note_F7, 337);
  delay(19);
  playTone(note_Eb7, 337);
  delay(19);
  for(int i=0; i<677/200; i++){ playTone(note_A6, 10); delay(10); }
  playTone(note_C7, 677);
  delay(37);
  playTone(note_C7, 337);
  delay(19);
  playTone(note_Bb6, 337);
  delay(19);
  for(int i=0; i<677/200; i++){ playTone(note_G6, 10); delay(10); }
  playTone(note_C7, 677);
  delay(37);
  for(int i=0; i<337/200; i++){ playTone(note_G6, 10); delay(10); }
  playTone(note_C7, 337);
  delay(19);
  playTone(note_Eb7, 337);
  delay(19);
  for(int i=0; i<337/200; i++){ playTone(note_Bb6, 10); delay(10); }
  playTone(note_F7, 337);
  delay(19);
  playTone(note_Eb7, 337);
  delay(19);
  playTone(note_F7, 337);
  delay(19);
  playTone(note_G7, 337);
  delay(19);
  playTone(note_C7, 1355);
  delay(72);
  for(int i=0; i<677/200; i++){ playTone(note_G6, 10); delay(10); }
  playTone(note_C7, 677);
  delay(37);
  playTone(note_C6, 337);
  delay(19);
  playTone(note_D6, 337);
  delay(19);
  playTone(note_Eb6, 1016);
  delay(55);
  playTone(note_Eb6, 69);
  delay(1);
  playTone(note_G6, 267);
  delay(17);
  playTone(note_F6, 337);
  delay(19);
  playTone(note_Eb6, 337);
  delay(19);
  playTone(note_D6, 337);
  delay(19);
  playTone(note_Eb6, 337);
  delay(19);
  playTone(note_C6, 1016);
  delay(55);
  playTone(note_D6, 337);
  delay(19);
  playTone(note_Eb6, 1016);
  delay(55);
  playTone(note_C6, 337);
  delay(19);
  for(int i=0; i<1016/200; i++){ playTone(note_D6, 10); delay(10); }
  playTone(note_F6, 1016);
  delay(55);
  playTone(note_Eb6, 337);
  delay(19);
  playTone(note_F6, 337);
  delay(19);
  playTone(note_Eb6, 111);
  delay(7);
  playTone(note_F6, 111);
  delay(7);
  playTone(note_Eb6, 111);
  delay(7);
  playTone(note_F6, 337);
  delay(19);
  playTone(note_G6, 337);
  delay(19);
  for(int i=0; i<1016/200; i++){ playTone(note_Eb6, 10); delay(10); }
  playTone(note_G6, 1016);
  delay(55);
  playTone(note_F6, 168);
  delay(10);
  playTone(note_G6, 168);
  delay(10);
  for(int i=0; i<677/200; i++){ playTone(note_D6, 10); delay(10); }
  playTone(note_G6, 677);
  delay(37);
  for(int i=0; i<337/200; i++){ playTone(note_B5, 10); delay(10); }
  for(int i=0; i<337/200; i++){ playTone(note_D6, 10); delay(10); }
  playTone(note_G6, 337);
  delay(19);
  playTone(note_C6, 168);
  delay(10);
  playTone(note_D6, 168);
  delay(10);
  for(int i=0; i<1016/200; i++){ playTone(note_C6, 10); delay(10); }
  playTone(note_Eb6, 1016);
  delay(55);
  playTone(note_G6, 337);
  delay(19);
  playTone(note_F6, 337);
  delay(19);
  playTone(note_Eb6, 337);
  delay(19);
  playTone(note_F6, 337);
  delay(19);
  playTone(note_G6, 337);
  delay(19);
  for(int i=0; i<1016/200; i++){ playTone(note_Eb6, 10); delay(10); }
  for(int i=0; i<1016/200; i++){ playTone(note_G6, 10); delay(10); }
  playTone(note_Bb6, 1016);
  delay(55);
  for(int i=0; i<337/200; i++){ playTone(note_Eb6, 10); delay(10); }
  playTone(note_C7, 337);
  delay(19);
  playTone(note_Eb6, 1016);
  delay(55);
  playTone(note_C6, 337);
  delay(19);
  playTone(note_D6, 1016);
  delay(55);
  playTone(note_C6, 337);
  delay(19);
  playTone(note_D6, 337);
  delay(19);
  playTone(note_Eb6, 337);
  delay(19);
  playTone(note_F6, 337);
  delay(19);
  playTone(note_D6, 337);
  delay(19);
  playTone(note_D6, 1016);
  delay(55);
  playTone(note_Eb6, 168);
  delay(10);
  playTone(note_D6, 168);
  delay(10);
  playTone(note_C6, 1016);
  delay(55);
  playTone(note_C6, 168);
  delay(10);
  playTone(note_D6, 168);
  delay(10);
  playTone(note_Eb6, 1016);
  delay(55);
  playTone(note_Eb6, 83);
  delay(1);
  playTone(note_G6, 255);
  delay(16);
  playTone(note_F6, 337);
  delay(19);
  playTone(note_Eb6, 337);
  delay(19);
  playTone(note_D6, 337);
  delay(19);
  playTone(note_Eb6, 337);
  delay(19);
  playTone(note_C6, 1016);
  delay(55);
  playTone(note_D6, 337);
  delay(19);
  playTone(note_Eb6, 1016);
  delay(55);
  playTone(note_C6, 337);
  delay(19);
  for(int i=0; i<1016/200; i++){ playTone(note_D6, 10); delay(10); }
  playTone(note_F6, 1016);
  delay(55);
  playTone(note_Eb6, 337);
  delay(19);
  playTone(note_F6, 337);
  delay(19);
  playTone(note_Eb6, 111);
  delay(7);
  playTone(note_F6, 111);
  delay(7);
  playTone(note_Eb6, 111);
  delay(7);
  playTone(note_F6, 337);
  delay(19);
  playTone(note_G6, 337);
  delay(19);
  for(int i=0; i<1016/200; i++){ playTone(note_Eb6, 10); delay(10); }
  playTone(note_G6, 1016);
  delay(55);
  playTone(note_F6, 168);
  delay(10);
  playTone(note_G6, 168);
  delay(10);
  playTone(note_D6, 677);
  delay(37);
  for(int i=0; i<337/200; i++){ playTone(note_D6, 10); delay(10); }
  playTone(note_G6, 337);
  delay(19);
  playTone(note_C6, 168);
  delay(10);
  playTone(note_D6, 168);
  delay(10);
  for(int i=0; i<1016/200; i++){ playTone(note_C6, 10); delay(10); }
  playTone(note_Eb6, 1016);
  delay(55);
  for(int i=0; i<337/200; i++){ playTone(note_C6, 10); delay(10); }
  for(int i=0; i<337/200; i++){ playTone(note_Eb6, 10); delay(10); }
  playTone(note_G6, 337);
  delay(19);
  playTone(note_F6, 337);
  delay(19);
  playTone(note_Eb6, 337);
  delay(19);
  for(int i=0; i<337/200; i++){ playTone(note_C6, 10); delay(10); }
  playTone(note_F6, 337);
  delay(19);
  playTone(note_G6, 337);
  delay(19);
  for(int i=0; i<677/200; i++){ playTone(note_Eb6, 10); delay(10); }
  playTone(note_Bb6, 677);
  delay(37);
  for(int i=0; i<337/200; i++){ playTone(note_Eb6, 10); delay(10); }
  playTone(note_Bb6, 337);
  delay(19);
  for(int i=0; i<337/200; i++){ playTone(note_Eb6, 10); delay(10); }
  playTone(note_C7, 337);
  delay(19);
  playTone(note_Eb6, 1016);
  delay(55);
  playTone(note_C6, 337);
  delay(19);
  playTone(note_D6, 1016);
  delay(55);
  playTone(note_C6, 337);
  delay(19);
  playTone(note_D6, 337);
  delay(19);
  playTone(note_Eb6, 337);
  delay(19);
  playTone(note_F6, 337);
  delay(19);
  playTone(note_D6, 337);
  delay(19);
  playTone(note_D6, 1016);
  delay(55);
  playTone(note_Eb6, 168);
  delay(10);
  playTone(note_D6, 168);
  delay(10);
  playTone(note_C6, 677);
  delay(37);
  for(int i=0; i<337/200; i++){ playTone(note_C6, 10); delay(10); }
  playTone(note_F6, 337);
  delay(19);
  playTone(note_G6, 337);
  delay(19);
  for(int i=0; i<337/200; i++){ playTone(note_Eb6, 10); delay(10); }
  playTone(note_Bb6, 337);
  delay(19);
  playTone(note_C7, 337);
  delay(19);
  playTone(note_G6, 337);
  delay(19);
  playTone(note_F6, 337);
  delay(19);
  for(int i=0; i<337/200; i++){ playTone(note_C6, 10); delay(10); }
  playTone(note_G6, 337);
  delay(19);
  playTone(note_C6, 337);
  delay(19);
  playTone(note_Eb6, 337);
  delay(19);
  playTone(note_F6, 337);
  delay(19);
  for(int i=0; i<337/200; i++){ playTone(note_Bb5, 10); delay(10); }
  playTone(note_D6, 337);
  delay(19);
  playTone(note_Eb6, 337);
  delay(19);
  playTone(note_D6, 337);
  delay(19);
  playTone(note_Bb5, 337);
  delay(19);
  playTone(note_G5, 1016);
  delay(55);
  playTone(note_Bb5, 337);
  delay(19);
  for(int i=0; i<337/200; i++){ playTone(note_G5, 10); delay(10); }
  playTone(note_C6, 337);
  delay(19);
  playTone(note_Eb6, 337);
  delay(19);
  playTone(note_F6, 337);
  delay(19);
  playTone(note_Eb6, 337);
  delay(19);
  for(int i=0; i<677/200; i++){ playTone(note_D6, 10); delay(10); }
  playTone(note_F6, 677);
  delay(37);
  for(int i=0; i<337/200; i++){ playTone(note_D6, 10); delay(10); }
  playTone(note_F6, 337);
  delay(19);
  playTone(note_Eb6, 337);
  delay(19);
  playTone(note_F6, 337);
  delay(19);
  playTone(note_Bb6, 337);
  delay(19);
  for(int i=0; i<1355/200; i++){ playTone(note_Eb6, 10); delay(10); }
  playTone(note_G6, 1355);
  delay(72);
  for(int i=0; i<337/200; i++){ playTone(note_Eb6, 10); delay(10); }
  playTone(note_G6, 337);
  delay(19);
  playTone(note_Bb6, 337);
  delay(19);
  for(int i=0; i<337/200; i++){ playTone(note_Eb6, 10); delay(10); }
  playTone(note_C7, 337);
  delay(19);
  for(int i=0; i<337/200; i++){ playTone(note_Eb6, 10); delay(10); }
  playTone(note_C7, 337);
  delay(19);
  for(int i=0; i<337/200; i++){ playTone(note_Eb6, 10); delay(10); }
  playTone(note_Bb6, 337);
  delay(19);
  playTone(note_C7, 337);
  delay(19);
  for(int i=0; i<677/200; i++){ playTone(note_D6, 10); delay(10); }
  playTone(note_G6, 677);
  delay(37);
  for(int i=0; i<337/200; i++){ playTone(note_D6, 10); delay(10); }
  playTone(note_G6, 337);
  delay(19);
  playTone(note_Eb6, 337);
  delay(19);
  for(int i=0; i<337/200; i++){ playTone(note_C6, 10); delay(10); }
  playTone(note_F6, 337);
  delay(19);
  playTone(note_G6, 337);
  delay(19);
  for(int i=0; i<337/200; i++){ playTone(note_Bb5, 10); delay(10); }
  playTone(note_F6, 337);
  delay(19);
  playTone(note_Eb6, 337);
  delay(19);
  for(int i=0; i<677/200; i++){ playTone(note_A5, 10); delay(10); }
  playTone(note_C6, 677);
  delay(37);
  playTone(note_C6, 337);
  delay(19);
  playTone(note_Bb5, 337);
  delay(19);
  playTone(note_C6, 677);
  delay(37);
  playTone(note_C6, 337);
  delay(19);
  playTone(note_Eb6, 337);
  delay(19);
  for(int i=0; i<337/200; i++){ playTone(note_D6, 10); delay(10); }
  playTone(note_F6, 337);
  delay(19);
  playTone(note_Eb6, 337);
  delay(19);
  playTone(note_F6, 337);
  delay(19);
  playTone(note_G6, 337);
  delay(19);
  for(int i=0; i<2034/200; i++){ playTone(note_G5, 10); delay(10); }
  playTone(note_C6, 2034);
  delay(108);
  for(int i=0; i<337/200; i++){ playTone(note_C7, 10); delay(10); }
  playTone(note_F7, 337);
  delay(19);
  playTone(note_G7, 337);
  delay(19);
  for(int i=0; i<337/200; i++){ playTone(note_Eb7, 10); delay(10); }
  playTone(note_Bb7, 337);
  delay(19);
  playTone(note_C8, 337);
  delay(19);
  playTone(note_G7, 337);
  delay(19);
  playTone(note_F7, 337);
  delay(19);
  for(int i=0; i<337/200; i++){ playTone(note_C7, 10); delay(10); }
  playTone(note_G7, 337);
  delay(19);
  playTone(note_C7, 337);
  delay(19);
  playTone(note_Eb7, 337);
  delay(19);
  playTone(note_F7, 337);
  delay(19);
  for(int i=0; i<337/200; i++){ playTone(note_Bb6, 10); delay(10); }
  playTone(note_D7, 337);
  delay(19);
  playTone(note_Eb7, 337);
  delay(19);
  playTone(note_D7, 111);
  delay(7);
  playTone(note_Eb7, 111);
  delay(7);
  playTone(note_D7, 111);
  delay(7);
  playTone(note_Bb6, 337);
  delay(19);
  playTone(note_C7, 677);
  delay(37);
  for(int i=0; i<337/200; i++){ playTone(note_Eb6, 10); delay(10); }
  playTone(note_G6, 337);
  delay(19);
  playTone(note_Bb6, 337);
  delay(19);
  for(int i=0; i<337/200; i++){ playTone(note_G6, 10); delay(10); }
  playTone(note_C7, 337);
  delay(19);
  playTone(note_Eb7, 337);
  delay(19);
  playTone(note_F7, 337);
  delay(19);
  playTone(note_Eb7, 337);
  delay(19);
  for(int i=0; i<677/200; i++){ playTone(note_D7, 10); delay(10); }
  playTone(note_F7, 677);
  delay(37);
  playTone(note_F7, 337);
  delay(19);
  playTone(note_Eb7, 337);
  delay(19);
  playTone(note_F7, 337);
  delay(19);
  playTone(note_F7, 168);
  delay(10);
  playTone(note_Eb7, 168);
  delay(10);
  playTone(note_F7, 337);
  delay(19);
  playTone(note_Bb7, 337);
  delay(19);
  for(int i=0; i<677/200; i++){ playTone(note_Eb7, 10); delay(10); }
  playTone(note_G7, 677);
  delay(37);
  for(int i=0; i<337/200; i++){ playTone(note_Eb7, 10); delay(10); }
  playTone(note_G7, 337);
  delay(19);
  playTone(note_Bb7, 337);
  delay(19);
  for(int i=0; i<337/200; i++){ playTone(note_Eb7, 10); delay(10); }
  playTone(note_C8, 337);
  delay(19);
  for(int i=0; i<337/200; i++){ playTone(note_Eb7, 10); delay(10); }
  playTone(note_C8, 337);
  delay(19);
  for(int i=0; i<337/200; i++){ playTone(note_Eb7, 10); delay(10); }
  playTone(note_Bb7, 337);
  delay(19);
  playTone(note_C8, 337);
  delay(19);
  for(int i=0; i<677/200; i++){ playTone(note_D7, 10); delay(10); }
  playTone(note_G7, 677);
  delay(37);
  for(int i=0; i<337/200; i++){ playTone(note_D7, 10); delay(10); }
  playTone(note_G7, 337);
  delay(19);
  playTone(note_Eb7, 337);
  delay(19);
  for(int i=0; i<337/200; i++){ playTone(note_C7, 10); delay(10); }
  playTone(note_F7, 337);
  delay(19);
  playTone(note_G7, 337);
  delay(19);
  for(int i=0; i<337/200; i++){ playTone(note_Bb6, 10); delay(10); }
  playTone(note_F7, 337);
  delay(19);
  playTone(note_Eb7, 337);
  delay(19);
  for(int i=0; i<677/200; i++){ playTone(note_A6, 10); delay(10); }
  playTone(note_C7, 677);
  delay(37);
  playTone(note_C7, 337);
  delay(19);
  playTone(note_Bb6, 337);
  delay(19);
  for(int i=0; i<677/200; i++){ playTone(note_G6, 10); delay(10); }
  playTone(note_C7, 677);
  delay(37);
  for(int i=0; i<337/200; i++){ playTone(note_G6, 10); delay(10); }
  playTone(note_C7, 337);
  delay(19);
  playTone(note_Eb7, 337);
  delay(19);
  for(int i=0; i<337/200; i++){ playTone(note_D7, 10); delay(10); }
  playTone(note_F7, 337);
  delay(19);
  playTone(note_Eb7, 337);
  delay(19);
  playTone(note_Bb7, 677);
  delay(37);
  for(int i=0; i<1355/200; i++){ playTone(note_E7, 10); delay(10); }
  playTone(note_C8, 1355);
  delay(429);
  playTone(note_A6, 81);
  delay(1);
  playTone(note_E7, 257);
  delay(16);
  playTone(note_D7, 337);
  delay(19);
  playTone(note_E7, 337);
  delay(19);
  playTone(note_A6, 337);
  delay(19);
  playTone(note_B6, 337);
  delay(19);
  playTone(note_C7, 337);
  delay(19);
  playTone(note_D7, 337);
  delay(19);
  playTone(note_E7, 677);
  delay(37);
  playTone(note_A6, 337);
  delay(19);
  playTone(note_B6, 337);
  delay(19);
  playTone(note_C7, 337);
  delay(19);
  playTone(note_B6, 337);
  delay(19);
  playTone(note_C7, 337);
  delay(19);
  playTone(note_D7, 337);
  delay(19);
  for(int i=0; i<677/200; i++){ playTone(note_C7, 10); delay(10); }
  playTone(note_E7, 677);
  delay(37);
  playTone(note_G6, 677);
  delay(37);
  for(int i=0; i<677/200; i++){ playTone(note_F6, 10); delay(10); }
  playTone(note_A6, 677);
  delay(37);
  for(int i=0; i<677/200; i++){ playTone(note_A6, 10); delay(10); }
  playTone(note_E7, 677);
  delay(37);
  playTone(note_E7, 337);
  delay(19);
  playTone(note_D7, 337);
  delay(19);
  playTone(note_E7, 337);
  delay(19);
  playTone(note_G7, 337);
  delay(19);
  for(int i=0; i<1355/200; i++){ playTone(note_G6, 10); delay(10); }
  for(int i=0; i<1355/200; i++){ playTone(note_C7, 10); delay(10); }
  playTone(note_E7, 1355);
  delay(430);
  playTone(note_D7, 98);
  delay(1);
  playTone(note_E7, 241);
  delay(16);
  playTone(note_D7, 337);
  delay(19);
  playTone(note_C7, 337);
  delay(19);
  playTone(note_A6, 337);
  delay(19);
  playTone(note_E7, 337);
  delay(19);
  playTone(note_A6, 337);
  delay(19);
  playTone(note_G6, 337);
  delay(19);
  for(int i=0; i<677/200; i++){ playTone(note_C7, 10); delay(10); }
  playTone(note_E7, 677);
  delay(37);
  playTone(note_D7, 337);
  delay(19);
  playTone(note_C7, 337);
  delay(19);
  playTone(note_D7, 677);
  delay(37);
  for(int i=0; i<677/200; i++){ playTone(note_B6, 10); delay(10); }
  for(int i=0; i<677/200; i++){ playTone(note_D7, 10); delay(10); }
  playTone(note_G7, 677);
  delay(37);
  for(int i=0; i<677/200; i++){ playTone(note_A6, 10); delay(10); }
  playTone(note_E7, 677);
  delay(37);
  playTone(note_G7, 677);
  delay(37);
  for(int i=0; i<1016/200; i++){ playTone(note_C7, 10); delay(10); }
  for(int i=0; i<1016/200; i++){ playTone(note_F7, 10); delay(10); }
  playTone(note_A7, 1016);
  delay(55);
  for(int i=0; i<337/200; i++){ playTone(note_C7, 10); delay(10); }
  playTone(note_E7, 337);
  delay(19);
  for(int i=0; i<677/200; i++){ playTone(note_C7, 10); delay(10); }
  playTone(note_E7, 677);
  delay(37);
  playTone(note_D7, 337);
  delay(19);
  playTone(note_C7, 337);
  delay(19);
  for(int i=0; i<677/200; i++){ playTone(note_A6, 10); delay(10); }
  playTone(note_D7, 677);
  delay(37);
  for(int i=0; i<677/200; i++){ playTone(note_A6, 10); delay(10); }
  playTone(note_D7, 677);
  delay(37);
  for(int i=0; i<677/200; i++){ playTone(note_Ab6, 10); delay(10); }
  for(int i=0; i<677/200; i++){ playTone(note_B6, 10); delay(10); }
  playTone(note_E7, 677);
  delay(37);
  playTone(note_E6, 337);
  delay(19);
  playTone(note_G6, 337);
  delay(19);
  for(int i=0; i<337/200; i++){ playTone(note_E6, 10); delay(10); }
  playTone(note_A6, 337);
  delay(19);
  playTone(note_G6, 337);
  delay(19);
  playTone(note_A6, 337);
  delay(19);
  playTone(note_E7, 337);
  delay(19);
  playTone(note_A6, 677);
  delay(37);
  playTone(note_A6, 337);
  delay(19);
  playTone(note_E7, 337);
  delay(19);
  for(int i=0; i<337/200; i++){ playTone(note_E6, 10); delay(10); }
  playTone(note_A6, 337);
  delay(19);
  playTone(note_G6, 337);
  delay(19);
  playTone(note_A6, 337);
  delay(19);
  playTone(note_E7, 337);
  delay(19);
  playTone(note_A6, 677);
  delay(37);
  playTone(note_A6, 337);
  delay(19);
  playTone(note_G6, 337);
  delay(19);
  for(int i=0; i<355/200; i++){ playTone(note_F6, 10); delay(10); }
  playTone(note_A6, 355);
  delay(1);
  playTone(note_E7, 337);
  delay(19);
  for(int i=0; i<677/200; i++){ playTone(note_F6, 10); delay(10); }
  playTone(note_A6, 677);
  delay(37);
  for(int i=0; i<712/200; i++){ playTone(note_F6, 10); delay(10); }
  playTone(note_A6, 712);
  delay(1);
  playTone(note_G6, 337);
  delay(19);
  playTone(note_A6, 337);
  delay(19);
  for(int i=0; i<2033/200; i++){ playTone(note_C6, 10); delay(10); }
  playTone(note_E6, 2033);
  delay(108);
  playTone(note_A6, 337);
  delay(19);
  playTone(note_G6, 337);
  delay(19);
  for(int i=0; i<337/200; i++){ playTone(note_F6, 10); delay(10); }
  playTone(note_A6, 337);
  delay(19);
  playTone(note_E7, 337);
  delay(19);
  playTone(note_A6, 337);
  delay(19);
  playTone(note_G6, 337);
  delay(19);
  playTone(note_A6, 677);
  delay(37);
  playTone(note_A6, 337);
  delay(19);
  playTone(note_G6, 337);
  delay(19);
  playTone(note_A6, 337);
  delay(19);
  playTone(note_E7, 337);
  delay(19);
  playTone(note_G7, 677);
  delay(37);
  for(int i=0; i<712/200; i++){ playTone(note_C7, 10); delay(10); }
  playTone(note_E7, 712);
  delay(1);
  for(int i=0; i<337/200; i++){ playTone(note_C7, 10); delay(10); }
  playTone(note_E7, 337);
  delay(19);
  playTone(note_G7, 337);
  delay(19);
  for(int i=0; i<1427/200; i++){ playTone(note_C7, 10); delay(10); }
  playTone(note_A7, 1427);
  delay(1);
  for(int i=0; i<474/200; i++){ playTone(note_A6, 10); delay(10); }
  playTone(note_E7, 474);
  delay(1);
  for(int i=0; i<474/200; i++){ playTone(note_A6, 10); delay(10); }
  playTone(note_D7, 474);
  delay(1);
  for(int i=0; i<474/200; i++){ playTone(note_A6, 10); delay(10); }
  playTone(note_C7, 474);
  delay(1);
  for(int i=0; i<677/200; i++){ playTone(note_A6, 10); delay(10); }
  playTone(note_D7, 677);
  delay(37);
  for(int i=0; i<1355/200; i++){ playTone(note_A6, 10); delay(10); }
  playTone(note_D7, 1355);
  delay(72);
  for(int i=0; i<712/200; i++){ playTone(note_A6, 10); delay(10); }
  playTone(note_D7, 712);
  delay(1);
  for(int i=0; i<1355/200; i++){ playTone(note_Ab6, 10); delay(10); }
  for(int i=0; i<1355/200; i++){ playTone(note_B6, 10); delay(10); }
  playTone(note_E7, 1355);
  delay(72);
  for(int i=0; i<1355/200; i++){ playTone(note_B4, 10); delay(10); }
  for(int i=0; i<1355/200; i++){ playTone(note_E5, 10); delay(10); }
  playTone(note_Ab5, 1355);
  delay(72);
  for(int i=0; i<1427/200; i++){ playTone(note_B4, 10); delay(10); }
  for(int i=0; i<1427/200; i++){ playTone(note_E5, 10); delay(10); }
  playTone(note_Ab5, 1427);
  delay(1);
  playTone(note_D5, 337);
  delay(19);
  playTone(note_E5, 337);
  delay(19);
  playTone(note_G5, 337);
  delay(19);
  playTone(note_A5, 337);
  delay(19);
  playTone(note_A5, 677);
  delay(37);
  playTone(note_C6, 337);
  delay(19);
  playTone(note_D6, 337);
  delay(19);
  playTone(note_E6, 677);
  delay(37);
  playTone(note_C6, 337);
  delay(19);
  playTone(note_A5, 337);
  delay(19);
  playTone(note_G5, 337);
  delay(19);
  playTone(note_E5, 337);
  delay(19);
  playTone(note_C6, 337);
  delay(19);
  playTone(note_D6, 337);
  delay(19);
  playTone(note_A5, 677);
  delay(37);
  playTone(note_A5, 337);
  delay(19);
  playTone(note_C6, 337);
  delay(19);
  for(int i=0; i<712/200; i++){ playTone(note_F5, 10); delay(10); }
  for(int i=0; i<712/200; i++){ playTone(note_A5, 10); delay(10); }
  playTone(note_D6, 712);
  delay(1);
  playTone(note_C6, 337);
  delay(19);
  playTone(note_D6, 337);
  delay(19);
  for(int i=0; i<712/200; i++){ playTone(note_G5, 10); delay(10); }
  for(int i=0; i<712/200; i++){ playTone(note_C6, 10); delay(10); }
  playTone(note_E6, 712);
  delay(1);
  for(int i=0; i<337/200; i++){ playTone(note_E6, 10); delay(10); }
  playTone(note_G6, 337);
  delay(19);
  playTone(note_A6, 337);
  delay(19);
  for(int i=0; i<337/200; i++){ playTone(note_E6, 10); delay(10); }
  playTone(note_C7, 337);
  delay(19);
  playTone(note_B6, 337);
  delay(19);
  playTone(note_A6, 81);
  delay(7);
  playTone(note_B6, 81);
  delay(7);
  playTone(note_A6, 81);
  delay(7);
  playTone(note_B6, 81);
  delay(7);
  playTone(note_G6, 337);
  delay(19);
  playTone(note_A6, 677);
  delay(37);
  for(int i=0; i<337/200; i++){ playTone(note_C6, 10); delay(10); }
  playTone(note_G6, 337);
  delay(19);
  for(int i=0; i<337/200; i++){ playTone(note_C6, 10); delay(10); }
  playTone(note_E6, 337);
  delay(19);
  for(int i=0; i<677/200; i++){ playTone(note_A5, 10); delay(10); }
  playTone(note_D6, 677);
  delay(37);
  playTone(note_E6, 337);
  delay(19);
  playTone(note_C6, 337);
  delay(19);
  for(int i=0; i<677/200; i++){ playTone(note_B5, 10); delay(10); }
  playTone(note_D6, 677);
  delay(37);
  playTone(note_C6, 337);
  delay(19);
  playTone(note_D6, 337);
  delay(19);
  playTone(note_E6, 507);
  delay(28);
  playTone(note_A5, 168);
  delay(10);
  playTone(note_C6, 168);
  delay(10);
  playTone(note_D6, 168);
  delay(10);
  playTone(note_C6, 337);
  delay(19);
  playTone(note_A5, 677);
  delay(37);
  playTone(note_A5, 337);
  delay(19);
  playTone(note_G5, 337);
  delay(19);
  for(int i=0; i<677/200; i++){ playTone(note_F5, 10); delay(10); }
  playTone(note_A5, 677);
  delay(37);
  playTone(note_A5, 337);
  delay(19);
  playTone(note_C6, 337);
  delay(19);
  for(int i=0; i<337/200; i++){ playTone(note_A5, 10); delay(10); }
  playTone(note_D6, 337);
  delay(19);
  playTone(note_C6, 337);
  delay(19);
  playTone(note_G5, 677);
  delay(37);
  for(int i=0; i<1427/200; i++){ playTone(note_C5, 10); delay(10); }
  for(int i=0; i<1427/200; i++){ playTone(note_E5, 10); delay(10); }
  playTone(note_A5, 1427);
  delay(1);
  for(int i=0; i<355/200; i++){ playTone(note_E5, 10); delay(10); }
  playTone(note_G5, 355);
  delay(1);
  for(int i=0; i<355/200; i++){ playTone(note_E5, 10); delay(10); }
  playTone(note_A5, 355);
  delay(1);
  playTone(note_C6, 337);
  delay(19);
  playTone(note_D6, 337);
  delay(376);
  for(int i=0; i<337/200; i++){ playTone(note_D6, 10); delay(10); }
  playTone(note_G6, 337);
  delay(19);
  playTone(note_F6, 337);
  delay(19);
  playTone(note_G6, 337);
  delay(19);
  for(int i=0; i<677/200; i++){ playTone(note_C6, 10); delay(10); }
  playTone(note_A6, 677);
  delay(37);
  playTone(note_F6, 337);
  delay(19);
  playTone(note_D6, 337);
  delay(19);
  for(int i=0; i<337/200; i++){ playTone(note_A5, 10); delay(10); }
  playTone(note_C6, 337);
  delay(19);
  playTone(note_A5, 337);
  delay(19);
  for(int i=0; i<337/200; i++){ playTone(note_A5, 10); delay(10); }
  playTone(note_F6, 337);
  delay(19);
  for(int i=0; i<337/200; i++){ playTone(note_A5, 10); delay(10); }
  playTone(note_G6, 337);
  delay(19);
  for(int i=0; i<677/200; i++){ playTone(note_A5, 10); delay(10); }
  playTone(note_D6, 677);
  delay(37);
  for(int i=0; i<337/200; i++){ playTone(note_A5, 10); delay(10); }
  playTone(note_D6, 337);
  delay(19);
  playTone(note_F6, 337);
  delay(19);
  for(int i=0; i<712/200; i++){ playTone(note_Bb5, 10); delay(10); }
  for(int i=0; i<712/200; i++){ playTone(note_D6, 10); delay(10); }
  playTone(note_G6, 712);
  delay(1);
  for(int i=0; i<337/200; i++){ playTone(note_Bb5, 10); delay(10); }
  for(int i=0; i<337/200; i++){ playTone(note_D6, 10); delay(10); }
  playTone(note_F6, 337);
  delay(19);
  for(int i=0; i<337/200; i++){ playTone(note_Bb5, 10); delay(10); }
  for(int i=0; i<337/200; i++){ playTone(note_D6, 10); delay(10); }
  playTone(note_G6, 337);
  delay(19);
  for(int i=0; i<712/200; i++){ playTone(note_E6, 10); delay(10); }
  playTone(note_A6, 712);
  delay(1);
  for(int i=0; i<337/200; i++){ playTone(note_E6, 10); delay(10); }
  playTone(note_C7, 337);
  delay(19);
  playTone(note_D7, 337);
  delay(19);
  for(int i=0; i<355/200; i++){ playTone(note_A6, 10); delay(10); }
  playTone(note_F7, 355);
  delay(1);
  playTone(note_E7, 337);
  delay(19);
  playTone(note_D7, 87);
  delay(1);
  playTone(note_E7, 87);
  delay(1);
  playTone(note_D7, 87);
  delay(1);
  playTone(note_E7, 87);
  delay(1);
  playTone(note_C7, 337);
  delay(19);
  for(int i=0; i<712/200; i++){ playTone(note_A6, 10); delay(10); }
  playTone(note_D7, 712);
  delay(1);
  playTone(note_C7, 337);
  delay(19);
  playTone(note_A6, 337);
  delay(19);
  for(int i=0; i<677/200; i++){ playTone(note_D6, 10); delay(10); }
  playTone(note_G6, 677);
  delay(37);
  for(int i=0; i<337/200; i++){ playTone(note_D6, 10); delay(10); }
  playTone(note_A6, 337);
  delay(19);
  for(int i=0; i<337/200; i++){ playTone(note_D6, 10); delay(10); }
  playTone(note_F6, 337);
  delay(19);
  for(int i=0; i<677/200; i++){ playTone(note_C6, 10); delay(10); }
  playTone(note_G6, 677);
  delay(37);
  playTone(note_F6, 337);
  delay(19);
  playTone(note_G6, 337);
  delay(19);
  playTone(note_A6, 507);
  delay(28);
  playTone(note_D6, 168);
  delay(10);
  playTone(note_F6, 98);
  delay(1);
  playTone(note_G6, 581);
  delay(32);
  playTone(note_D6, 677);
  delay(37);
  playTone(note_D6, 337);
  delay(19);
  playTone(note_C6, 337);
  delay(19);
  for(int i=0; i<677/200; i++){ playTone(note_Bb5, 10); delay(10); }
  playTone(note_D6, 677);
  delay(37);
  for(int i=0; i<337/200; i++){ playTone(note_Bb5, 10); delay(10); }
  playTone(note_D6, 337);
  delay(19);
  playTone(note_F6, 337);
  delay(19);
  for(int i=0; i<337/200; i++){ playTone(note_C6, 10); delay(10); }
  playTone(note_G6, 337);
  delay(19);
  playTone(note_F6, 337);
  delay(19);
  playTone(note_C7, 677);
  delay(37);
  for(int i=0; i<2140/200; i++){ playTone(note_D6, 10); delay(10); }
  for(int i=0; i<2140/200; i++){ playTone(note_Gb6, 10); delay(10); }
  for(int i=0; i<2140/200; i++){ playTone(note_A6, 10); delay(10); }
  playTone(note_D7, 2140);
  delay(1);
  playTone(note_G6, 337);
  delay(19);
  playTone(note_A6, 337);
  delay(19);
  for(int i=0; i<337/200; i++){ playTone(note_F6, 10); delay(10); }
  playTone(note_C7, 337);
  delay(19);
  playTone(note_D7, 337);
  delay(19);
  playTone(note_A6, 337);
  delay(19);
  playTone(note_G6, 337);
  delay(19);
  for(int i=0; i<337/200; i++){ playTone(note_F6, 10); delay(10); }
  playTone(note_A6, 337);
  delay(19);
  playTone(note_D6, 337);
  delay(19);
  playTone(note_F6, 337);
  delay(19);
  playTone(note_G6, 337);
  delay(19);
  for(int i=0; i<337/200; i++){ playTone(note_C6, 10); delay(10); }
  playTone(note_E6, 337);
  delay(19);
  playTone(note_F6, 337);
  delay(19);
  playTone(note_E6, 337);
  delay(19);
  playTone(note_C6, 337);
  delay(19);
  for(int i=0; i<677/200; i++){ playTone(note_A5, 10); delay(10); }
  playTone(note_D6, 677);
  delay(37);
  playTone(note_A5, 337);
  delay(19);
  playTone(note_C6, 337);
  delay(19);
  for(int i=0; i<337/200; i++){ playTone(note_Bb5, 10); delay(10); }
  playTone(note_D6, 337);
  delay(19);
  playTone(note_F6, 337);
  delay(19);
  playTone(note_G6, 337);
  delay(19);
  playTone(note_F6, 337);
  delay(19);
  for(int i=0; i<677/200; i++){ playTone(note_C6, 10); delay(10); }
  for(int i=0; i<677/200; i++){ playTone(note_E6, 10); delay(10); }
  playTone(note_G6, 677);
  delay(37);
  playTone(note_G6, 337);
  delay(19);
  playTone(note_F6, 337);
  delay(19);
  playTone(note_G6, 337);
  delay(19);
  playTone(note_C7, 337);
  delay(19);
  for(int i=0; i<1355/200; i++){ playTone(note_F6, 10); delay(10); }
  playTone(note_A6, 1355);
  delay(72);
  for(int i=0; i<337/200; i++){ playTone(note_F6, 10); delay(10); }
  playTone(note_A6, 337);
  delay(19);
  playTone(note_C7, 337);
  delay(19);
  for(int i=0; i<712/200; i++){ playTone(note_A6, 10); delay(10); }
  playTone(note_D7, 712);
  delay(1);
  playTone(note_C7, 337);
  delay(19);
  playTone(note_D7, 337);
  delay(19);
  for(int i=0; i<712/200; i++){ playTone(note_E6, 10); delay(10); }
  playTone(note_A6, 712);
  delay(1);
  playTone(note_A6, 337);
  delay(19);
  playTone(note_F6, 337);
  delay(19);
  for(int i=0; i<337/200; i++){ playTone(note_C6, 10); delay(10); }
  playTone(note_E6, 337);
  delay(19);
  playTone(note_F6, 337);
  delay(19);
  playTone(note_E6, 337);
  delay(19);
  playTone(note_C6, 337);
  delay(19);
  playTone(note_D6, 677);
  delay(37);
  playTone(note_D6, 337);
  delay(19);
  playTone(note_C6, 337);
  delay(19);
  for(int i=0; i<677/200; i++){ playTone(note_Bb5, 10); delay(10); }
  playTone(note_D6, 677);
  delay(37);
  playTone(note_D6, 337);
  delay(19);
  playTone(note_F6, 337);
  delay(19);
  for(int i=0; i<337/200; i++){ playTone(note_C6, 10); delay(10); }
  playTone(note_G6, 337);
  delay(19);
  playTone(note_F6, 337);
  delay(19);
  playTone(note_C7, 677);
  delay(37);
  for(int i=0; i<2033/200; i++){ playTone(note_Gb6, 10); delay(10); }
  playTone(note_D7, 2033);
  delay(108);
  playTone(note_A6, 337);
  delay(19);
  playTone(note_B6, 337);
  delay(19);
  playTone(note_C7, 337);
  delay(19);
  playTone(note_A6, 337);
  delay(19);
  playTone(note_C7, 337);
  delay(19);
  playTone(note_E7, 337);
  delay(19);
  playTone(note_D7, 337);
  delay(19);
  playTone(note_C7, 337);
  delay(19);
  playTone(note_B6, 337);
  delay(19);
  playTone(note_C7, 337);
  delay(19);
  playTone(note_A6, 337);
  delay(19);
  playTone(note_E6, 337);
  delay(19);
  playTone(note_A6, 337);
  delay(19);
  playTone(note_B6, 337);
  delay(19);
  playTone(note_C7, 337);
  delay(19);
  playTone(note_B6, 337);
  delay(19);
  playTone(note_A6, 337);
  delay(19);
  playTone(note_C7, 337);
  delay(19);
  playTone(note_D7, 337);
  delay(19);
  playTone(note_G6, 337);
  delay(19);
  playTone(note_B6, 337);
  delay(19);
  playTone(note_G6, 337);
  delay(19);
  playTone(note_C7, 337);
  delay(19);
  playTone(note_B6, 337);
  delay(19);
  playTone(note_C7, 337);
  delay(19);
  playTone(note_D7, 337);
  delay(19);
  playTone(note_E7, 677);
  delay(37);
  playTone(note_B6, 101);
  delay(1);
  playTone(note_C7, 238);
  delay(16);
  playTone(note_D7, 337);
  delay(19);
  playTone(note_E7, 712);
  delay(1);
  for(int i=0; i<712/200; i++){ playTone(note_Ab6, 10); delay(10); }
  playTone(note_B6, 712);
  delay(1);
  playTone(note_C7, 1016);
  delay(55);
  for(int i=0; i<337/200; i++){ playTone(note_C7, 10); delay(10); }
  playTone(note_E7, 337);
  delay(19);
  playTone(note_D7, 337);
  delay(19);
  playTone(note_C7, 337);
  delay(19);
  playTone(note_D7, 337);
  delay(19);
  playTone(note_E7, 337);
  delay(19);
  playTone(note_G7, 337);
  delay(19);
  playTone(note_E7, 337);
  delay(19);
  playTone(note_G7, 337);
  delay(19);
  playTone(note_A7, 337);
  delay(19);
  playTone(note_E7, 677);
  delay(37);
  playTone(note_E7, 337);
  delay(19);
  playTone(note_C7, 337);
  delay(19);
  playTone(note_B6, 337);
  delay(19);
  playTone(note_C7, 337);
  delay(19);
  playTone(note_D7, 337);
  delay(19);
  playTone(note_C7, 337);
  delay(19);
  playTone(note_B6, 337);
  delay(19);
  playTone(note_C7, 168);
  delay(10);
  playTone(note_B6, 168);
  delay(10);
  playTone(note_A6, 337);
  delay(19);
  playTone(note_G6, 337);
  delay(19);
  playTone(note_A6, 337);
  delay(19);
  playTone(note_E6, 337);
  delay(19);
  playTone(note_D6, 337);
  delay(19);
  playTone(note_E6, 337);
  delay(19);
  for(int i=0; i<677/200; i++){ playTone(note_Db6, 10); delay(10); }
  for(int i=0; i<677/200; i++){ playTone(note_E6, 10); delay(10); }
  playTone(note_A6, 677);
  delay(37);
  delay(357);
  for(int i=0; i<641/200; i++){ playTone(note_A5, 10); delay(10); }
  playTone(note_C6, 337);
  delay(19);
  for(int i=0; i<337/200; i++){ playTone(note_Bb5, 10); delay(10); }
  playTone(note_Db6, 337);
  delay(19);
  playTone(note_Bb5, 337);
  delay(19);
  playTone(note_Db6, 337);
  delay(19);
  playTone(note_F6, 337);
  delay(19);
  playTone(note_Eb6, 337);
  delay(19);
  playTone(note_Db6, 337);
  delay(19);
  playTone(note_C6, 337);
  delay(19);
  playTone(note_Db6, 337);
  delay(19);
  for(int i=0; i<337/200; i++){ playTone(note_F5, 10); delay(10); }
  playTone(note_Bb5, 337);
  delay(19);
  playTone(note_F5, 337);
  delay(19);
  playTone(note_Bb5, 337);
  delay(19);
  playTone(note_C6, 337);
  delay(19);
  playTone(note_Db6, 337);
  delay(19);
  playTone(note_Db6, 168);
  delay(10);
  playTone(note_C6, 168);
  delay(10);
  playTone(note_Bb5, 337);
  delay(19);
  playTone(note_Db6, 337);
  delay(19);
  playTone(note_C6, 337);
  delay(19);
  playTone(note_C6, 168);
  delay(10);
  playTone(note_Db6, 168);
  delay(10);
  playTone(note_Eb6, 355);
  delay(1);
  playTone(note_Db6, 337);
  delay(19);
  playTone(note_C6, 337);
  delay(19);
  playTone(note_Db6, 337);
  delay(19);
  playTone(note_Eb6, 355);
  delay(1);
  playTone(note_Ab6, 355);
  delay(1);
  for(int i=0; i<712/200; i++){ playTone(note_Db6, 10); delay(10); }
  playTone(note_F6, 712);
  delay(1);
  for(int i=0; i<1427/200; i++){ playTone(note_Ab5, 10); delay(10); }
  playTone(note_Db6, 1427);
  delay(1);
  for(int i=0; i<712/200; i++){ playTone(note_F5, 10); delay(10); }
  playTone(note_C6, 712);
  delay(1);
  for(int i=0; i<355/200; i++){ playTone(note_Bb5, 10); delay(10); }
  playTone(note_Db6, 355);
  delay(1);
  playTone(note_C6, 337);
  delay(19);
  playTone(note_Db6, 337);
  delay(19);
  playTone(note_Eb6, 337);
  delay(19);
  playTone(note_F6, 355);
  delay(1);
  playTone(note_Eb6, 337);
  delay(19);
  playTone(note_F6, 337);
  delay(19);
  playTone(note_Ab6, 337);
  delay(19);
  for(int i=0; i<355/200; i++){ playTone(note_Db6, 10); delay(10); }
  playTone(note_Bb6, 355);
  delay(1);
  playTone(note_Ab6, 337);
  delay(19);
  playTone(note_Bb6, 337);
  delay(19);
  playTone(note_C7, 337);
  delay(19);
  for(int i=0; i<712/200; i++){ playTone(note_F6, 10); delay(10); }
  playTone(note_Db7, 712);
  delay(1);
  playTone(note_C7, 337);
  delay(19);
  playTone(note_Bb6, 337);
  delay(19);
  for(int i=0; i<712/200; i++){ playTone(note_Eb6, 10); delay(10); }
  playTone(note_Ab6, 712);
  delay(1);
  for(int i=0; i<712/200; i++){ playTone(note_Eb6, 10); delay(10); }
  for(int i=0; i<712/200; i++){ playTone(note_Ab6, 10); delay(10); }
  playTone(note_C7, 712);
  delay(1);
  for(int i=0; i<337/200; i++){ playTone(note_Ab6, 10); delay(10); }
  playTone(note_Eb7, 337);
  delay(19);
  playTone(note_Db7, 337);
  delay(19);
  playTone(note_C7, 677);
  delay(37);
  for(int i=0; i<677/200; i++){ playTone(note_Eb6, 10); delay(10); }
  playTone(note_C7, 677);
  delay(37);
  for(int i=0; i<677/200; i++){ playTone(note_F6, 10); delay(10); }
  playTone(note_C7, 677);
  delay(37);
  for(int i=0; i<712/200; i++){ playTone(note_D6, 10); delay(10); }
  for(int i=0; i<712/200; i++){ playTone(note_F6, 10); delay(10); }
  playTone(note_Bb6, 712);
  delay(1);
  playTone(note_Eb6, 337);
  delay(19);
  playTone(note_F6, 337);
  delay(19);
  for(int i=0; i<337/200; i++){ playTone(note_Eb6, 10); delay(10); }
  playTone(note_Ab6, 337);
  delay(19);
  playTone(note_Bb6, 337);
  delay(19);
  playTone(note_F6, 337);
  delay(19);
  playTone(note_Eb6, 337);
  delay(19);
  playTone(note_F6, 337);
  delay(19);
  playTone(note_Bb5, 337);
  delay(19);
  playTone(note_Db6, 337);
  delay(19);
  playTone(note_Eb6, 337);
  delay(19);
  for(int i=0; i<337/200; i++){ playTone(note_Ab5, 10); delay(10); }
  playTone(note_C6, 337);
  delay(19);
  playTone(note_Db6, 337);
  delay(19);
  playTone(note_C6, 337);
  delay(19);
  playTone(note_Ab5, 337);
  delay(19);
  for(int i=0; i<677/200; i++){ playTone(note_F5, 10); delay(10); }
  playTone(note_Bb5, 677);
  delay(37);
  playTone(note_F5, 337);
  delay(19);
  playTone(note_Ab5, 337);
  delay(19);
  for(int i=0; i<337/200; i++){ playTone(note_F5, 10); delay(10); }
  playTone(note_Bb5, 337);
  delay(19);
  playTone(note_Db6, 337);
  delay(19);
  playTone(note_Eb6, 337);
  delay(19);
  playTone(note_Db6, 337);
  delay(19);
  for(int i=0; i<712/200; i++){ playTone(note_C6, 10); delay(10); }
  playTone(note_Eb6, 712);
  delay(1);
  playTone(note_Eb6, 337);
  delay(19);
  playTone(note_Db6, 337);
  delay(19);
  for(int i=0; i<355/200; i++){ playTone(note_C6, 10); delay(10); }
  playTone(note_Eb6, 355);
  delay(1);
  playTone(note_Ab6, 337);
  delay(19);
  for(int i=0; i<1427/200; i++){ playTone(note_Db6, 10); delay(10); }
  playTone(note_F6, 1427);
  delay(1);
  for(int i=0; i<355/200; i++){ playTone(note_Db6, 10); delay(10); }
  playTone(note_F6, 355);
  delay(1);
  playTone(note_Ab6, 355);
  delay(1);
  for(int i=0; i<337/200; i++){ playTone(note_Db6, 10); delay(10); }
  playTone(note_Bb6, 337);
  delay(19);
  for(int i=0; i<337/200; i++){ playTone(note_Db6, 10); delay(10); }
  playTone(note_Bb6, 337);
  delay(19);
  for(int i=0; i<337/200; i++){ playTone(note_Db6, 10); delay(10); }
  playTone(note_Ab6, 337);
  delay(19);
  playTone(note_Bb6, 337);
  delay(19);
  for(int i=0; i<677/200; i++){ playTone(note_C6, 10); delay(10); }
  playTone(note_F6, 677);
  delay(37);
  playTone(note_F6, 337);
  delay(19);
  playTone(note_Db6, 337);
  delay(19);
  playTone(note_Eb6, 337);
  delay(19);
  playTone(note_F6, 337);
  delay(19);
  for(int i=0; i<337/200; i++){ playTone(note_Bb5, 10); delay(10); }
  playTone(note_Eb6, 337);
  delay(19);
  playTone(note_Db6, 337);
  delay(19);
  playTone(note_Bb5, 677);
  delay(37);
  playTone(note_Bb5, 337);
  delay(19);
  playTone(note_Ab5, 337);
  delay(19);
  for(int i=0; i<677/200; i++){ playTone(note_Gb5, 10); delay(10); }
  playTone(note_Bb5, 677);
  delay(37);
  playTone(note_Bb5, 337);
  delay(19);
  playTone(note_Db6, 337);
  delay(19);
  for(int i=0; i<337/200; i++){ playTone(note_Ab5, 10); delay(10); }
  playTone(note_Eb6, 337);
  delay(19);
  playTone(note_Db6, 337);
  delay(19);
  playTone(note_Ab6, 712);
  delay(1);
  for(int i=0; i<2034/200; i++){ playTone(note_D6, 10); delay(10); }
  playTone(note_Bb6, 2034);
  delay(108);
  playTone(note_C7, 677);
  delay(37);
  playTone(note_Db7, 677);
  delay(37);
  playTone(note_Eb7, 677);
  delay(37);
  delay(93);
  delay(95);
  for(int i=0; i<1331/200; i++){ playTone(note_C7, 10); delay(10); }
  for(int i=0; i<1236/200; i++){ playTone(note_E7, 10); delay(10); }
  playTone(note_A6, 1425);
  delay(1);
  for(int i=0; i<337/200; i++){ playTone(note_A6, 10); delay(10); }
  for(int i=0; i<337/200; i++){ playTone(note_C7, 10); delay(10); }
  playTone(note_E7, 337);
  delay(19);
  playTone(note_D7, 337);
  delay(19);
  playTone(note_C7, 337);
  delay(19);
  for(int i=0; i<677/200; i++){ playTone(note_B6, 10); delay(10); }
  playTone(note_D7, 677);
  delay(37);
  for(int i=0; i<677/200; i++){ playTone(note_B6, 10); delay(10); }
  for(int i=0; i<677/200; i++){ playTone(note_D7, 10); delay(10); }
  playTone(note_G7, 677);
  delay(37);
  for(int i=0; i<677/200; i++){ playTone(note_G6, 10); delay(10); }
  playTone(note_B6, 677);
  delay(37);
  for(int i=0; i<337/200; i++){ playTone(note_G6, 10); delay(10); }
  playTone(note_B6, 337);
  delay(19);
  for(int i=0; i<337/200; i++){ playTone(note_A6, 10); delay(10); }
  playTone(note_C7, 337);
  delay(19);
  for(int i=0; i<337/200; i++){ playTone(note_B6, 10); delay(10); }
  playTone(note_D7, 337);
  delay(19);
  for(int i=0; i<677/200; i++){ playTone(note_B6, 10); delay(10); }
  playTone(note_D7, 677);
  delay(37);
  for(int i=0; i<337/200; i++){ playTone(note_C7, 10); delay(10); }
  playTone(note_E7, 337);
  delay(19);
  for(int i=0; i<677/200; i++){ playTone(note_A6, 10); delay(10); }
  playTone(note_C7, 677);
  delay(37);
  playTone(note_B6, 677);
  delay(37);
  playTone(note_C7, 676);
  delay(37);
  playTone(note_A6, 337);
  delay(19);
  playTone(note_B6, 337);
  delay(19);
  playTone(note_C7, 677);
  delay(37);
  for(int i=0; i<1016/200; i++){ playTone(note_C7, 10); delay(10); }
  playTone(note_E7, 1016);
  delay(55);
  for(int i=0; i<1355/200; i++){ playTone(note_A5, 10); delay(10); }
  for(int i=0; i<1355/200; i++){ playTone(note_C6, 10); delay(10); }
  playTone(note_E6, 1355);
  delay(72);
  for(int i=0; i<337/200; i++){ playTone(note_A5, 10); delay(10); }
  for(int i=0; i<337/200; i++){ playTone(note_C6, 10); delay(10); }
  playTone(note_E6, 337);
  delay(19);
  playTone(note_D6, 337);
  delay(19);
  playTone(note_C6, 337);
  delay(19);
  for(int i=0; i<677/200; i++){ playTone(note_B5, 10); delay(10); }
  playTone(note_D6, 677);
  delay(37);
  for(int i=0; i<677/200; i++){ playTone(note_B5, 10); delay(10); }
  for(int i=0; i<677/200; i++){ playTone(note_D6, 10); delay(10); }
  playTone(note_G6, 677);
  delay(37);
  for(int i=0; i<677/200; i++){ playTone(note_C6, 10); delay(10); }
  playTone(note_A6, 677);
  delay(37);
  for(int i=0; i<337/200; i++){ playTone(note_D6, 10); delay(10); }
  for(int i=0; i<337/200; i++){ playTone(note_G6, 10); delay(10); }
  playTone(note_B6, 337);
  delay(19);
  playTone(note_C7, 337);
  delay(19);
  playTone(note_B6, 337);
  delay(19);
  playTone(note_G6, 337);
  delay(19);
  playTone(note_A6, 337);
  delay(19);
  for(int i=0; i<337/200; i++){ playTone(note_E6, 10); delay(10); }
  playTone(note_C7, 337);
  delay(19);
  playTone(note_B6, 337);
  delay(19);
  for(int i=0; i<337/200; i++){ playTone(note_C6, 10); delay(10); }
  playTone(note_G6, 337);
  delay(19);
  playTone(note_A6, 677);
  delay(37);
  for(int i=0; i<677/200; i++){ playTone(note_E6, 10); delay(10); }
  playTone(note_A6, 677);
  delay(37);
  for(int i=0; i<337/200; i++){ playTone(note_C6, 10); delay(10); }
  for(int i=0; i<337/200; i++){ playTone(note_E6, 10); delay(10); }
  playTone(note_A6, 337);
  delay(19);
  playTone(note_G6, 337);
  delay(19);
  playTone(note_A6, 337);
  delay(19);
  for(int i=0; i<337/200; i++){ playTone(note_B5, 10); delay(10); }
  playTone(note_E6, 337);
  delay(19);
  playTone(note_D6, 337);
  delay(19);
  playTone(note_C6, 677);
  delay(37);
  delay(93);
  delay(95);
  for(int i=0; i<1331/200; i++){ playTone(note_C7, 10); delay(10); }
  for(int i=0; i<1236/200; i++){ playTone(note_E7, 10); delay(10); }
  playTone(note_A6, 1425);
  delay(1);
  for(int i=0; i<337/200; i++){ playTone(note_A6, 10); delay(10); }
  for(int i=0; i<337/200; i++){ playTone(note_C7, 10); delay(10); }
  playTone(note_E7, 337);
  delay(19);
  playTone(note_D7, 337);
  delay(19);
  playTone(note_C7, 337);
  delay(19);
  for(int i=0; i<677/200; i++){ playTone(note_B6, 10); delay(10); }
  playTone(note_D7, 677);
  delay(37);
  for(int i=0; i<677/200; i++){ playTone(note_B6, 10); delay(10); }
  for(int i=0; i<677/200; i++){ playTone(note_D7, 10); delay(10); }
  playTone(note_G7, 677);
  delay(37);
  for(int i=0; i<677/200; i++){ playTone(note_G6, 10); delay(10); }
  playTone(note_B6, 677);
  delay(37);
  for(int i=0; i<337/200; i++){ playTone(note_G6, 10); delay(10); }
  playTone(note_B6, 337);
  delay(19);
  for(int i=0; i<337/200; i++){ playTone(note_A6, 10); delay(10); }
  playTone(note_C7, 337);
  delay(19);
  for(int i=0; i<337/200; i++){ playTone(note_B6, 10); delay(10); }
  playTone(note_D7, 337);
  delay(19);
  for(int i=0; i<677/200; i++){ playTone(note_B6, 10); delay(10); }
  playTone(note_D7, 677);
  delay(37);
  for(int i=0; i<337/200; i++){ playTone(note_C7, 10); delay(10); }
  playTone(note_E7, 337);
  delay(19);
  for(int i=0; i<677/200; i++){ playTone(note_A6, 10); delay(10); }
  playTone(note_C7, 677);
  delay(37);
  playTone(note_B6, 677);
  delay(37);
  playTone(note_C7, 677);
  delay(37);
  playTone(note_A6, 337);
  delay(19);
  playTone(note_B6, 337);
  delay(19);
  playTone(note_C7, 677);
  delay(37);
  for(int i=0; i<337/200; i++){ playTone(note_E6, 10); delay(10); }
  playTone(note_E7, 337);
  delay(19);
  playTone(note_B6, 337);
  delay(19);
  playTone(note_G6, 337);
  delay(19);
  for(int i=0; i<1355/200; i++){ playTone(note_A6, 10); delay(10); }
  for(int i=0; i<1355/200; i++){ playTone(note_C7, 10); delay(10); }
  playTone(note_E7, 1355);
  delay(72);
  for(int i=0; i<337/200; i++){ playTone(note_A6, 10); delay(10); }
  for(int i=0; i<337/200; i++){ playTone(note_C7, 10); delay(10); }
  playTone(note_E7, 337);
  delay(19);
  playTone(note_D7, 337);
  delay(19);
  playTone(note_C7, 337);
  delay(19);
  for(int i=0; i<676/200; i++){ playTone(note_B6, 10); delay(10); }
  playTone(note_D7, 676);
  delay(37);
  for(int i=0; i<677/200; i++){ playTone(note_B6, 10); delay(10); }
  for(int i=0; i<677/200; i++){ playTone(note_D7, 10); delay(10); }
  playTone(note_G7, 677);
  delay(37);
  for(int i=0; i<677/200; i++){ playTone(note_C7, 10); delay(10); }
  playTone(note_A7, 677);
  delay(37);
  for(int i=0; i<337/200; i++){ playTone(note_B6, 10); delay(10); }
  playTone(note_B7, 337);
  delay(19);
  for(int i=0; i<337/200; i++){ playTone(note_C7, 10); delay(10); }
  playTone(note_C8, 337);
  delay(19);
  for(int i=0; i<337/200; i++){ playTone(note_B6, 10); delay(10); }
  playTone(note_B7, 337);
  delay(19);
  for(int i=0; i<337/200; i++){ playTone(note_G6, 10); delay(10); }
  playTone(note_G7, 337);
  delay(19);
  for(int i=0; i<337/200; i++){ playTone(note_A6, 10); delay(10); }
  playTone(note_A7, 337);
  delay(19);
  for(int i=0; i<337/200; i++){ playTone(note_C7, 10); delay(10); }
  playTone(note_C8, 337);
  delay(19);
  for(int i=0; i<337/200; i++){ playTone(note_B6, 10); delay(10); }
  playTone(note_B7, 337);
  delay(19);
  for(int i=0; i<337/200; i++){ playTone(note_E6, 10); delay(10); }
  playTone(note_E7, 337);
  delay(19);
  for(int i=0; i<337/200; i++){ playTone(note_G6, 10); delay(10); }
  playTone(note_G7, 337);
  delay(19);
  for(int i=0; i<337/200; i++){ playTone(note_A6, 10); delay(10); }
  playTone(note_A7, 337);
  delay(19);
  for(int i=0; i<677/200; i++){ playTone(note_C7, 10); delay(10); }
  playTone(note_C8, 677);
  delay(37);
  for(int i=0; i<337/200; i++){ playTone(note_C7, 10); delay(10); }
  playTone(note_C8, 337);
  delay(19);
  for(int i=0; i<677/200; i++){ playTone(note_B6, 10); delay(10); }
  playTone(note_B7, 677);
  delay(37);
  for(int i=0; i<337/200; i++){ playTone(note_A6, 10); delay(10); }
  playTone(note_A7, 337);
  delay(19);
  for(int i=0; i<1016/200; i++){ playTone(note_G6, 10); delay(10); }
  playTone(note_G7, 1016);
  delay(55);
  for(int i=0; i<1427/200; i++){ playTone(note_Bb6, 10); delay(10); }
  playTone(note_F7, 1427);
  delay(1);
  playTone(note_Ab6, 337);
  delay(19);
  playTone(note_Bb6, 337);
  delay(19);
  playTone(note_F7, 337);
  delay(19);
  for(int i=0; i<694/200; i++){ playTone(note_C7, 10); delay(10); }
  playTone(note_Eb7, 694);
  delay(19);
  for(int i=0; i<337/200; i++){ playTone(note_C7, 10); delay(10); }
  playTone(note_Eb7, 337);
  delay(19);
  for(int i=0; i<337/200; i++){ playTone(note_Bb6, 10); delay(10); }
  playTone(note_Db7, 337);
  delay(19);
  playTone(note_C7, 677);
  delay(37);
  for(int i=0; i<337/200; i++){ playTone(note_Ab6, 10); delay(10); }
  playTone(note_C7, 337);
  delay(19);
  playTone(note_Db7, 677);
  delay(37);
  for(int i=0; i<677/200; i++){ playTone(note_Ab6, 10); delay(10); }
  for(int i=0; i<677/200; i++){ playTone(note_C7, 10); delay(10); }
  playTone(note_Eb7, 677);
  delay(37);
  for(int i=0; i<337/200; i++){ playTone(note_Ab6, 10); delay(10); }
  for(int i=0; i<337/200; i++){ playTone(note_C7, 10); delay(10); }
  playTone(note_Eb7, 337);
  delay(19);
  for(int i=0; i<677/200; i++){ playTone(note_Ab6, 10); delay(10); }
  playTone(note_Db7, 677);
  delay(37);
  for(int i=0; i<677/200; i++){ playTone(note_Ab6, 10); delay(10); }
  playTone(note_C7, 677);
  delay(37);
  playTone(note_Db7, 676);
  delay(37);
  for(int i=0; i<355/200; i++){ playTone(note_F6, 10); delay(10); }
  playTone(note_Bb6, 355);
  delay(1);
  playTone(note_C7, 337);
  delay(19);
  playTone(note_Db7, 712);
  delay(1);
  for(int i=0; i<1069/200; i++){ playTone(note_Bb6, 10); delay(10); }
  for(int i=0; i<1069/200; i++){ playTone(note_Db7, 10); delay(10); }
  playTone(note_F7, 1069);
  delay(1);
  for(int i=0; i<1427/200; i++){ playTone(note_Bb6, 10); delay(10); }
  for(int i=0; i<1427/200; i++){ playTone(note_Db7, 10); delay(10); }
  playTone(note_F7, 1427);
  delay(1);
  for(int i=0; i<337/200; i++){ playTone(note_Bb6, 10); delay(10); }
  for(int i=0; i<337/200; i++){ playTone(note_Db7, 10); delay(10); }
  playTone(note_F7, 337);
  delay(19);
  playTone(note_Eb7, 337);
  delay(19);
  playTone(note_Db7, 337);
  delay(19);
  for(int i=0; i<677/200; i++){ playTone(note_C7, 10); delay(10); }
  playTone(note_Eb7, 677);
  delay(37);
  for(int i=0; i<677/200; i++){ playTone(note_C7, 10); delay(10); }
  for(int i=0; i<677/200; i++){ playTone(note_Eb7, 10); delay(10); }
  playTone(note_Ab7, 677);
  delay(37);
  for(int i=0; i<677/200; i++){ playTone(note_Eb7, 10); delay(10); }
  playTone(note_Bb7, 677);
  delay(37);
  for(int i=0; i<337/200; i++){ playTone(note_Eb7, 10); delay(10); }
  playTone(note_C8, 337);
  delay(19);
  playTone(note_Db8, 337);
  delay(19);
  playTone(note_C8, 337);
  delay(19);
  playTone(note_Ab7, 355);
  delay(1);
  playTone(note_Bb7, 337);
  delay(19);
  playTone(note_Db8, 337);
  delay(19);
  playTone(note_C8, 337);
  delay(19);
  playTone(note_Ab7, 337);
  delay(19);
  playTone(note_Bb7, 677);
  delay(37);
  for(int i=0; i<677/200; i++){ playTone(note_Db7, 10); delay(10); }
  for(int i=0; i<677/200; i++){ playTone(note_F7, 10); delay(10); }
  playTone(note_Bb7, 677);
  delay(37);
  for(int i=0; i<337/200; i++){ playTone(note_Db7, 10); delay(10); }
  for(int i=0; i<337/200; i++){ playTone(note_F7, 10); delay(10); }
  playTone(note_Bb7, 337);
  delay(19);
  playTone(note_Ab7, 337);
  delay(19);
  playTone(note_Bb7, 337);
  delay(19);
  for(int i=0; i<337/200; i++){ playTone(note_C7, 10); delay(10); }
  playTone(note_F7, 337);
  delay(19);
  playTone(note_Eb7, 337);
  delay(19);
  playTone(note_Db7, 677);
  delay(37);
  for(int i=0; i<1427/200; i++){ playTone(note_Bb6, 10); delay(10); }
  for(int i=0; i<1427/200; i++){ playTone(note_Db7, 10); delay(10); }
  playTone(note_F7, 1427);
  delay(1);
  for(int i=0; i<337/200; i++){ playTone(note_Bb6, 10); delay(10); }
  for(int i=0; i<337/200; i++){ playTone(note_Db7, 10); delay(10); }
  playTone(note_F7, 337);
  delay(19);
  playTone(note_Eb7, 337);
  delay(19);
  playTone(note_Db7, 337);
  delay(19);
  for(int i=0; i<677/200; i++){ playTone(note_C7, 10); delay(10); }
  playTone(note_Eb7, 677);
  delay(37);
  for(int i=0; i<677/200; i++){ playTone(note_C7, 10); delay(10); }
  for(int i=0; i<677/200; i++){ playTone(note_Eb7, 10); delay(10); }
  playTone(note_Ab7, 677);
  delay(37);
  for(int i=0; i<677/200; i++){ playTone(note_Ab6, 10); delay(10); }
  playTone(note_C7, 677);
  delay(37);
  for(int i=0; i<337/200; i++){ playTone(note_Ab6, 10); delay(10); }
  playTone(note_C7, 337);
  delay(19);
  playTone(note_Db7, 337);
  delay(19);
  playTone(note_Eb7, 337);
  delay(19);
  for(int i=0; i<677/200; i++){ playTone(note_C7, 10); delay(10); }
  playTone(note_Eb7, 677);
  delay(37);
  for(int i=0; i<337/200; i++){ playTone(note_C7, 10); delay(10); }
  playTone(note_F7, 337);
  delay(19);
  playTone(note_Db7, 677);
  delay(37);
  playTone(note_C7, 677);
  delay(37);
  playTone(note_Db7, 677);
  delay(37);
  for(int i=0; i<355/200; i++){ playTone(note_F6, 10); delay(10); }
  playTone(note_Bb6, 355);
  delay(1);
  playTone(note_C7, 337);
  delay(19);
  playTone(note_Db7, 677);
  delay(37);
  for(int i=0; i<1069/200; i++){ playTone(note_Bb6, 10); delay(10); }
  for(int i=0; i<1069/200; i++){ playTone(note_Db7, 10); delay(10); }
  playTone(note_F7, 1069);
  delay(1);
  delay(93);
  delay(95);
  for(int i=0; i<1331/200; i++){ playTone(note_Db7, 10); delay(10); }
  for(int i=0; i<1236/200; i++){ playTone(note_F7, 10); delay(10); }
  playTone(note_Bb6, 1425);
  delay(1);
  for(int i=0; i<355/200; i++){ playTone(note_Bb6, 10); delay(10); }
  for(int i=0; i<355/200; i++){ playTone(note_Db7, 10); delay(10); }
  playTone(note_F7, 355);
  delay(1);
  playTone(note_Eb7, 337);
  delay(19);
  playTone(note_Db7, 337);
  delay(19);
  delay(46);
  for(int i=0; i<647/200; i++){ playTone(note_Eb7, 10); delay(10); }
  playTone(note_C7, 694);
  delay(19);
  for(int i=0; i<712/200; i++){ playTone(note_C7, 10); delay(10); }
  for(int i=0; i<712/200; i++){ playTone(note_Eb7, 10); delay(10); }
  playTone(note_Ab7, 712);
  delay(1);
  for(int i=0; i<677/200; i++){ playTone(note_Eb7, 10); delay(10); }
  playTone(note_Bb7, 677);
  delay(37);
  for(int i=0; i<337/200; i++){ playTone(note_Eb7, 10); delay(10); }
  playTone(note_C8, 337);
  delay(19);
  playTone(note_Db8, 355);
  delay(1);
  playTone(note_Db8, 355);
  delay(1);
  for(int i=0; i<1016/200; i++){ playTone(note_Eb7, 10); delay(10); }
  playTone(note_C8, 1016);
  delay(55);
  for(int i=0; i<534/200; i++){ playTone(note_Eb7, 10); delay(10); }
  playTone(note_C8, 534);
  delay(537);
  for(int i=0; i<1391/200; i++){ playTone(note_D7, 10); delay(10); }
  playTone(note_Bb7, 1391);
  delay(37);
  playTone(note_Bb6, 677);
  delay(37);
  playTone(note_Db7, 677);
  delay(37);
  playTone(note_Eb7, 677);
  delay(37);
  for(int i=0; i<337/200; i++){ playTone(note_E7, 10); delay(10); }
  playTone(note_G7, 337);
  delay(19);
  playTone(note_A7, 337);
  delay(19);
  playTone(note_E7, 337);
  delay(19);
  playTone(note_D7, 337);
  delay(19);
  playTone(note_E7, 337);
  delay(19);
  playTone(note_A6, 337);
  delay(19);
  playTone(note_C7, 337);
  delay(19);
  playTone(note_D7, 337);
  delay(19);
  for(int i=0; i<337/200; i++){ playTone(note_G6, 10); delay(10); }
  playTone(note_B6, 337);
  delay(19);
  playTone(note_C7, 337);
  delay(19);
  playTone(note_B6, 337);
  delay(19);
  playTone(note_G6, 337);
  delay(19);
  playTone(note_A6, 677);
  delay(37);
  for(int i=0; i<337/200; i++){ playTone(note_C6, 10); delay(10); }
  playTone(note_E6, 337);
  delay(19);
  playTone(note_G6, 337);
  delay(19);
  playTone(note_A6, 337);
  delay(19);
  playTone(note_C7, 337);
  delay(19);
  playTone(note_D7, 337);
  delay(19);
  playTone(note_C7, 337);
  delay(19);
  for(int i=0; i<677/200; i++){ playTone(note_B6, 10); delay(10); }
  playTone(note_D7, 677);
  delay(37);
  for(int i=0; i<337/200; i++){ playTone(note_B6, 10); delay(10); }
  playTone(note_D7, 337);
  delay(19);
  playTone(note_C7, 337);
  delay(19);
  playTone(note_D7, 337);
  delay(19);
  playTone(note_G7, 337);
  delay(19);
  for(int i=0; i<1355/200; i++){ playTone(note_C7, 10); delay(10); }
  playTone(note_E7, 1355);
  delay(72);
  for(int i=0; i<337/200; i++){ playTone(note_C7, 10); delay(10); }
  playTone(note_E7, 337);
  delay(19);
  playTone(note_G7, 337);
  delay(19);
  for(int i=0; i<677/200; i++){ playTone(note_F7, 10); delay(10); }
  playTone(note_A7, 677);
  delay(37);
  playTone(note_G7, 337);
  delay(19);
  playTone(note_A7, 337);
  delay(19);
  for(int i=0; i<677/200; i++){ playTone(note_C7, 10); delay(10); }
  playTone(note_E7, 677);
  delay(37);
  for(int i=0; i<337/200; i++){ playTone(note_C7, 10); delay(10); }
  playTone(note_E7, 337);
  delay(19);
  playTone(note_C7, 337);
  delay(19);
  for(int i=0; i<337/200; i++){ playTone(note_B6, 10); delay(10); }
  playTone(note_D7, 337);
  delay(19);
  playTone(note_E7, 337);
  delay(19);
  playTone(note_D7, 337);
  delay(19);
  playTone(note_C7, 337);
  delay(19);
  playTone(note_A6, 677);
  delay(37);
  playTone(note_A6, 337);
  delay(19);
  playTone(note_G6, 337);
  delay(19);
  for(int i=0; i<677/200; i++){ playTone(note_F6, 10); delay(10); }
  playTone(note_A6, 677);
  delay(37);
  playTone(note_A6, 337);
  delay(19);
  playTone(note_C7, 337);
  delay(19);
  for(int i=0; i<337/200; i++){ playTone(note_A6, 10); delay(10); }
  playTone(note_D7, 337);
  delay(19);
  playTone(note_C7, 337);
  delay(19);
  playTone(note_D7, 337);
  delay(19);
  playTone(note_E7, 337);
  delay(19);
  for(int i=0; i<677/200; i++){ playTone(note_E6, 10); delay(10); }
  playTone(note_A6, 677);
  delay(37);
  playTone(note_D6, 677);
  delay(37);
  playTone(note_Db6, 677);
  delay(37);
  playTone(note_D6, 337);
  delay(19);
  for(int i=0; i<337/200; i++){ playTone(note_A5, 10); delay(10); }
  playTone(note_E6, 337);
  delay(19);
  for(int i=0; i<337/200; i++){ playTone(note_C6, 10); delay(10); }
  playTone(note_G6, 337);
  delay(19);
  playTone(note_A6, 337);
  delay(19);
  playTone(note_E6, 337);
  delay(19);
  playTone(note_D6, 337);
  delay(19);
  for(int i=0; i<337/200; i++){ playTone(note_C6, 10); delay(10); }
  playTone(note_E6, 337);
  delay(19);
  playTone(note_A5, 337);
  delay(19);
  playTone(note_C6, 337);
  delay(19);
  playTone(note_D6, 337);
  delay(19);
  for(int i=0; i<337/200; i++){ playTone(note_G5, 10); delay(10); }
  playTone(note_B5, 337);
  delay(19);
  playTone(note_C6, 337);
  delay(19);
  playTone(note_B5, 337);
  delay(19);
  playTone(note_G5, 337);
  delay(19);
  playTone(note_A5, 677);
  delay(37);
  playTone(note_E5, 355);
  delay(1);
  playTone(note_G5, 337);
  delay(19);
  for(int i=0; i<337/200; i++){ playTone(note_E5, 10); delay(10); }
  playTone(note_A5, 337);
  delay(19);
  playTone(note_C6, 337);
  delay(19);
  playTone(note_D6, 337);
  delay(19);
  playTone(note_C6, 337);
  delay(19);
  for(int i=0; i<677/200; i++){ playTone(note_B5, 10); delay(10); }
  playTone(note_D6, 677);
  delay(37);
  for(int i=0; i<355/200; i++){ playTone(note_B5, 10); delay(10); }
  playTone(note_D6, 355);
  delay(1);
  playTone(note_C6, 337);
  delay(19);
  for(int i=0; i<337/200; i++){ playTone(note_B5, 10); delay(10); }
  playTone(note_D6, 337);
  delay(19);
  playTone(note_D6, 168);
  delay(10);
  playTone(note_C6, 168);
  delay(10);
  playTone(note_D6, 337);
  delay(19);
  playTone(note_G6, 355);
  delay(1);
  for(int i=0; i<712/200; i++){ playTone(note_C6, 10); delay(10); }
  playTone(note_E6, 712);
  delay(1);
  for(int i=0; i<355/200; i++){ playTone(note_C6, 10); delay(10); }
  playTone(note_E6, 355);
  delay(1);
  playTone(note_G6, 337);
  delay(19);
  for(int i=0; i<712/200; i++){ playTone(note_C6, 10); delay(10); }
  playTone(note_A6, 712);
  delay(1);
  for(int i=0; i<337/200; i++){ playTone(note_C6, 10); delay(10); }
  playTone(note_G6, 337);
  delay(19);
  playTone(note_A6, 337);
  delay(19);
  for(int i=0; i<712/200; i++){ playTone(note_B5, 10); delay(10); }
  playTone(note_E6, 712);
  delay(1);
  for(int i=0; i<337/200; i++){ playTone(note_B5, 10); delay(10); }
  playTone(note_E6, 337);
  delay(19);
  playTone(note_C6, 337);
  delay(19);
  for(int i=0; i<355/200; i++){ playTone(note_A5, 10); delay(10); }
  playTone(note_D6, 355);
  delay(1);
  playTone(note_E6, 337);
  delay(19);
  playTone(note_D6, 337);
  delay(19);
  playTone(note_C6, 337);
  delay(19);
  for(int i=0; i<337/200; i++){ playTone(note_D5, 10); delay(10); }
  playTone(note_A5, 337);
  delay(19);
  playTone(note_A4, 168);
  delay(10);
  delay(178);
  delay(178);
  for(int i=0; i<168/200; i++){ playTone(note_A4, 10); delay(10); }
  delay(10);
  for(int i=0; i<168/200; i++){ playTone(note_D5, 10); delay(10); }
  delay(10);
  for(int i=0; i<168/200; i++){ playTone(note_Gb5, 10); delay(10); }
  for(int i=0; i<888/200; i++){ playTone(note_D4, 10); delay(10); }
  playTone(note_Gb4, 710);
  delay(1);
  playTone(note_A5, 168);
  delay(10);
  playTone(note_D6, 846);
  delay(46);
  for(int i=0; i<355/200; i++){ playTone(note_A4, 10); delay(10); }
  for(int i=0; i<355/200; i++){ playTone(note_D5, 10); delay(10); }
  playTone(note_A5, 355);
  delay(1);
  for(int i=0; i<337/200; i++){ playTone(note_A4, 10); delay(10); }
  for(int i=0; i<337/200; i++){ playTone(note_D5, 10); delay(10); }
  playTone(note_G5, 337);
  delay(19);
  for(int i=0; i<535/200; i++){ playTone(note_A4, 10); delay(10); }
  for(int i=0; i<676/200; i++){ playTone(note_C5, 10); delay(10); }
  playTone(note_A5, 676);
  delay(37);
  playTone(note_E5, 337);
  delay(376);
  for(int i=0; i<337/200; i++){ playTone(note_C5, 10); delay(10); }
  playTone(note_E5, 337);
  delay(376);
  for(int i=0; i<337/200; i++){ playTone(note_C5, 10); delay(10); }
  for(int i=0; i<337/200; i++){ playTone(note_E5, 10); delay(10); }
  playTone(note_A5, 337);
  delay(19);
  for(int i=0; i<337/200; i++){ playTone(note_C5, 10); delay(10); }
  for(int i=0; i<337/200; i++){ playTone(note_E5, 10); delay(10); }
  playTone(note_C6, 337);
  delay(19);
  for(int i=0; i<712/200; i++){ playTone(note_G5, 10); delay(10); }
  for(int i=0; i<712/200; i++){ playTone(note_B5, 10); delay(10); }
  playTone(note_D6, 712);
  delay(1);
  for(int i=0; i<677/200; i++){ playTone(note_G5, 10); delay(10); }
  playTone(note_C6, 677);
  delay(37);
  for(int i=0; i<676/200; i++){ playTone(note_G5, 10); delay(10); }
  playTone(note_D6, 676);
  delay(37);
  for(int i=0; i<677/200; i++){ playTone(note_G5, 10); delay(10); }
  playTone(note_E6, 677);
  delay(37);
  for(int i=0; i<1694/200; i++){ playTone(note_A5, 10); delay(10); }
  playTone(note_D6, 1694);
  delay(90);
  playTone(note_D5, 355);
  delay(1);
  playTone(note_E5, 355);
  delay(1);
  playTone(note_G5, 355);
  delay(1);
  for(int i=0; i<1016/200; i++){ playTone(note_Db5, 10); delay(10); }
  for(int i=0; i<1016/200; i++){ playTone(note_E5, 10); delay(10); }
  playTone(note_A5, 1016);
  delay(55);
  for(int i=0; i<3427/200; i++){ playTone(note_Db7, 10); delay(10); }
  for(int i=0; i<3427/200; i++){ playTone(note_E7, 10); delay(10); }
  playTone(note_A7, 3427);
  delay(1428);
  playTone(note_Ab5, 336);
  delay(19);
  playTone(note_Eb6, 337);
  delay(19);
  playTone(note_Ab6, 677);
  delay(37);
  playTone(note_Bb5, 336);
  delay(19);
  playTone(note_F6, 337);
  delay(19);
  playTone(note_Bb6, 677);
  delay(37);
  playTone(note_G5, 336);
  delay(19);
  playTone(note_D6, 337);
  delay(19);
  playTone(note_G6, 677);
  delay(37);
  for(int i=0; i<336/200; i++){ playTone(note_C5, 10); delay(10); }
  playTone(note_C6, 336);
  delay(19);
  playTone(note_G5, 337);
  delay(19);
  playTone(note_Eb6, 677);
  delay(37);
  playTone(note_Ab4, 336);
  delay(19);
  playTone(note_Eb5, 337);
  delay(19);
  playTone(note_C6, 337);
  delay(19);
  playTone(note_Eb5, 337);
  delay(19);
  playTone(note_Bb4, 336);
  delay(19);
  playTone(note_F5, 337);
  delay(19);
  playTone(note_D6, 677);
  delay(37);
  playTone(note_Eb5, 336);
  delay(19);
  playTone(note_Bb5, 337);
  delay(19);
  playTone(note_Eb6, 337);
  delay(19);
  playTone(note_G6, 337);
  delay(19);
  for(int i=0; i<1355/200; i++){ playTone(note_Bb5, 10); delay(10); }
  playTone(note_Bb6, 1355);
  delay(72);
  for(int i=0; i<1354/200; i++){ playTone(note_Ab4, 10); delay(10); }
  playTone(note_Ab5, 1354);
  delay(72);
  for(int i=0; i<1354/200; i++){ playTone(note_Bb4, 10); delay(10); }
  playTone(note_Bb5, 1354);
  delay(72);
  for(int i=0; i<676/200; i++){ playTone(note_C5, 10); delay(10); }
  playTone(note_C6, 676);
  delay(37);
  for(int i=0; i<676/200; i++){ playTone(note_Bb4, 10); delay(10); }
  playTone(note_Bb5, 676);
  delay(37);
  for(int i=0; i<336/200; i++){ playTone(note_A4, 10); delay(10); }
  playTone(note_A5, 336);
  delay(19);
  playTone(note_C5, 337);
  delay(19);
  playTone(note_A5, 337);
  delay(19);
  playTone(note_C5, 337);
  delay(19);
  playTone(note_Ab4, 336);
  delay(19);
  playTone(note_Eb5, 337);
  delay(19);
  playTone(note_Ab5, 677);
  delay(37);
  for(int i=0; i<676/200; i++){ playTone(note_Bb4, 10); delay(10); }
  playTone(note_F5, 676);
  delay(37);
  for(int i=0; i<677/200; i++){ playTone(note_Bb4, 10); delay(10); }
  playTone(note_F5, 677);
  delay(37);
  playTone(note_C5, 336);
  delay(19);
  playTone(note_F5, 337);
  delay(19);
  playTone(note_G5, 337);
  delay(19);
  playTone(note_C6, 337);
  delay(19);
  for(int i=0; i<1354/200; i++){ playTone(note_C5, 10); delay(10); }
  for(int i=0; i<1354/200; i++){ playTone(note_E5, 10); delay(10); }
  playTone(note_G5, 1354);
  delay(72);
  playTone(note_C4, 336);
  delay(19);
  playTone(note_G4, 337);
  delay(19);
  playTone(note_C5, 337);
  delay(19);
  playTone(note_Eb5, 1016);
  delay(55);
  playTone(note_C4, 677);
  delay(37);
  playTone(note_Ab3, 336);
  delay(19);
  playTone(note_Eb4, 337);
  delay(19);
  playTone(note_Ab4, 337);
  delay(19);
  playTone(note_C5, 677);
  delay(37);
  playTone(note_Eb4, 337);
  delay(19);
  playTone(note_Ab3, 677);
  delay(37);
  playTone(note_Bb3, 336);
  delay(19);
  playTone(note_F4, 337);
  delay(19);
  playTone(note_Bb4, 337);
  delay(19);
  playTone(note_D5, 1016);
  delay(55);
  for(int i=0; i<677/200; i++){ playTone(note_Bb3, 10); delay(10); }
  playTone(note_Bb4, 677);
  delay(37);
  playTone(note_Eb4, 336);
  delay(19);
  playTone(note_Bb4, 337);
  delay(19);
  playTone(note_Eb5, 677);
  delay(37);
  playTone(note_G3, 336);
  delay(19);
  playTone(note_D4, 337);
  delay(19);
  playTone(note_G4, 677);
  delay(37);
  playTone(note_C4, 336);
  delay(19);
  playTone(note_G4, 337);
  delay(19);
  playTone(note_C5, 337);
  delay(19);
  playTone(note_G4, 337);
  delay(19);
  playTone(note_Eb5, 337);
  delay(19);
  playTone(note_G4, 337);
  delay(19);
  playTone(note_C5, 677);
  delay(37);
  playTone(note_Ab3, 336);
  delay(19);
  playTone(note_Eb4, 337);
  delay(19);
  playTone(note_Ab4, 337);
  delay(19);
  playTone(note_C5, 677);
  delay(37);
  playTone(note_Eb4, 337);
  delay(19);
  playTone(note_Ab3, 677);
  delay(37);
  playTone(note_Bb3, 336);
  delay(19);
  playTone(note_F4, 337);
  delay(19);
  playTone(note_Bb4, 337);
  delay(19);
  playTone(note_C5, 1016);
  delay(55);
  for(int i=0; i<677/200; i++){ playTone(note_Bb3, 10); delay(10); }
  playTone(note_Bb4, 677);
  delay(37);
  for(int i=0; i<676/200; i++){ playTone(note_C4, 10); delay(10); }
  for(int i=0; i<676/200; i++){ playTone(note_F4, 10); delay(10); }
  playTone(note_G4, 676);
  delay(37);
  playTone(note_C5, 677);
  delay(37);
  for(int i=0; i<676/200; i++){ playTone(note_C4, 10); delay(10); }
  for(int i=0; i<676/200; i++){ playTone(note_E4, 10); delay(10); }
  playTone(note_G4, 676);
  delay(37);
  playTone(note_C5, 677);
  delay(37);
  playTone(note_C4, 336);
  delay(19);
  playTone(note_G4, 168);
  delay(10);
  playTone(note_C5, 337);
  delay(19);
  playTone(note_G4, 168);
  delay(10);
  playTone(note_Eb5, 677);
  delay(37);
  playTone(note_G4, 337);
  delay(19);
  playTone(note_C4, 677);
  delay(37);
  playTone(note_Ab3, 336);
  delay(19);
  playTone(note_Eb4, 168);
  delay(10);
  playTone(note_Ab4, 337);
  delay(19);
  playTone(note_Eb4, 168);
  delay(10);
  playTone(note_C5, 677);
  delay(37);
  playTone(note_Eb4, 337);
  delay(19);
  playTone(note_Ab3, 677);
  delay(37);
  playTone(note_Bb3, 336);
  delay(19);
  playTone(note_F4, 168);
  delay(10);
  playTone(note_Bb4, 337);
  delay(19);
  playTone(note_F4, 168);
  delay(10);
  playTone(note_D5, 1016);
  delay(55);
  for(int i=0; i<677/200; i++){ playTone(note_Bb3, 10); delay(10); }
  playTone(note_Bb4, 677);
  delay(37);
  playTone(note_Eb4, 336);
  delay(19);
  playTone(note_Bb4, 337);
  delay(19);
  playTone(note_Eb5, 677);
  delay(37);
  playTone(note_G3, 337);
  delay(19);
  playTone(note_D4, 337);
  delay(19);
  playTone(note_G4, 677);
  delay(37);
  playTone(note_C4, 336);
  delay(19);
  playTone(note_G4, 337);
  delay(19);
  playTone(note_C5, 337);
  delay(19);
  playTone(note_Eb5, 1016);
  delay(55);
  playTone(note_C4, 677);
  delay(37);
  playTone(note_Ab3, 336);
  delay(19);
  playTone(note_Eb4, 337);
  delay(19);
  playTone(note_Ab4, 337);
  delay(19);
  playTone(note_C5, 677);
  delay(37);
  playTone(note_Eb4, 337);
  delay(19);
  playTone(note_Ab3, 677);
  delay(37);
  playTone(note_Bb3, 336);
  delay(19);
  playTone(note_F4, 337);
  delay(19);
  playTone(note_Bb4, 337);
  delay(19);
  playTone(note_D5, 1016);
  delay(55);
  for(int i=0; i<677/200; i++){ playTone(note_Bb3, 10); delay(10); }
  playTone(note_Bb4, 677);
  delay(37);
  for(int i=0; i<676/200; i++){ playTone(note_C4, 10); delay(10); }
  for(int i=0; i<676/200; i++){ playTone(note_F4, 10); delay(10); }
  playTone(note_G4, 676);
  delay(37);
  for(int i=0; i<677/200; i++){ playTone(note_C4, 10); delay(10); }
  for(int i=0; i<677/200; i++){ playTone(note_G4, 10); delay(10); }
  playTone(note_C5, 677);
  delay(37);
  for(int i=0; i<676/200; i++){ playTone(note_C4, 10); delay(10); }
  for(int i=0; i<676/200; i++){ playTone(note_E4, 10); delay(10); }
  playTone(note_G4, 676);
  delay(37);
  playTone(note_C5, 677);
  delay(37);
  playTone(note_Ab3, 336);
  delay(19);
  playTone(note_Eb4, 337);
  delay(19);
  playTone(note_C5, 337);
  delay(19);
  playTone(note_Eb4, 337);
  delay(19);
  playTone(note_Bb3, 336);
  delay(19);
  playTone(note_F4, 337);
  delay(19);
  playTone(note_Bb4, 337);
  delay(19);
  playTone(note_F4, 337);
  delay(19);
  playTone(note_G3, 336);
  delay(19);
  playTone(note_D4, 337);
  delay(19);
  playTone(note_G4, 337);
  delay(19);
  playTone(note_D4, 337);
  delay(19);
  for(int i=0; i<336/200; i++){ playTone(note_C4, 10); delay(10); }
  playTone(note_C5, 336);
  delay(19);
  playTone(note_G4, 337);
  delay(19);
  playTone(note_C5, 677);
  delay(37);
  playTone(note_Ab3, 336);
  delay(19);
  playTone(note_Eb4, 337);
  delay(19);
  playTone(note_C5, 337);
  delay(19);
  playTone(note_Eb4, 337);
  delay(19);
  playTone(note_Bb3, 336);
  delay(19);
  playTone(note_F4, 337);
  delay(19);
  playTone(note_D5, 337);
  delay(19);
  playTone(note_F4, 337);
  delay(19);
  playTone(note_Eb4, 336);
  delay(19);
  playTone(note_Bb4, 337);
  delay(19);
  playTone(note_Eb5, 337);
  delay(19);
  playTone(note_Bb4, 337);
  delay(19);
  playTone(note_G5, 337);
  delay(19);
  playTone(note_Bb4, 337);
  delay(19);
  playTone(note_Eb5, 677);
  delay(37);
  for(int i=0; i<1354/200; i++){ playTone(note_Ab3, 10); delay(10); }
  playTone(note_Ab4, 1354);
  delay(72);
  for(int i=0; i<1354/200; i++){ playTone(note_Bb3, 10); delay(10); }
  playTone(note_Bb4, 1354);
  delay(72);
  for(int i=0; i<676/200; i++){ playTone(note_C4, 10); delay(10); }
  playTone(note_C5, 676);
  delay(37);
  for(int i=0; i<676/200; i++){ playTone(note_Bb3, 10); delay(10); }
  playTone(note_Bb4, 676);
  delay(37);
  for(int i=0; i<336/200; i++){ playTone(note_A3, 10); delay(10); }
  playTone(note_A4, 336);
  delay(19);
  playTone(note_C4, 337);
  delay(19);
  playTone(note_A4, 337);
  delay(19);
  playTone(note_C4, 337);
  delay(19);
  playTone(note_Ab3, 336);
  delay(19);
  playTone(note_Eb4, 337);
  delay(19);
  playTone(note_Ab4, 337);
  delay(19);
  playTone(note_Eb4, 337);
  delay(19);
  playTone(note_Bb3, 336);
  delay(19);
  playTone(note_F4, 337);
  delay(19);
  playTone(note_Bb4, 337);
  delay(19);
  playTone(note_F4, 337);
  delay(19);
  playTone(note_C4, 336);
  delay(19);
  playTone(note_G4, 337);
  delay(19);
  playTone(note_C5, 337);
  delay(19);
  playTone(note_G4, 337);
  delay(19);
  playTone(note_Eb5, 337);
  delay(19);
  playTone(note_G4, 337);
  delay(19);
  playTone(note_C5, 677);
  delay(37);
  playTone(note_Ab3, 336);
  delay(19);
  playTone(note_Eb4, 337);
  delay(19);
  playTone(note_Ab4, 337);
  delay(19);
  playTone(note_Eb4, 337);
  delay(19);
  playTone(note_Bb3, 336);
  delay(19);
  playTone(note_F4, 337);
  delay(19);
  playTone(note_Bb4, 337);
  delay(19);
  playTone(note_F4, 337);
  delay(19);
  playTone(note_G3, 336);
  delay(19);
  playTone(note_D4, 337);
  delay(19);
  playTone(note_G4, 337);
  delay(19);
  playTone(note_D4, 337);
  delay(19);
  playTone(note_C4, 336);
  delay(19);
  playTone(note_G4, 337);
  delay(19);
  playTone(note_C5, 677);
  delay(37);
  playTone(note_Ab3, 336);
  delay(19);
  playTone(note_Eb4, 337);
  delay(19);
  playTone(note_Ab4, 337);
  delay(19);
  playTone(note_Eb4, 337);
  delay(19);
  playTone(note_Bb3, 336);
  delay(19);
  playTone(note_F4, 337);
  delay(19);
  playTone(note_Bb4, 337);
  delay(19);
  playTone(note_F4, 337);
  delay(19);
  playTone(note_Eb4, 336);
  delay(19);
  playTone(note_Bb4, 337);
  delay(19);
  playTone(note_Eb5, 337);
  delay(19);
  playTone(note_Bb4, 337);
  delay(19);
  playTone(note_G5, 337);
  delay(19);
  playTone(note_Bb4, 337);
  delay(19);
  playTone(note_Eb5, 677);
  delay(37);
  for(int i=0; i<1354/200; i++){ playTone(note_Ab3, 10); delay(10); }
  playTone(note_Ab4, 1354);
  delay(72);
  for(int i=0; i<1354/200; i++){ playTone(note_Bb3, 10); delay(10); }
  playTone(note_Bb4, 1354);
  delay(72);
  for(int i=0; i<676/200; i++){ playTone(note_C4, 10); delay(10); }
  playTone(note_C5, 676);
  delay(37);
  for(int i=0; i<676/200; i++){ playTone(note_Bb3, 10); delay(10); }
  playTone(note_Bb4, 676);
  delay(37);
  for(int i=0; i<336/200; i++){ playTone(note_A3, 10); delay(10); }
  playTone(note_A4, 336);
  delay(19);
  playTone(note_C4, 337);
  delay(19);
  playTone(note_A4, 337);
  delay(19);
  playTone(note_C4, 337);
  delay(19);
  playTone(note_Ab3, 336);
  delay(19);
  playTone(note_Eb4, 337);
  delay(19);
  playTone(note_Ab4, 337);
  delay(19);
  playTone(note_Eb4, 337);
  delay(19);
  playTone(note_Bb3, 336);
  delay(19);
  playTone(note_F4, 337);
  delay(19);
  playTone(note_Bb4, 337);
  delay(19);
  playTone(note_F4, 337);
  delay(19);
  playTone(note_C4, 1354);
  delay(72);
  playTone(note_A4, 1354);
  delay(72);
  playTone(note_F4, 336);
  delay(19);
  playTone(note_C5, 337);
  delay(19);
  playTone(note_F5, 337);
  delay(19);
  playTone(note_A5, 677);
  delay(37);
  playTone(note_C5, 337);
  delay(19);
  playTone(note_F5, 677);
  delay(37);
  playTone(note_E4, 336);
  delay(19);
  playTone(note_B4, 337);
  delay(19);
  playTone(note_E5, 337);
  delay(19);
  playTone(note_B4, 337);
  delay(19);
  playTone(note_G5, 337);
  delay(19);
  playTone(note_B4, 337);
  delay(19);
  playTone(note_E5, 337);
  delay(19);
  playTone(note_B4, 337);
  delay(19);
  playTone(note_D4, 336);
  delay(19);
  playTone(note_A4, 337);
  delay(19);
  playTone(note_D5, 337);
  delay(19);
  playTone(note_A4, 337);
  delay(19);
  playTone(note_F5, 337);
  delay(19);
  playTone(note_A4, 337);
  delay(19);
  playTone(note_D5, 337);
  delay(19);
  playTone(note_A4, 337);
  delay(19);
  playTone(note_C4, 336);
  delay(19);
  playTone(note_G4, 337);
  delay(19);
  playTone(note_C5, 337);
  delay(19);
  playTone(note_G4, 337);
  delay(19);
  playTone(note_E5, 1355);
  delay(72);
  playTone(note_F4, 336);
  delay(19);
  playTone(note_C5, 337);
  delay(19);
  playTone(note_F5, 337);
  delay(19);
  playTone(note_C5, 337);
  delay(19);
  playTone(note_A5, 337);
  delay(19);
  playTone(note_C5, 337);
  delay(19);
  playTone(note_F5, 337);
  delay(19);
  playTone(note_C5, 337);
  delay(19);
  playTone(note_E4, 336);
  delay(19);
  playTone(note_B4, 337);
  delay(19);
  playTone(note_E5, 337);
  delay(19);
  playTone(note_B4, 337);
  delay(19);
  playTone(note_G5, 337);
  delay(19);
  playTone(note_B4, 337);
  delay(19);
  playTone(note_E5, 337);
  delay(19);
  playTone(note_B4, 337);
  delay(19);
  playTone(note_D4, 336);
  delay(19);
  playTone(note_A4, 337);
  delay(19);
  playTone(note_D5, 337);
  delay(19);
  playTone(note_A4, 337);
  delay(19);
  playTone(note_F5, 337);
  delay(19);
  playTone(note_A4, 337);
  delay(19);
  for(int i=0; i<677/200; i++){ playTone(note_D4, 10); delay(10); }
  playTone(note_D5, 677);
  delay(37);
  for(int i=0; i<676/200; i++){ playTone(note_E4, 10); delay(10); }
  playTone(note_A4, 676);
  delay(37);
  playTone(note_A4, 677);
  delay(37);
  for(int i=0; i<1354/200; i++){ playTone(note_E4, 10); delay(10); }
  playTone(note_Ab4, 1354);
  delay(72);
  playTone(note_F3, 336);
  delay(19);
  playTone(note_C4, 337);
  delay(19);
  playTone(note_F4, 337);
  delay(19);
  playTone(note_C4, 337);
  delay(19);
  playTone(note_A4, 337);
  delay(19);
  playTone(note_C4, 337);
  delay(19);
  playTone(note_F4, 337);
  delay(19);
  playTone(note_C4, 337);
  delay(19);
  playTone(note_E3, 336);
  delay(19);
  playTone(note_B3, 337);
  delay(19);
  playTone(note_E4, 337);
  delay(19);
  playTone(note_B3, 337);
  delay(19);
  playTone(note_G4, 337);
  delay(19);
  playTone(note_B3, 337);
  delay(19);
  playTone(note_E4, 337);
  delay(19);
  playTone(note_B3, 337);
  delay(19);
  playTone(note_D3, 336);
  delay(19);
  playTone(note_A3, 337);
  delay(19);
  playTone(note_D4, 337);
  delay(19);
  playTone(note_A3, 337);
  delay(19);
  playTone(note_F4, 337);
  delay(19);
  playTone(note_A3, 337);
  delay(19);
  playTone(note_D4, 677);
  delay(37);
  playTone(note_C3, 336);
  delay(19);
  playTone(note_G3, 337);
  delay(19);
  playTone(note_C4, 337);
  delay(19);
  playTone(note_G3, 337);
  delay(19);
  playTone(note_E4, 337);
  delay(19);
  playTone(note_G3, 337);
  delay(19);
  playTone(note_C4, 677);
  delay(37);
  playTone(note_F3, 336);
  delay(19);
  playTone(note_C4, 337);
  delay(19);
  playTone(note_F4, 337);
  delay(19);
  playTone(note_C4, 337);
  delay(19);
  playTone(note_A4, 337);
  delay(19);
  playTone(note_C4, 337);
  delay(19);
  playTone(note_F4, 677);
  delay(37);
  for(int i=0; i<354/200; i++){ playTone(note_E3, 10); delay(10); }
  playTone(note_E4, 354);
  delay(1);
  playTone(note_C4, 337);
  delay(19);
  playTone(note_E4, 677);
  delay(37);
  for(int i=0; i<355/200; i++){ playTone(note_A3, 10); delay(10); }
  playTone(note_A4, 355);
  delay(1);
  playTone(note_C4, 337);
  delay(19);
  playTone(note_A4, 677);
  delay(37);
  playTone(note_F3, 354);
  delay(1);
  playTone(note_C4, 337);
  delay(19);
  playTone(note_F4, 337);
  delay(19);
  playTone(note_C4, 337);
  delay(19);
  playTone(note_A4, 337);
  delay(19);
  playTone(note_C4, 337);
  delay(19);
  playTone(note_F4, 677);
  delay(37);
  for(int i=0; i<1015/200; i++){ playTone(note_E3, 10); delay(10); }
  playTone(note_E4, 1015);
  delay(55);
  playTone(note_B3, 337);
  delay(19);
  playTone(note_A3, 337);
  delay(19);
  playTone(note_B3, 337);
  delay(19);
  playTone(note_D4, 712);
  delay(1);
  delay(713);
  for(int i=0; i<1693/200; i++){ playTone(note_E3, 10); delay(10); }
  for(int i=0; i<1693/200; i++){ playTone(note_E4, 10); delay(10); }
  playTone(note_B3, 1355);
  delay(787);
  for(int i=0; i<2141/200; i++){ playTone(note_E2, 10); delay(10); }
  playTone(note_E3, 2141);
  delay(1);
  playTone(note_E4, 711);
  delay(1);
  playTone(note_F3, 336);
  delay(19);
  playTone(note_C4, 337);
  delay(19);
  playTone(note_F4, 337);
  delay(19);
  playTone(note_C4, 337);
  delay(19);
  playTone(note_G3, 336);
  delay(19);
  playTone(note_D4, 337);
  delay(19);
  playTone(note_G4, 337);
  delay(19);
  playTone(note_B3, 337);
  delay(19);
  playTone(note_A3, 336);
  delay(19);
  playTone(note_E4, 337);
  delay(19);
  playTone(note_A4, 337);
  delay(19);
  playTone(note_E4, 337);
  delay(19);
  playTone(note_C5, 337);
  delay(19);
  playTone(note_E4, 337);
  delay(19);
  playTone(note_A4, 677);
  delay(37);
  playTone(note_F3, 336);
  delay(19);
  playTone(note_C4, 337);
  delay(19);
  playTone(note_F4, 337);
  delay(19);
  playTone(note_C4, 337);
  delay(19);
  playTone(note_G3, 336);
  delay(19);
  playTone(note_D4, 337);
  delay(19);
  playTone(note_G4, 337);
  delay(19);
  playTone(note_B3, 337);
  delay(19);
  playTone(note_A3, 336);
  delay(19);
  playTone(note_E4, 337);
  delay(19);
  playTone(note_A4, 337);
  delay(19);
  playTone(note_E4, 337);
  delay(19);
  playTone(note_C5, 337);
  delay(19);
  playTone(note_E4, 337);
  delay(19);
  playTone(note_A4, 677);
  delay(37);
  playTone(note_F3, 336);
  delay(19);
  playTone(note_C4, 337);
  delay(19);
  playTone(note_F4, 337);
  delay(19);
  playTone(note_C4, 337);
  delay(19);
  playTone(note_G3, 336);
  delay(19);
  playTone(note_D4, 337);
  delay(19);
  playTone(note_G4, 337);
  delay(19);
  playTone(note_D4, 337);
  delay(19);
  playTone(note_A3, 336);
  delay(19);
  playTone(note_E4, 337);
  delay(19);
  playTone(note_A4, 337);
  delay(19);
  playTone(note_E4, 337);
  delay(19);
  playTone(note_C5, 337);
  delay(19);
  playTone(note_E4, 337);
  delay(19);
  playTone(note_A4, 677);
  delay(37);
  playTone(note_F3, 336);
  delay(19);
  playTone(note_C4, 337);
  delay(19);
  playTone(note_F4, 677);
  delay(37);
  playTone(note_G3, 336);
  delay(19);
  playTone(note_D4, 337);
  delay(19);
  playTone(note_G4, 337);
  delay(19);
  playTone(note_D4, 337);
  delay(19);
  playTone(note_A3, 336);
  delay(19);
  playTone(note_E4, 337);
  delay(19);
  playTone(note_A4, 337);
  delay(19);
  playTone(note_E4, 337);
  delay(1447);
  for(int i=0; i<336/200; i++){ playTone(note_Bb2, 10); delay(10); }
  playTone(note_Bb3, 336);
  delay(19);
  for(int i=0; i<677/200; i++){ playTone(note_Bb2, 10); delay(10); }
  playTone(note_Bb3, 677);
  delay(37);
  for(int i=0; i<337/200; i++){ playTone(note_Bb2, 10); delay(10); }
  playTone(note_Bb3, 337);
  delay(19);
  for(int i=0; i<1015/200; i++){ playTone(note_C3, 10); delay(10); }
  playTone(note_C4, 1015);
  delay(55);
  for(int i=0; i<337/200; i++){ playTone(note_C3, 10); delay(10); }
  playTone(note_C4, 337);
  delay(19);
  for(int i=0; i<1354/200; i++){ playTone(note_D3, 10); delay(10); }
  playTone(note_D4, 1354);
  delay(430);
  playTone(note_D4, 337);
  delay(19);
  for(int i=0; i<337/200; i++){ playTone(note_D3, 10); delay(10); }
  playTone(note_D4, 337);
  delay(19);
  for(int i=0; i<337/200; i++){ playTone(note_D3, 10); delay(10); }
  playTone(note_D4, 337);
  delay(19);
  for(int i=0; i<354/200; i++){ playTone(note_Bb2, 10); delay(10); }
  playTone(note_Bb3, 354);
  delay(1);
  for(int i=0; i<677/200; i++){ playTone(note_Bb2, 10); delay(10); }
  playTone(note_Bb3, 677);
  delay(37);
  for(int i=0; i<337/200; i++){ playTone(note_Bb2, 10); delay(10); }
  playTone(note_Bb3, 337);
  delay(19);
  for(int i=0; i<1015/200; i++){ playTone(note_C3, 10); delay(10); }
  playTone(note_C4, 1015);
  delay(55);
  for(int i=0; i<337/200; i++){ playTone(note_C3, 10); delay(10); }
  playTone(note_C4, 337);
  delay(19);
  for(int i=0; i<1426/200; i++){ playTone(note_D3, 10); delay(10); }
  playTone(note_D4, 1426);
  delay(358);
  playTone(note_D4, 337);
  delay(19);
  for(int i=0; i<337/200; i++){ playTone(note_D3, 10); delay(10); }
  playTone(note_D4, 337);
  delay(19);
  for(int i=0; i<337/200; i++){ playTone(note_D3, 10); delay(10); }
  playTone(note_D4, 337);
  delay(19);
  for(int i=0; i<336/200; i++){ playTone(note_Bb2, 10); delay(10); }
  playTone(note_Bb3, 336);
  delay(19);
  for(int i=0; i<677/200; i++){ playTone(note_Bb2, 10); delay(10); }
  playTone(note_Bb3, 677);
  delay(37);
  for(int i=0; i<337/200; i++){ playTone(note_Bb2, 10); delay(10); }
  playTone(note_Bb3, 337);
  delay(19);
  for(int i=0; i<1015/200; i++){ playTone(note_C3, 10); delay(10); }
  playTone(note_C4, 1015);
  delay(55);
  for(int i=0; i<337/200; i++){ playTone(note_C3, 10); delay(10); }
  playTone(note_C4, 337);
  delay(19);
  for(int i=0; i<1354/200; i++){ playTone(note_D3, 10); delay(10); }
  playTone(note_D4, 1354);
  delay(72);
  playTone(note_D4, 337);
  delay(376);
  for(int i=0; i<337/200; i++){ playTone(note_D3, 10); delay(10); }
  playTone(note_D4, 337);
  delay(19);
  for(int i=0; i<337/200; i++){ playTone(note_D3, 10); delay(10); }
  playTone(note_D4, 337);
  delay(19);
  for(int i=0; i<1354/200; i++){ playTone(note_Bb2, 10); delay(10); }
  playTone(note_Bb3, 1354);
  delay(72);
  for(int i=0; i<1354/200; i++){ playTone(note_C3, 10); delay(10); }
  playTone(note_C4, 1354);
  delay(72);
  for(int i=0; i<711/200; i++){ playTone(note_D3, 10); delay(10); }
  playTone(note_D4, 711);
  delay(1);
  playTone(note_D4, 712);
  delay(1);
  playTone(note_Gb4, 677);
  delay(37);
  playTone(note_D5, 677);
  delay(37);
  for(int i=0; i<336/200; i++){ playTone(note_Bb3, 10); delay(10); }
  playTone(note_Bb4, 336);
  delay(19);
  for(int i=0; i<337/200; i++){ playTone(note_Bb3, 10); delay(10); }
  playTone(note_Bb4, 337);
  delay(376);
  for(int i=0; i<337/200; i++){ playTone(note_Bb3, 10); delay(10); }
  playTone(note_Bb4, 337);
  delay(19);
  for(int i=0; i<336/200; i++){ playTone(note_C4, 10); delay(10); }
  playTone(note_C5, 336);
  delay(19);
  playTone(note_G4, 337);
  delay(19);
  playTone(note_C5, 677);
  delay(37);
  playTone(note_A3, 336);
  delay(19);
  playTone(note_E4, 337);
  delay(19);
  playTone(note_A4, 677);
  delay(37);
  playTone(note_D4, 336);
  delay(19);
  playTone(note_A4, 337);
  delay(19);
  playTone(note_D5, 677);
  delay(37);
  playTone(note_Bb3, 336);
  delay(19);
  playTone(note_F4, 337);
  delay(19);
  playTone(note_Bb4, 337);
  delay(19);
  playTone(note_F4, 337);
  delay(19);
  playTone(note_C4, 336);
  delay(19);
  playTone(note_G4, 337);
  delay(19);
  playTone(note_C5, 677);
  delay(37);
  playTone(note_F4, 336);
  delay(19);
  playTone(note_C5, 337);
  delay(19);
  playTone(note_F5, 337);
  delay(19);
  playTone(note_C5, 337);
  delay(19);
  playTone(note_A5, 337);
  delay(19);
  playTone(note_C5, 337);
  delay(19);
  playTone(note_F5, 677);
  delay(37);
  for(int i=0; i<1354/200; i++){ playTone(note_Bb3, 10); delay(10); }
  playTone(note_Bb4, 1354);
  delay(72);
  for(int i=0; i<1354/200; i++){ playTone(note_C4, 10); delay(10); }
  playTone(note_C5, 1354);
  delay(72);
  playTone(note_A3, 336);
  delay(19);
  playTone(note_E4, 337);
  delay(19);
  playTone(note_A4, 677);
  delay(37);
  playTone(note_B3, 336);
  delay(19);
  playTone(note_D4, 337);
  delay(19);
  playTone(note_B4, 337);
  delay(19);
  playTone(note_D4, 337);
  delay(19);
  playTone(note_Bb3, 336);
  delay(19);
  playTone(note_F4, 337);
  delay(19);
  playTone(note_Bb4, 677);
  delay(37);
  playTone(note_C4, 336);
  delay(19);
  playTone(note_G4, 337);
  delay(19);
  playTone(note_C5, 677);
  delay(37);
  for(int i=0; i<1354/200; i++){ playTone(note_D4, 10); delay(10); }
  playTone(note_D5, 1354);
  delay(72);
  playTone(note_D5, 1355);
  delay(72);
  playTone(note_A4, 336);
  delay(19);
  playTone(note_E5, 337);
  delay(19);
  playTone(note_A5, 337);
  delay(19);
  playTone(note_E5, 337);
  delay(19);
  playTone(note_C6, 337);
  delay(19);
  playTone(note_E5, 337);
  delay(19);
  playTone(note_A5, 677);
  delay(37);
  playTone(note_F4, 336);
  delay(19);
  playTone(note_C5, 337);
  delay(19);
  playTone(note_F5, 337);
  delay(19);
  playTone(note_C5, 337);
  delay(19);
  playTone(note_A5, 337);
  delay(19);
  playTone(note_C5, 337);
  delay(19);
  playTone(note_F5, 337);
  delay(19);
  playTone(note_C5, 337);
  delay(19);
  playTone(note_G4, 336);
  delay(19);
  playTone(note_D5, 337);
  delay(19);
  playTone(note_G5, 337);
  delay(19);
  playTone(note_D5, 337);
  delay(19);
  playTone(note_B5, 337);
  delay(19);
  playTone(note_D5, 337);
  delay(19);
  playTone(note_G5, 677);
  delay(37);
  playTone(note_C5, 336);
  delay(19);
  playTone(note_G5, 337);
  delay(19);
  playTone(note_C6, 677);
  delay(37);
  for(int i=0; i<354/200; i++){ playTone(note_E4, 10); delay(10); }
  playTone(note_E5, 354);
  delay(1);
  playTone(note_Ab4, 337);
  delay(19);
  playTone(note_E5, 677);
  delay(37);
  playTone(note_A4, 336);
  delay(19);
  playTone(note_E5, 337);
  delay(19);
  playTone(note_A5, 337);
  delay(19);
  playTone(note_E5, 337);
  delay(19);
  playTone(note_C6, 337);
  delay(19);
  playTone(note_E5, 337);
  delay(19);
  playTone(note_A5, 677);
  delay(37);
  playTone(note_F4, 336);
  delay(19);
  playTone(note_C5, 337);
  delay(19);
  playTone(note_F5, 337);
  delay(19);
  playTone(note_C5, 337);
  delay(19);
  playTone(note_A5, 337);
  delay(19);
  playTone(note_C5, 337);
  delay(19);
  playTone(note_F5, 677);
  delay(37);
  playTone(note_G4, 336);
  delay(19);
  playTone(note_D5, 337);
  delay(19);
  playTone(note_G5, 337);
  delay(19);
  playTone(note_D5, 337);
  delay(19);
  playTone(note_B5, 337);
  delay(19);
  playTone(note_D5, 337);
  delay(19);
  playTone(note_G5, 677);
  delay(37);
  playTone(note_A4, 336);
  delay(19);
  playTone(note_D5, 337);
  delay(19);
  playTone(note_E5, 337);
  delay(19);
  playTone(note_A5, 337);
  delay(19);
  for(int i=0; i<713/200; i++){ playTone(note_A5, 10); delay(10); }
  for(int i=0; i<1354/200; i++){ playTone(note_A4, 10); delay(10); }
  playTone(note_E5, 1354);
  delay(72);
  playTone(note_Bb3, 336);
  delay(19);
  playTone(note_F4, 337);
  delay(19);
  playTone(note_Bb4, 337);
  delay(19);
  playTone(note_F4, 337);
  delay(19);
  playTone(note_Db5, 337);
  delay(19);
  playTone(note_F4, 337);
  delay(19);
  playTone(note_Bb4, 677);
  delay(37);
  playTone(note_Gb3, 336);
  delay(19);
  playTone(note_Db4, 337);
  delay(19);
  playTone(note_Gb4, 337);
  delay(19);
  playTone(note_Db4, 337);
  delay(19);
  playTone(note_Bb4, 337);
  delay(19);
  playTone(note_Db4, 337);
  delay(19);
  playTone(note_Gb4, 337);
  delay(19);
  playTone(note_Db4, 337);
  delay(19);
  playTone(note_Ab3, 336);
  delay(19);
  playTone(note_Eb4, 337);
  delay(19);
  playTone(note_Ab4, 337);
  delay(19);
  playTone(note_Eb4, 337);
  delay(19);
  playTone(note_C5, 337);
  delay(19);
  playTone(note_Eb4, 337);
  delay(19);
  playTone(note_Ab4, 337);
  delay(19);
  playTone(note_Eb4, 337);
  delay(19);
  playTone(note_Db4, 336);
  delay(19);
  playTone(note_F4, 337);
  delay(19);
  playTone(note_Ab4, 677);
  delay(37);
  for(int i=0; i<354/200; i++){ playTone(note_F3, 10); delay(10); }
  for(int i=0; i<354/200; i++){ playTone(note_C4, 10); delay(10); }
  playTone(note_F4, 354);
  delay(1);
  playTone(note_C4, 337);
  delay(19);
  playTone(note_F4, 677);
  delay(37);
  playTone(note_Bb3, 336);
  delay(19);
  playTone(note_F4, 337);
  delay(19);
  playTone(note_Bb4, 337);
  delay(19);
  playTone(note_F4, 337);
  delay(19);
  playTone(note_Db5, 337);
  delay(19);
  playTone(note_F4, 337);
  delay(19);
  playTone(note_Bb4, 677);
  delay(37);
  playTone(note_Gb3, 336);
  delay(19);
  playTone(note_Db4, 337);
  delay(19);
  playTone(note_Gb4, 337);
  delay(19);
  playTone(note_Db4, 337);
  delay(19);
  playTone(note_Bb4, 337);
  delay(19);
  playTone(note_Db4, 337);
  delay(19);
  playTone(note_Gb4, 337);
  delay(19);
  playTone(note_Db4, 337);
  delay(19);
  playTone(note_Ab3, 336);
  delay(19);
  playTone(note_Eb4, 337);
  delay(19);
  playTone(note_Ab4, 337);
  delay(19);
  playTone(note_Eb4, 337);
  delay(19);
  playTone(note_C5, 677);
  delay(37);
  playTone(note_Eb4, 677);
  delay(37);
  for(int i=0; i<676/200; i++){ playTone(note_Bb3, 10); delay(10); }
  playTone(note_F4, 676);
  delay(37);
  for(int i=0; i<677/200; i++){ playTone(note_F4, 10); delay(10); }
  playTone(note_Bb4, 677);
  delay(37);
  for(int i=0; i<711/200; i++){ playTone(note_Bb3, 10); delay(10); }
  playTone(note_D4, 711);
  delay(1);
  playTone(note_Bb4, 677);
  delay(37);
  playTone(note_Gb3, 336);
  delay(19);
  playTone(note_Db4, 337);
  delay(19);
  playTone(note_Gb4, 337);
  delay(19);
  playTone(note_Db4, 337);
  delay(19);
  playTone(note_Ab3, 336);
  delay(19);
  playTone(note_Eb4, 337);
  delay(19);
  playTone(note_Ab4, 337);
  delay(19);
  playTone(note_C4, 337);
  delay(19);
  playTone(note_F3, 336);
  delay(19);
  playTone(note_C4, 337);
  delay(19);
  playTone(note_F4, 677);
  delay(37);
  playTone(note_Bb3, 336);
  delay(19);
  playTone(note_F4, 337);
  delay(19);
  playTone(note_Bb4, 677);
  delay(37);
  playTone(note_Gb3, 336);
  delay(19);
  playTone(note_Db4, 337);
  delay(19);
  playTone(note_Gb4, 337);
  delay(19);
  playTone(note_Db4, 337);
  delay(19);
  playTone(note_Ab3, 354);
  delay(1);
  playTone(note_Eb4, 337);
  delay(19);
  playTone(note_Ab4, 677);
  delay(37);
  playTone(note_Db4, 354);
  delay(1);
  playTone(note_Ab4, 337);
  delay(19);
  playTone(note_Db5, 337);
  delay(19);
  playTone(note_Ab4, 337);
  delay(19);
  playTone(note_F5, 677);
  delay(37);
  playTone(note_Ab4, 677);
  delay(37);
  for(int i=0; i<1354/200; i++){ playTone(note_Gb3, 10); delay(10); }
  playTone(note_Gb4, 1354);
  delay(72);
  for(int i=0; i<1354/200; i++){ playTone(note_Ab3, 10); delay(10); }
  playTone(note_Ab4, 1354);
  delay(72);
  for(int i=0; i<676/200; i++){ playTone(note_Bb3, 10); delay(10); }
  playTone(note_Bb4, 676);
  delay(37);
  for(int i=0; i<676/200; i++){ playTone(note_Ab3, 10); delay(10); }
  playTone(note_Ab4, 676);
  delay(37);
  for(int i=0; i<336/200; i++){ playTone(note_G3, 10); delay(10); }
  playTone(note_G4, 336);
  delay(19);
  playTone(note_Bb3, 337);
  delay(19);
  playTone(note_Eb4, 677);
  delay(37);
  for(int i=0; i<1354/200; i++){ playTone(note_Gb3, 10); delay(10); }
  playTone(note_Gb4, 1354);
  delay(72);
  for(int i=0; i<1354/200; i++){ playTone(note_Ab3, 10); delay(10); }
  playTone(note_Ab4, 1354);
  delay(72);
  for(int i=0; i<1426/200; i++){ playTone(note_Bb3, 10); delay(10); }
  playTone(note_Bb4, 1426);
  delay(1);
  playTone(note_Bb4, 1355);
  delay(1501);
  playTone(note_F4, 336);
  delay(19);
  playTone(note_C5, 337);
  delay(19);
  playTone(note_F5, 337);
  delay(19);
  playTone(note_A5, 337);
  delay(19);
  playTone(note_C6, 1355);
  delay(72);
  playTone(note_G4, 336);
  delay(19);
  playTone(note_D5, 337);
  delay(19);
  playTone(note_G5, 337);
  delay(19);
  playTone(note_B5, 337);
  delay(19);
  playTone(note_D6, 1355);
  delay(72);
  playTone(note_A4, 336);
  delay(19);
  playTone(note_E5, 337);
  delay(19);
  playTone(note_A5, 337);
  delay(19);
  playTone(note_C6, 337);
  delay(19);
  playTone(note_E6, 1355);
  delay(72);
  playTone(note_A3, 336);
  delay(19);
  playTone(note_E4, 337);
  delay(19);
  playTone(note_A4, 337);
  delay(19);
  playTone(note_C4, 337);
  delay(19);
  playTone(note_G3, 336);
  delay(19);
  playTone(note_D4, 337);
  delay(19);
  playTone(note_G4, 337);
  delay(19);
  playTone(note_B3, 337);
  delay(19);
  playTone(note_F3, 336);
  delay(19);
  playTone(note_C4, 337);
  delay(19);
  playTone(note_F4, 337);
  delay(19);
  playTone(note_A4, 337);
  delay(19);
  playTone(note_C5, 1355);
  delay(72);
  playTone(note_G3, 336);
  delay(19);
  playTone(note_D4, 337);
  delay(19);
  playTone(note_G4, 337);
  delay(19);
  playTone(note_B4, 337);
  delay(19);
  playTone(note_D5, 1355);
  delay(72);
  playTone(note_A3, 336);
  delay(19);
  playTone(note_E4, 337);
  delay(19);
  playTone(note_A4, 337);
  delay(19);
  playTone(note_E4, 337);
  delay(19);
  playTone(note_C5, 1355);
  delay(72);
  playTone(note_A3, 336);
  delay(19);
  playTone(note_E4, 337);
  delay(19);
  playTone(note_A4, 337);
  delay(19);
  playTone(note_C4, 337);
  delay(19);
  playTone(note_G3, 336);
  delay(19);
  playTone(note_D4, 337);
  delay(19);
  playTone(note_G4, 337);
  delay(19);
  playTone(note_B3, 337);
  delay(19);
  playTone(note_F3, 336);
  delay(19);
  playTone(note_C4, 337);
  delay(19);
  playTone(note_F4, 337);
  delay(19);
  playTone(note_A4, 337);
  delay(19);
  playTone(note_C5, 1355);
  delay(72);
  playTone(note_G3, 336);
  delay(19);
  playTone(note_D4, 337);
  delay(19);
  playTone(note_G4, 337);
  delay(19);
  playTone(note_B4, 337);
  delay(19);
  playTone(note_D5, 1355);
  delay(72);
  playTone(note_A3, 336);
  delay(19);
  playTone(note_E4, 337);
  delay(19);
  playTone(note_A4, 337);
  delay(19);
  playTone(note_C5, 1694);
  delay(90);
  playTone(note_A3, 336);
  delay(19);
  playTone(note_E4, 337);
  delay(19);
  playTone(note_A4, 337);
  delay(19);
  playTone(note_C4, 337);
  delay(19);
  playTone(note_G3, 336);
  delay(19);
  playTone(note_D4, 337);
  delay(19);
  playTone(note_G4, 337);
  delay(19);
  playTone(note_B3, 337);
  delay(19);
  playTone(note_F3, 336);
  delay(19);
  playTone(note_C4, 337);
  delay(19);
  playTone(note_F4, 337);
  delay(19);
  playTone(note_A4, 337);
  delay(19);
  playTone(note_C5, 1355);
  delay(72);
  playTone(note_G3, 336);
  delay(19);
  playTone(note_D4, 337);
  delay(19);
  playTone(note_G4, 337);
  delay(19);
  playTone(note_B4, 1694);
  delay(90);
  for(int i=0; i<1354/200; i++){ playTone(note_A3, 10); delay(10); }
  playTone(note_E4, 1354);
  delay(72);
  playTone(note_A4, 1355);
  delay(2930);
  playTone(note_Gb3, 336);
  delay(19);
  playTone(note_Db4, 337);
  delay(19);
  playTone(note_Gb4, 337);
  delay(19);
  playTone(note_C5, 337);
  delay(19);
  playTone(note_Eb5, 1355);
  delay(72);
  playTone(note_Ab3, 336);
  delay(19);
  playTone(note_Eb4, 337);
  delay(19);
  playTone(note_Ab4, 337);
  delay(19);
  playTone(note_C5, 337);
  delay(19);
  playTone(note_Eb5, 1355);
  delay(72);
  playTone(note_F3, 336);
  delay(19);
  playTone(note_C4, 337);
  delay(19);
  playTone(note_F4, 337);
  delay(19);
  playTone(note_Ab4, 337);
  delay(19);
  playTone(note_C5, 1355);
  delay(72);
  playTone(note_Bb3, 336);
  delay(19);
  playTone(note_F4, 337);
  delay(19);
  playTone(note_Bb4, 337);
  delay(19);
  playTone(note_Db4, 337);
  delay(19);
  playTone(note_Ab3, 336);
  delay(19);
  playTone(note_Eb4, 337);
  delay(19);
  playTone(note_Ab4, 337);
  delay(19);
  playTone(note_C4, 337);
  delay(19);
  playTone(note_Gb3, 336);
  delay(19);
  playTone(note_Db4, 337);
  delay(19);
  playTone(note_Gb4, 337);
  delay(19);
  playTone(note_Bb4, 337);
  delay(19);
  playTone(note_Db5, 1355);
  delay(72);
  playTone(note_Ab3, 336);
  delay(19);
  playTone(note_Eb4, 337);
  delay(19);
  playTone(note_Ab4, 337);
  delay(19);
  playTone(note_C5, 337);
  delay(19);
  playTone(note_Eb5, 1355);
  delay(72);
  playTone(note_Bb3, 336);
  delay(19);
  playTone(note_F4, 337);
  delay(19);
  playTone(note_Bb4, 337);
  delay(19);
  playTone(note_F4, 337);
  delay(19);
  playTone(note_Db5, 1355);
  delay(72);
  playTone(note_Bb3, 336);
  delay(19);
  playTone(note_F4, 337);
  delay(19);
  playTone(note_Bb4, 337);
  delay(19);
  playTone(note_Db4, 337);
  delay(19);
  playTone(note_Ab3, 336);
  delay(19);
  playTone(note_Eb4, 337);
  delay(19);
  playTone(note_Ab4, 337);
  delay(19);
  playTone(note_C4, 337);
  delay(19);
  playTone(note_Gb3, 336);
  delay(19);
  playTone(note_Db4, 337);
  delay(19);
  playTone(note_Gb4, 337);
  delay(19);
  playTone(note_Bb4, 337);
  delay(19);
  playTone(note_Db5, 1355);
  delay(72);
  playTone(note_Ab3, 336);
  delay(19);
  playTone(note_Eb4, 337);
  delay(19);
  playTone(note_Ab4, 337);
  delay(19);
  playTone(note_C5, 337);
  delay(19);
  playTone(note_Eb5, 1355);
  delay(72);
  playTone(note_Bb3, 336);
  delay(19);
  playTone(note_F4, 337);
  delay(19);
  playTone(note_Bb4, 337);
  delay(19);
  playTone(note_Db5, 677);
  delay(37);
  playTone(note_F5, 1016);
  delay(55);
  playTone(note_Bb3, 354);
  delay(1);
  playTone(note_Db4, 337);
  delay(19);
  playTone(note_Bb4, 337);
  delay(19);
  playTone(note_Db4, 337);
  delay(19);
  playTone(note_Ab3, 354);
  delay(1);
  playTone(note_Eb4, 337);
  delay(19);
  playTone(note_Ab4, 337);
  delay(19);
  playTone(note_C4, 337);
  delay(19);
  for(int i=0; i<354/200; i++){ playTone(note_Gb3, 10); delay(10); }
  playTone(note_Gb4, 354);
  delay(1);
  playTone(note_Db4, 337);
  delay(19);
  playTone(note_Gb4, 337);
  delay(19);
  playTone(note_Bb4, 337);
  delay(19);
  playTone(note_Db5, 1355);
  delay(72);
  playTone(note_Ab3, 336);
  delay(19);
  playTone(note_Eb4, 337);
  delay(19);
  playTone(note_Ab4, 337);
  delay(19);
  playTone(note_C5, 1694);
  delay(90);
  for(int i=0; i<711/200; i++){ playTone(note_Bb3, 10); delay(10); }
  playTone(note_Bb4, 711);
  delay(1);
  playTone(note_F4, 337);
  delay(19);
  playTone(note_Bb4, 177);
  delay(180);
  playTone(note_Eb4, 337);
  delay(19);
  playTone(note_F4, 337);
  delay(19);
  for(int i=0; i<1354/200; i++){ playTone(note_Bb3, 10); delay(10); }
  playTone(note_Bb4, 1354);
  delay(72);
  playTone(note_Bb4, 677);
  delay(37);
  playTone(note_A4, 1354);
  delay(72);
  for(int i=0; i<1354/200; i++){ playTone(note_F4, 10); delay(10); }
  playTone(note_F5, 1354);
  delay(72);
  for(int i=0; i<1354/200; i++){ playTone(note_G4, 10); delay(10); }
  playTone(note_G5, 1354);
  delay(72);
  for(int i=0; i<1354/200; i++){ playTone(note_E4, 10); delay(10); }
  playTone(note_E5, 1354);
  delay(72);
  playTone(note_A4, 336);
  delay(19);
  playTone(note_C5, 337);
  delay(19);
  playTone(note_A5, 677);
  delay(37);
  playTone(note_F4, 336);
  delay(19);
  playTone(note_C5, 337);
  delay(19);
  playTone(note_F5, 337);
  delay(19);
  playTone(note_C5, 337);
  delay(19);
  playTone(note_G4, 336);
  delay(19);
  playTone(note_D5, 337);
  delay(19);
  playTone(note_G5, 677);
  delay(37);
  playTone(note_C4, 336);
  delay(19);
  playTone(note_G4, 337);
  delay(19);
  playTone(note_C5, 337);
  delay(19);
  playTone(note_E5, 337);
  delay(19);
  playTone(note_G5, 1355);
  delay(72);
  for(int i=0; i<1354/200; i++){ playTone(note_F4, 10); delay(10); }
  playTone(note_F5, 1354);
  delay(72);
  for(int i=0; i<1354/200; i++){ playTone(note_G4, 10); delay(10); }
  playTone(note_G5, 1354);
  delay(72);
  playTone(note_A4, 676);
  delay(37);
  for(int i=0; i<676/200; i++){ playTone(note_G4, 10); delay(10); }
  playTone(note_B4, 676);
  delay(37);
  for(int i=0; i<336/200; i++){ playTone(note_Gb4, 10); delay(10); }
  playTone(note_D5, 336);
  delay(19);
  playTone(note_A4, 337);
  delay(19);
  playTone(note_Gb5, 337);
  delay(19);
  playTone(note_A4, 337);
  delay(19);
  playTone(note_F4, 336);
  delay(19);
  playTone(note_C5, 337);
  delay(19);
  playTone(note_F5, 337);
  delay(19);
  playTone(note_A4, 337);
  delay(19);
  playTone(note_G4, 336);
  delay(19);
  playTone(note_D5, 337);
  delay(19);
  playTone(note_G5, 677);
  delay(37);
  playTone(note_A4, 336);
  delay(19);
  playTone(note_D5, 337);
  delay(19);
  playTone(note_E5, 677);
  delay(37);
  for(int i=0; i<676/200; i++){ playTone(note_A4, 10); delay(10); }
  playTone(note_Db5, 676);
  delay(37);
  playTone(note_A5, 357);
  delay(357);
  playTone(note_F3, 354);
  delay(1);
  playTone(note_C4, 337);
  delay(19);
  playTone(note_A4, 337);
  delay(19);
  playTone(note_C4, 337);
  delay(19);
  for(int i=0; i<354/200; i++){ playTone(note_G3, 10); delay(10); }
  playTone(note_G4, 354);
  delay(1);
  playTone(note_D4, 337);
  delay(19);
  playTone(note_G4, 337);
  delay(19);
  playTone(note_D4, 337);
  delay(19);
  for(int i=0; i<354/200; i++){ playTone(note_E3, 10); delay(10); }
  playTone(note_E4, 354);
  delay(1);
  playTone(note_B3, 337);
  delay(19);
  playTone(note_E4, 677);
  delay(37);
  for(int i=0; i<354/200; i++){ playTone(note_A3, 10); delay(10); }
  playTone(note_A4, 354);
  delay(1);
  playTone(note_E4, 337);
  delay(19);
  playTone(note_C5, 677);
  delay(37);
  for(int i=0; i<354/200; i++){ playTone(note_F3, 10); delay(10); }
  playTone(note_F4, 354);
  delay(1);
  playTone(note_C4, 337);
  delay(19);
  playTone(note_A4, 337);
  delay(19);
  playTone(note_C4, 337);
  delay(19);
  for(int i=0; i<354/200; i++){ playTone(note_G3, 10); delay(10); }
  playTone(note_G4, 354);
  delay(1);
  playTone(note_D4, 337);
  delay(19);
  playTone(note_G4, 712);
  delay(1);
  for(int i=0; i<354/200; i++){ playTone(note_C3, 10); delay(10); }
  playTone(note_C4, 354);
  delay(1);
  playTone(note_G3, 337);
  delay(19);
  playTone(note_C4, 337);
  delay(19);
  playTone(note_G3, 337);
  delay(19);
  playTone(note_E4, 337);
  delay(19);
  playTone(note_G3, 337);
  delay(19);
  playTone(note_C4, 677);
  delay(37);
  for(int i=0; i<1426/200; i++){ playTone(note_F3, 10); delay(10); }
  playTone(note_F4, 1426);
  delay(1);
  for(int i=0; i<1426/200; i++){ playTone(note_G3, 10); delay(10); }
  playTone(note_G4, 1426);
  delay(1);
  for(int i=0; i<711/200; i++){ playTone(note_A3, 10); delay(10); }
  for(int i=0; i<711/200; i++){ playTone(note_E4, 10); delay(10); }
  playTone(note_A4, 711);
  delay(1);
  for(int i=0; i<711/200; i++){ playTone(note_G3, 10); delay(10); }
  for(int i=0; i<711/200; i++){ playTone(note_B3, 10); delay(10); }
  playTone(note_G4, 711);
  delay(1);
  for(int i=0; i<534/200; i++){ playTone(note_D4, 10); delay(10); }
  for(int i=0; i<712/200; i++){ playTone(note_Gb4, 10); delay(10); }
  playTone(note_Gb3, 1424);
  delay(715);
  playTone(note_A3, 354);
  delay(1);
  playTone(note_D3, 355);
  delay(1);
  playTone(note_A3, 337);
  delay(19);
  playTone(note_F3, 176);
  delay(1);
  playTone(note_C4, 168);
  delay(10);
  playTone(note_F4, 168);
  delay(10);
  playTone(note_A4, 168);
  delay(10);
  playTone(note_C5, 337);
  delay(19);
  playTone(note_F4, 677);
  delay(37);
  for(int i=0; i<337/200; i++){ playTone(note_F3, 10); delay(10); }
  playTone(note_F4, 337);
  delay(19);
  for(int i=0; i<337/200; i++){ playTone(note_F3, 10); delay(10); }
  playTone(note_F4, 337);
  delay(19);
  for(int i=0; i<337/200; i++){ playTone(note_F3, 10); delay(10); }
  playTone(note_F4, 337);
  delay(19);
  for(int i=0; i<354/200; i++){ playTone(note_G3, 10); delay(10); }
  playTone(note_G4, 354);
  delay(1);
  playTone(note_G4, 677);
  delay(37);
  for(int i=0; i<355/200; i++){ playTone(note_G3, 10); delay(10); }
  playTone(note_G4, 355);
  delay(1);
  playTone(note_G3, 355);
  delay(1);
  playTone(note_G3, 337);
  delay(19);
  for(int i=0; i<355/200; i++){ playTone(note_G2, 10); delay(10); }
  playTone(note_G3, 355);
  delay(1);
  for(int i=0; i<355/200; i++){ playTone(note_G2, 10); delay(10); }
  playTone(note_G3, 355);
  delay(1);
  for(int i=0; i<354/200; i++){ playTone(note_A2, 10); delay(10); }
  playTone(note_A3, 354);
  delay(1);
  playTone(note_A3, 355);
  delay(1);
  playTone(note_D4, 355);
  delay(1);
  playTone(note_E4, 355);
  delay(1);
  playTone(note_A4, 355);
  delay(358);
  playTone(note_A3, 677);
  delay(37);
  playTone(note_A3, 336);
  delay(19);
  for(int i=0; i<712/200; i++){ playTone(note_A2, 10); delay(10); }
  playTone(note_A3, 712);
  delay(1);
  for(int i=0; i<3427/200; i++){ playTone(note_A2, 10); delay(10); }
  playTone(note_A3, 3427);
}