#include <Servo.h>

/*Variables*/
Servo PWN;

void setup() {
  // Attach the Digital PWD Pin where the servo is connected.
  PWN.attach(3);
}

void loop() {
  //Go to position 0° to 180°
  for(int x=0; x<=180; x++){
    PWN.write(x);
    delay(25);
  }
  
  //Go to position 180° to 0°
  for(int x=180; x>=0; x--){
    PWN.write(x);
    delay(25);
  }
}
