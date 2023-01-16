/*
  LED Traffic Light Simulation

  based on Arduino Examples "Blink"

  Date: 16 Jan 2023
  Author: Yen-Chen Chang @ makestraight
*/

// the setup function runs once when you press reset or power the board
void setup() {
  // initialize digital pin as an outputs.
  pinMode(13, OUTPUT);  //Connect green LED to pin 13
  pinMode(12, OUTPUT);  //Connect yellow LED to pin 12
  pinMode(11, OUTPUT);  //Connect red LED to pin 11
}

// the loop function runs over and over again forever
void loop() {
  // turn green light on and others off by making the voltage HIGH/LOW
  digitalWrite(13, HIGH);
  digitalWrite(12, LOW);
  digitalWrite(11, LOW);
  delay(2000);  // set green light duration (unit: millisecond)
  // turn yellow light on and others off by making the voltage HIGH/LOW
  digitalWrite(13, LOW);
  digitalWrite(12, HIGH);
  digitalWrite(11, LOW);
  delay(500); // set yellow light duration (unit: millisecond)
  // turn red light on and others off by making the voltage HIGH/LOW
  digitalWrite(13, LOW);
  digitalWrite(12, LOW);
  digitalWrite(11, HIGH);
  delay(3000); // set red light duration (unit: millisecond)
}
