/*/bool statuslamp;

void setup() {
  pinMode(12, OUTPUT);
  pinMode(A0, INPUT);
  pinMode(11, OUTPUT);
  digitalWrite(11, LOW);
  statuslamp = false;
  Serial.begin(9600);
}

void loop() {
  Serial.println(analogRead(A0));
  if (analogRead(A0) > 60){
    if (analogRead(A0) > 400){
       Serial.end();
       Serial.begin(9600);
    }
    statuslamp = !statuslamp;
    digitalWrite(12, statuslamp);
    delay(100);
  }
}*/
void setup(){}void loop(){}
