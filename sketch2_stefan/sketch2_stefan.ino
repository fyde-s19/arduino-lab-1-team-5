void setup() {
  pinMode(LED_BUILTIN, OUTPUT);
}

void dimmer(int freq, int duty){
  int period, onTime, offTime;
  period = 1000/freq;
  onTime = period * duty/100;
  offTime = period - onTime;
  digitalWrite(LED_BUILTIN, HIGH);
  delay(onTime);
  digitalWrite(LED_BUILTIN, LOW);
  delay(offTime);
}

int count = 0;
bool up = true;
void loop() {
  dimmer(100, up ? count++ : count--);
  up = count == 100 ? false : count == 0 ? true : up;
}
