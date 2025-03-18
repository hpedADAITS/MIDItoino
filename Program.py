# Latest Program ver

import mido
import tkinter as tk
from tkinter import filedialog, simpledialog
import os
import subprocess

NOTE_NAMES = {
    0: "C0", 1: "Db0", 2: "D0", 3: "Eb0", 4: "E0", 5: "F0", 6: "Gb0", 7: "G0", 8: "Ab0", 9: "A0", 10: "Bb0", 11: "B0",
    12: "C1", 13: "Db1", 14: "D1", 15: "Eb1", 16: "E1", 17: "F1", 18: "Gb1", 19: "G1", 20: "Ab1", 21: "A1", 22: "Bb1", 23: "B1",
    24: "C2", 25: "Db2", 26: "D2", 27: "Eb2", 28: "E2", 29: "F2", 30: "Gb2", 31: "G2", 32: "Ab2", 33: "A2", 34: "Bb2", 35: "B2",
    36: "C3", 37: "Db3", 38: "D3", 39: "Eb3", 40: "E3", 41: "F3", 42: "Gb3", 43: "G3", 44: "Ab3", 45: "A3", 46: "Bb3", 47: "B3",
    48: "C4", 49: "Db4", 50: "D4", 51: "Eb4", 52: "E4", 53: "F4", 54: "Gb4", 55: "G4", 56: "Ab4", 57: "A4", 58: "Bb4", 59: "B4",
    60: "C5", 61: "Db5", 62: "D5", 63: "Eb5", 64: "E5", 65: "F5", 66: "Gb5", 67: "G5", 68: "Ab5", 69: "A5", 70: "Bb5", 71: "B5",
    72: "C6", 73: "Db6", 74: "D6", 75: "Eb6", 76: "E6", 77: "F6", 78: "Gb6", 79: "G6", 80: "Ab6", 81: "A6", 82: "Bb6", 83: "B6",
    84: "C7", 85: "Db7", 86: "D7", 87: "Eb7", 88: "E7", 89: "F7", 90: "Gb7", 91: "G7", 92: "Ab7", 93: "A7", 94: "Bb7", 95: "B7",
    96: "C8", 97: "Db8", 98: "D8", 99: "Eb8"
}

def midi_to_arduino(midi_file, output_dir, bpm, start_time=0, end_time=None):
    if not os.path.exists(output_dir):
        os.makedirs(output_dir)
    
    output_file = os.path.join(output_dir, "output.ino")
    
    mid = mido.MidiFile(midi_file)
    arduino_code = []
    current_time = 0
    active_notes = {}
    last_event_time = 0
    
    tempo = 500000
    for track in mid.tracks:
        for msg in track:
            if msg.type == 'set_tempo':
                tempo = msg.tempo
                break
    
    if bpm != 0:
        tempo = mido.bpm2tempo(bpm)
    
    ticks_per_beat = mid.ticks_per_beat
    ms_per_tick = (tempo / 1000) / ticks_per_beat  
    
    for track in mid.tracks:
        for msg in track:
            try:
                delta_time = max(0, int(msg.time * ms_per_tick))
                current_time += delta_time
                if current_time < start_time or (end_time and current_time > end_time):
                    continue
            except ValueError:
                print(f"Skipping invalid time value: {msg.time}")
                continue
            
            if msg.type == 'note_on' and msg.velocity > 0:
                if current_time > last_event_time:
                    delay_time = max(0, int(current_time - last_event_time))
                    if delay_time > 0:
                        arduino_code.append(f'delay({delay_time});')
                
                active_notes[msg.note] = current_time
                last_event_time = current_time
            
            elif msg.type == 'note_off' or (msg.type == 'note_on' and msg.velocity == 0):
                if msg.note in active_notes:
                    duration = max(0, int(current_time - active_notes[msg.note]))
                    if duration > 0:
                        note_name = NOTE_NAMES.get(msg.note, f"MIDI{msg.note}")
                        if len(active_notes) > 1:
                            arduino_code.append(f'for(int i=0; i<{duration}/200; i++){{ playTone(note_{note_name}, 10); delay(10); }}')
                        else:
                            arduino_code.append(f'playTone(note_{note_name}, {duration});')
                    del active_notes[msg.note]
                last_event_time = current_time
    
    with open(output_file, 'w') as f:
        f.write("""#include "musical_notes.h"

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
""")
        for line in arduino_code:
            f.write(f'  {line}\n')
        f.write("}")
    
    print(f"Arduino code written to {output_file}")
    subprocess.run([r"C:\Users\Usuario\Desktop\Arduino IDE\Arduino IDE.exe", output_file], check=True)

def open_file_dialog():
    root = tk.Tk()
    root.withdraw()
    file_path = filedialog.askopenfilename(filetypes=[("MIDI files", "*.mid")])
    if file_path:
        bpm = simpledialog.askinteger("BPM Adjustment", "Enter BPM (0 for default):", minvalue=0, initialvalue=0)
        start_time = simpledialog.askinteger("Input", "Enter start time in seconds (0 for full):", minvalue=0, initialvalue=0) * 1000
        end_time = simpledialog.askinteger("Input", "Enter end time in seconds (0 for full):", minvalue=0, initialvalue=0) * 1000
        end_time = None if end_time == 0 else end_time
        midi_to_arduino(file_path, "output", bpm, start_time, end_time)

if __name__ == "__main__":
    open_file_dialog()
