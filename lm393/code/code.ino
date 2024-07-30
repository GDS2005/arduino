/*Constans*/
#define D0 2

void setup() {
  Serial.begin(9600);
  pinMode(D0, INPUT);
}

void loop() {
  if (digitalRead(D0) == HIGH){
    Serial.println("Light off");
  }
  else{
    Serial.println("Light on");
  }
  delay(1000);
}
