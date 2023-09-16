void setup()
{
   Serial.begin(31250);       // Default speed of MIDI serial port

}

void loop()
{     // Divide by 8 to get range of 0-127 for midi
   MIDI_TX(176,1,60);         // 176 = CC command, 1 = Which Control, val = value read from Potentionmeter
   delay(10);
}

void MIDI_TX(unsigned char MESSAGE, unsigned char CONTROL, unsigned char VALUE) //pass values out through standard Midi Command
{
   Serial.print(MESSAGE);
   Serial.print(CONTROL);
   Serial.print(VALUE);
}
