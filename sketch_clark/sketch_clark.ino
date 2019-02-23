/**
 * This runs once at startup.
 */
void setup() {
  pinMode(LED_BUILTIN, OUTPUT);
}

/**
 * Blinks the light ON for <interval> seconds then off for 1 second.
 * @param int interval - The time in seconds to have the LED on.
 */
void timedBlink(int interval) {
  digitalWrite(LED_BUILTIN,HIGH);
  delay(interval * 1000);
  
  digitalWrite(LED_BUILTIN, LOW);
  delay(1000);
}

/**
 * This gets called periodically.
 */
void loop() {
  timedBlink(1);
  timedBlink(2);
  timedBlink(3);
}
