int findcc(int pitch) {
  int divnote = pitch / 12;
  int remnote = pitch % 12;
  int cc1 = 0;
  int cc2 = 0;
  int cctotal = 0;

  switch (divnote)
  {
    case 3: cc1 = 0; break; // octave C1

    case 4: cc1 = 32; break;  //octave C2

    case 5: cc1 = 64; break;  //octave C3

    case 6: cc1 = 96; break;  //octave C4

 }
switch (remnote)
{
  case 0: cc2 = 0; break; //Note C
  case 1: cc2 = 3; break; //Note C#
  case 2: cc2 = 5; break; //Note D
  case 3: cc2 = 8; break; //Note D#
  case 4: cc2 = 10; break; //Note E
  case 5: cc2 = 13; break; //Note F
  case 6: cc2 = 16; break; //Note F#
  case 7: cc2 = 19; break; //Note G
  case 8: cc2 = 21; break; //Note G#
  case 9: cc2 = 24; break; //Note A
  case 10: cc2 = 27; break; //Note A#
  case 11: cc2 = 29; break; //Note B
 }

 cctotal = cc1 + cc2;
 return cctotal;
 }

// testing git.
