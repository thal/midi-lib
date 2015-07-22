#ifndef TOM_MIDI
#define TOM_MIDI
#include "Arduino.h"

#define MIDI_C4 60
#define MIDI_D4 62
#define MIDI_E4 64
#define MIDI_F4 65
#define MIDI_G4 67
#define MIDI_A5 69

#define MIDI_VELOCITY_MID 0x45
#define MIDI_VELOCITY_OFF 0x00

#define MIDI_NOTE_ON 0x90
#define MIDI_NOTE_OFF 0x80

class MIDI
{
public:
  MIDI( HardwareSerial& ser);
  void midiCommand(int cmd, int pitch, int velocity);

  void noteOn( int pitch );

  void noteOff( int pitch );

private:
  HardwareSerial& _serial;
};

#endif
