/*
  Blink
  Turns on an LED on for one second, then off for one second, repeatedly.

  This example code is in the public domain.
 */

// Pin 13 has an LED connected on most Arduino boards.
// give it a name:
int led1 = 5;
int led2 = 6;
int led3 = 9;
int led4 = 10;
int relay = 8;

// the setup routine runs once when you press reset:
void setup() {
  // initialize the digital pin as an output.
  pinMode(led1, OUTPUT);
  pinMode(led2, OUTPUT);
  pinMode(led3, OUTPUT);
  pinMode(led4, OUTPUT);
  pinMode(relay, OUTPUT);
  
  digitalWrite(led1, HIGH);
  digitalWrite(led2, HIGH);
  digitalWrite(led3, HIGH);
  digitalWrite(led4, HIGH);
}

// the loop routine runs over and over again forever:
void loop() {
  digitalWrite(led1, LOW);   // turn the LED on (HIGH is the voltage level)
  delay(1000);               // wait for a second
  digitalWrite(led1, HIGH);    // turn the LED off by making the voltage LOW
  digitalWrite(led2, LOW);     // turn the LED off by making the voltage LOW
  delay(1000);               // wait for a second
  digitalWrite(led2, HIGH);    // turn the LED off by making the voltage LOW
  digitalWrite(led3, LOW);    // turn the LED off by making the voltage LOW
  delay(1000);               // wait for a second
  digitalWrite(led3, HIGH);    // turn the LED off by making the voltage LOW
  digitalWrite(led4, LOW);    // turn the LED off by making the voltage LOW
  delay(1000);               // wait for a second
  digitalWrite(led4, HIGH);    // turn the LED off by making the voltage LOW
  digitalWrite(relay, HIGH);    // turn the LED off by making the voltage LOW
  delay(1000);               // wait for a second
  digitalWrite(relay, LOW);
}
