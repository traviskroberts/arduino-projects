int led1 = 9;
int led2 = 10;
int led3 = 11;
int led4 = 12;
int led5 = 13;

void setup() {
  pinMode(9, OUTPUT);
  pinMode(10, OUTPUT);
  pinMode(11, OUTPUT);
  pinMode(12, OUTPUT);
  pinMode(13, OUTPUT);
}

void loop() {
  cycleOn();

  delay(1000);

  cycleOff();

  delay(1000);

  lightShow();
  
  allOff();
}

void cycleOn() {
  digitalWrite(led1, HIGH);
  delay(100);
  digitalWrite(led2, HIGH);
  delay(100);
  digitalWrite(led3, HIGH);
  delay(100);
  digitalWrite(led4, HIGH);
  delay(100);
  digitalWrite(led5, HIGH);
}

void cycleOff() {
  digitalWrite(led1, LOW);
  delay(100);
  digitalWrite(led2, LOW);
  delay(100);
  digitalWrite(led3, LOW);
  delay(100);
  digitalWrite(led4, LOW);
  delay(100);
  digitalWrite(led5, LOW);
}

void allOff() {
  digitalWrite(led1, LOW);
  digitalWrite(led2, LOW);
  digitalWrite(led3, LOW);
  digitalWrite(led4, LOW);
  digitalWrite(led5, LOW);
}

void allOn() {
  digitalWrite(led1, HIGH);
  digitalWrite(led2, HIGH);
  digitalWrite(led3, HIGH);
  digitalWrite(led4, HIGH);
  digitalWrite(led5, HIGH);
}

void evenOn() {
  allOff();
  digitalWrite(led2, HIGH);
  digitalWrite(led4, HIGH);
}

void oddOn() {
  allOff();
  digitalWrite(led1, HIGH);
  digitalWrite(led3, HIGH);
  digitalWrite(led5, HIGH);
}

void lightShow() {
  for (int i=0; i <= 10; i++) {
    evenOn();
    delay(150);
    oddOn();
    delay(150);
  }
  allOff();
}

