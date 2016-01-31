int redPin = 11;
int yellowPin = 12;
int greenPin = 13;

void setup() {
  // put your setup code here, to run once:
  pinMode(redPin, OUTPUT);
  pinMode(yellowPin, OUTPUT);
  pinMode(greenPin, OUTPUT);
}

void loop() {
  // green light
  digitalWrite(greenPin, HIGH);
  delay(3000);

  // yellow light
  digitalWrite(greenPin, LOW);
  digitalWrite(yellowPin, HIGH);
  delay(2000);

  // red light
  digitalWrite(yellowPin, LOW);
  digitalWrite(redPin, HIGH);
  delay(3000);
  digitalWrite(redPin, LOW);
}
