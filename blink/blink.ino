#define red_led 8

void setup() {
  // put your setup code here, to run once:
  pinMode(red_led, OUTPUT); // We just say to Arduino that pin 8 is an output port.

}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(red_led, HIGH); // We send a HIGH signal (5V) to pin 8. So, the LED turns on.
  delay(500); // Wait for 500ms. In other words, Let 500ms pass while the LED is on.
  digitalWrite(red_led, LOW); // We send a LOW signal (0V) to pin 8. So, the LED turns off.
  delay(500); // Wait for 500ms. In other words, Let 500ms pass while the LED is off.
  
}