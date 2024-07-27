/*Constans*/
#define PIRPIN 2

/*Variables*/
int value;

void setup() {
  Serial.begin(9600);
  pinMode(PIRPIN, INPUT);
}

void loop() {
  value = digitalRead(PIRPIN);

  if (value == HIGH)
  {
    Serial.println("Detection notice");
    delay(1000);
  }
}
