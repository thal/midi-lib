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
  {mG4, mNone},
  {mA4, mNone},

  {mF4, mNone},
  {mF5, mNone},

  {mE5, mNone},
  {mD5, mNone},
  {mC5, mNone},
  {mD5, mNone},
  {mC5, mNone},
  {mD5, mNone},

  {mE5, mNone},
  {mD5, mNone},
  {mC5, mNone},
  {mD5, mNone},
  {mC5, mNone},
  {mD5, mNone},
  {mC5, mNone},
  {mD5, mNone},

  {mE5, mNone},
  {mD5, mNone},
  {mC5, mNone},
  {mD5, mNone},
  {mC5, mNone},
  {mG4, mNone},
  {mA4, mNone},

  {mF4, mNone},
  {mF5, mNone},

  {mE5, mNone},
  {mD5, mNone},
  {mC5, mNone},
  {mD5, mNone},
  {mC5, mNone},
  {mD5, mNone},

  {mE5, mNone},
  {mD5, mNone},
  {mC5, mNone},
  {mD5, mNone},
  {mC5, mNone},
  {mD5, mNone},
  {mC5, mNone},
  {mD5, mNone},


  {mE5, mNone},
  {mD5, mNone},
  {mE5, mNone},
  {mF5, mNone},
  {mG5, mNone},
  {mG5, mNone},
  {mA5, mNone},
  {mF5, mNone},

  {mF5, mNone},
  {mG5, mNone},
  {mF5, mNone},
  {mG5, mNone},
  {mF5, mNone},
  {mG5, mNone},

  {mC5, mNone},
  {mD5, mNone},
  {mC5, mNone},
  {mD5, mNone},
  {mC5, mNone},
  {mD5, mNone},

  {mG4, mNone},
  {mG4, mNone},
  {mA4, mNone},
  {mC5, mNone},
  {mD5, mNone},
  {mA4, mNone},
  {mF4, mNone},

};

const int songLength = sizeof(song) / sizeof(midi_chord);
