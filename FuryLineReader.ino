#define LineSelector0 PB12
#define LineSelector1 PB13
#define LineSelector2 PB15
#define LineSelector3 PB14

#define SensorValue PA1

int LineArray[12] = {0};


void setup() {
  Serial.begin(115200);

  pinMode(LineSelector0, OUTPUT);
  pinMode(LineSelector1, OUTPUT);
  pinMode(LineSelector2, OUTPUT);
  pinMode(LineSelector3, OUTPUT);
  pinMode(SensorValue, INPUT);

  delay(1000);
}

void loop() {

  for (int i = 0; i < 12; i++)
  {
    digitalWrite(LineSelector0, HIGH && (i & B00000001));
    digitalWrite(LineSelector1, HIGH && (i & B00000010));
    digitalWrite(LineSelector2, HIGH && (i & B00000100));
    digitalWrite(LineSelector3, HIGH && (i & B00001000));
    LineArray[i] = analogRead(SensorValue);
  }

  for (int i = 0; i < 12; i++)
  {
    Serial.print(LineArray[i]);
    Serial.print(" ");
  }
  Serial.println();

  delay(200);

}
