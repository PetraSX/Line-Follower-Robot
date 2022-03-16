#define leftMotorPWM PB6
#define rightMotorPWM PB7
#define leftMotorDIR PB8
#define rightMotorDIR PB9



void setup() {
  pinMode(leftMotorPWM, OUTPUT);
  pinMode(rightMotorPWM, OUTPUT);
  pinMode(leftMotorDIR, OUTPUT);
  pinMode(rightMotorDIR, OUTPUT);
  delay(100);
}

void loop() {
  digitalWrite(leftMotorDIR, HIGH);
  for (int i = 0; i <= 255; i++)
    analogWrite(leftMotorPWM, i);
  analogWrite(leftMotorPWM, 0);
  delay(1000);

  digitalWrite(leftMotorDIR, LOW);
  for (int i = 0; i <= 255; i++)
    analogWrite(leftMotorPWM, i);
  analogWrite(leftMotorPWM, 0);
  delay(1000);

  digitalWrite(rightMotorDIR, HIGH);
  for (int i = 0; i <= 255; i++)
    analogWrite(rightMotorPWM, i);
  analogWrite(rightMotorPWM, 0);
  delay(1000);


  digitalWrite(rightMotorDIR, LOW);
  for (int i = 0; i <= 255; i++)
    analogWrite(rightMotorPWM, i);
  analogWrite(rightMotorPWM, 0);
  delay(1000);


}
