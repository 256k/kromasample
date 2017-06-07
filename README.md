# kromasample
arduino sketch used to convert incoming midi notes to play the volca sample chromatically
requirements for functionality:

  -build an arduino midi in/out device.
    (instructions can be found online)
  -download the code to the arduino.
  
Once the code is downloaded on the arduino board and the midi in/out ports have been built, connect your midi controller (keyboard or computer DAW). 

Choose which midi channel you want to control (from 1 to 10). 

begin playing and you'll hear your selected sample being played chromatically (2 octaves up or down).

NOTE:
the pitches of the samples at both ends of the octave spectrum are not very accurate... there's a chance it will sound slightly off key (as far as i know this is a hardware limitation and not a code limitation).

video here: (https://www.instagram.com/p/_HzY4mp31h/)
