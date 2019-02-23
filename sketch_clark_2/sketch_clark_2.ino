/**
 * This code runs once at startup.
 */
void setup() {
  pinMode(LED_BUILTIN, OUTPUT);
}

void dimmer(int freq, int duty) {
  int period = 1000 / freq;
  int onTime = period * duty / 100;
  int offTime = period - onTime;
  
  digitalWrite(LED_BUILTIN, HIGH);
  delay(onTime);
  
  digitalWrite(LED_BUILTIN, LOW);
  delay(offTime);
}

/**
 * This code is called periodically.
 */
void loop() {
  for(int i=1; i < 100; i++) {
    dimmer(100, i);
  }
  for(int i = 100; i > 0; i--){
    dimmer(100, i);
  }
}
