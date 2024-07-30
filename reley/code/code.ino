#define IN 2

void setup() {
  pinMode(IN, OUTPUT);
}

void loop() {
  digitalWrite(IN, HIGH);
  delay(2000);
  digitalWrite(IN, LOW);
  delay(2000);
}
