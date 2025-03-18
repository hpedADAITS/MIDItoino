# **MIDItoArduino**

A Python program that converts MIDI files into an Arduino-readable syntax, enabling users to play custom monophonic melodies on the built-in buzzer using a combination of the Open Smart Rich Shield and Arduino UNO boards.

## **Description**

This program is designed to take a MIDI file as input, analyze its contents, and generate an output.ino file in the output folder. The resulting Arduino code can be uploaded directly to an Arduino UNO board equipped with an Open Smart Rich Shield. This allows users to play custom melodies on the built-in buzzer.

The program also includes a basic GUI interface using `tkinter`, making it user-friendly and accessible to non-technical users.

**Please note:** Due to memory limitations on the Arduino boards, this program works best with single or dual-track MIDI files and may not handle very long files efficiently.

Most of the original boilerplate code file is taken from https://github.com/Gabrirf/TFMAES/blob/master/src/shield/Avanzado/velocidadCancion/cancion.h

## **Programming Languages**

- Python
- Arduino C++

## **Dependencies**

To run this program, you'll need to install the following dependencies:

- `mido` library (install with pip: `pip install mido`)
- `tkinter` library for GUI functionality (Probably already included in most Python installations)

You may also need to install the Open Smart Rich Shield and Arduino UNO boards as per the official documentation.

## **Usage**

1. Download a MIDI file you'd like to convert.
2. Run the program using `python program.py`.
3. Select your MIDI file from the file dialog.
4. Select MIDI file speed and conversion duration
5. The program will generate an output.ino file in the `output` folder and open the file inside Arduino IDE for execution.

## **Note**

Make sure your Arduino board is properly configured and connected to your development machine before running the program.

While this program tries its best to account for multiple note events being triggered at the same time, it works best with single or dual track MIDIs. For more complex MIDI files, you may experience issues with accurate timing.

---

Contributions are welcome! If you'd like to improve the accuracy of note detection or add support for more complex MIDI files, please don't hesitate to submit an issue or pull request.
