void setup() {
  // put your setup code here, to run once:
  pinMode(LED_BUILTIN, OUTPUT);
  for (int i = 1; i < 8; i++) {
    pinMode(i, OUTPUT);
  }
}

void loop() {
  // put your main code here, to run repeatedly:
  allOn();
  digitalWrite(7, HIGH);
  delay(1000);

  allOff();
  digitalWrite(2, LOW);
  digitalWrite(3, LOW);
  delay(1000);

  allOn();
  digitalWrite(3, HIGH);
  digitalWrite(6, HIGH);
  delay(1000);

  allOn();
  digitalWrite(5, HIGH);
  digitalWrite(6, HIGH);
  delay(1000);

  allOn();
  digitalWrite(1, HIGH);
  digitalWrite(4, HIGH);
  digitalWrite(5, HIGH);
  delay(1000);

  allOn();
  digitalWrite(2, HIGH);
  digitalWrite(5, HIGH);
  delay(1000);

  allOn();
  digitalWrite(2, HIGH);
  delay(1000);

  allOff();
  digitalWrite(1, LOW);
  digitalWrite(2, LOW);
  digitalWrite(3, LOW);
  delay(1000);

  allOn();
  delay(1000);
  
  allOn();
  digitalWrite(5, HIGH);
  delay(1000);
}

void allOff() {
  for (int i = 1; i < 8 ; i++) {
    digitalWrite(i, HIGH);
  }
}

void allOn() {
  for (int i = 1; i < 8 ; i++) {
    digitalWrite(i, LOW);
  }
}