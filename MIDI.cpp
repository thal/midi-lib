#include "MIDI.h"

MIDI::MIDI(HardwareSerial& ser)
: _serial(ser)
{
  _serial = ser;
}

void MIDI::midiCommand(int cmd, int pitch, int velocity)
{
  _serial.write(cmd);
  _serial.write(pitch);
  _serial.write(velocity);
}

void MIDI::noteOn( int pitch )
{
  _serial.write(MIDI_NOTE_ON);
  _serial.write(pitch);
  _serial.write(MIDI_VELOCITY_MID);
}

void MIDI::noteOff( int pitch )
{
  _serial.write(MIDI_NOTE_OFF);
  _serial.write(pitch);
  _serial.write(MIDI_VELOCITY_MID);
}
