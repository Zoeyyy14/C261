#include <ESP32Servo.h>
Servo servo;
int pos=0;
const byte servo_pin=27;
const byte pot_pin=26;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(115200);
  servo.attach(servo_pin);
  servo.write(0);
  delay(1000);
}

void loop() {
  int pot=analogRead(pot_pin);
  int angle=map(pot,0,4095,0,180);
  servo.write(angle);
  delay(10);
  // for(pos=0;pos<=180;pos+=1){
  //   myservo.write(pos);
  //   delay(15);
  // }

  // for(pos=180;pos>=0;pos-=1){
  //   myservo.write(pos);
  //   delay(15);
  // }
}
