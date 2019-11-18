#include <Servo.h>

Servo servo;  // Создаем объект
int vx = 0, vy = 0, rotation = 0;

void setup() {
  servo.attach(5);
  servo.write(rotation);
  Serial.begin(9600);
}
void loop() {
  vx = analogRead(A0);
  vy = analogRead(A1);
  if (vx - 500 == 0){
    rotation = rotation + ((vx - 507 + 1) / 100);
  }
  else{
    rotation = rotation + ((vx - 507) / 100);
  }
  Serial.print("vx = ");
  Serial.println(vx);
  Serial.print("vy = ");
  Serial.println(vy);
  Serial.print("rotation = ");
  Serial.println(rotation);

  servo.write(rotation);
  delay(10);
}
