/*Constans*/
#define TRIGGER 2
#define ECHO 3

/*Variables*/
long t; // Eco return time 
long d; // Distance

void setup() {
  Serial.begin(9600);
  pinMode(TRIGGER, OUTPUT);
  pinMode(ECHO, INPUT);
  digitalWrite(TRIGGER, LOW);
}

void loop() {
  digitalWrite(TRIGGER, HIGH);
  delay(10);
  digitalWrite(TRIGGER,LOW);

  t = pulseIn(ECHO,HIGH);
  d = t/59;

  Serial.print("Distancia: ");
  Serial.print(d);
  Serial.print(" cm");
  Serial.println();
  delay(1000);
}
