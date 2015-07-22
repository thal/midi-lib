#ifndef TOM_MIDI
#define TOM_MIDI
#include "Arduino.h"

#define NOTES_PER_CHORD 6
#define MIDI_VELOCITY_MID 0x45
#define MIDI_VELOCITY_OFF 0x00

#define MIDI_NOTE_ON 0x90
#define MIDI_NOTE_OFF 0x80

typedef enum midi_note
{
    mNone = 0,

    mA0 = 21,
    mBb0 = 22,
    mB0 = 23,

    mC1 = 24,
    mCs1 = 25,
    mD1 = 26,
    mEb1 = 27,
    mE1 = 28,
    mF1 = 29,
    mFs1 = 30,
    mG1 = 31,
    mAb1 = 32,
    mA1 = 33,
    mBb1 = 34,
    mB1 = 35,

    mC2 = 36,
    mCs2 = 37,
    mD2 = 38,
    mEb2 = 39,
    mE2 = 40,
    mF2 = 41,
    mFs2 = 42,
    mG2 = 43,
    mAb2 = 44,
    mA2 = 45,
    mBb2 = 46,
    mB2 = 47,

    mC3 = 48,
    mCs3 = 49,
    mD3 = 50,
    mEb3 = 51,
    mE3 = 52,
    mF3 = 53,
    mFs3 = 54,
    mG3 = 55,
    mAb3 = 56,
    mA3 = 57,
    mBb3 = 58,
    mB3 = 59,

    mC4 = 60,
    mCs4 = 61,
    mD4 = 62,
    mEb4 = 63,
    mE4 = 64,
    mF4 = 65,
    mFs4 = 66,
    mG4 = 67,
    mAb4 = 68,
    mA4 = 69,
    mBb4 = 70,
    mB4 = 71,

    mC5 = 72,
    mCs5 = 73,
    mD5 = 74,
    mEb5 = 75,
    mE5 = 76,
    mF5 = 77,
    mFs5 = 78,
    mG5 = 79,
    mAb5 = 80,
    mA5 = 81,
    mBb5 = 82,
    mB5 = 83,

    mC6 = 84,
    mCs6 = 85,
    mD6 = 86,
    mEb6 = 87,
    mE6 = 88,
    mF6 = 89,
    mFs6 = 90,
    mG6 = 91,
    mAb6 = 92,
    mA6 = 93,
    mBb6 = 94,
    mB6 = 95,

    mC7 = 96,
    mCs7 = 97,
    mD7 = 98,
    mEb7 = 99,
    mE7 = 100,
    mF7 = 101,
    mFs7 = 102,
    mG7 = 103,
    mAb7 = 104,
    mA7 = 105,
    mBb7 = 106,
    mB7 = 107,

    mC8 = 108
} midi_note;

typedef struct midi_chord
{
  midi_note notes[NOTES_PER_CHORD];
} midi_chord;

class MIDI
{
public:
  MIDI( HardwareSerial& ser);
  void midiCommand(int cmd, int pitch, int velocity);

  void noteOn( int pitch );

  void noteOff( int pitch );

  void playChord( midi_chord );

  void releaseChord( midi_chord );

private:
  HardwareSerial& _serial;
};

#endif
