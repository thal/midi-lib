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

void MIDI::playChord( midi_chord chord)
{
  for( int i = 0; i < sizeof(NOTES_PER_CHORD); i++ )
  {
    midi_note note = chord.notes[i];
    if( mNone != note )
    {
      noteOn(note);
    }
  }
}

void MIDI::releaseChord( midi_chord chord)
{
  for( int i = 0; i < sizeof(NOTES_PER_CHORD); i++ )
  {
    midi_note note = chord.notes[i];
    if( mNone != note )
    {
      noteOff(note);
    }
  }
}
