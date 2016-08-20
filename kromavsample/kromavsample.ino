#include <MIDI.h>


#define LED 13

MIDI_CREATE_DEFAULT_INSTANCE();

void MyHandleNoteOn(byte channel, byte pitch, byte velocity) {
  digitalWrite(LED,HIGH);  //Turn LED on
  MIDI.sendNoteOn(pitch, velocity, channel);
  MIDI.sendControlChange(43, findcc(pitch), channel);

}

void MyHandleNoteOff(byte channel, byte pitch, byte velocity) {
  digitalWrite(LED,LOW);  //Turn LED off
  MIDI.sendNoteOn(pitch, 0, channel);
}

void setup() {

  pinMode (LED, OUTPUT);
  MIDI.begin(MIDI_CHANNEL_OMNI);
  MIDI.setHandleNoteOn(MyHandleNoteOn);
  MIDI.setHandleNoteOff(MyHandleNoteOff);
  MIDI.turnThruOff();
}

void loop() {
  MIDI.read();
}


// testing git? not
//differences?
