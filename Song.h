const uint8_t scale[5] =
{
  mC4,
  mD4,
  mE4,
  mG4,
  mA4
};

const midi_chord song[] =
{
  {mC4, mNone},
  {mD4, mNone},
  {mE4, mNone},
  {mG4, mNone},
  {mA4, mNone}
};

const int songLength = sizeof(song) / sizeof(midi_chord);
