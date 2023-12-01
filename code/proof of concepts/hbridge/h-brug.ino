const int IN1 = 7;
const int IN2 = 8;
const int IN3 = 4;
const int IN4 = 5;



void setup() {
  pinMode(IN1, OUTPUT);
  pinMode(IN2, OUTPUT);
  pinMode(IN3, OUTPUT);
  pinMode(IN4, OUTPUT);
}

void loop() {
  // Bestuur motor1
  digitalWrite(IN1, HIGH);
  digitalWrite(IN2, LOW);

  delay(2000); // Draai motor1 vooruit gedurende 2 seconden

  // Stop motor1
  digitalWrite(IN1, LOW);
  digitalWrite(IN2, LOW);

  delay(1000); // Wacht 1 seconde

  // Bestuur motor1 achteruit
  digitalWrite(IN1, LOW);
  digitalWrite(IN2, HIGH);

  delay(2000); // Draai motor1 achteruit gedurende 2 seconden

  // Stop motor1
  digitalWrite(IN1, LOW);
  digitalWrite(IN2, LOW);

  delay(1000); // Wacht 1 seconde

  // Bestuur motor2
  digitalWrite(IN3, HIGH);
  digitalWrite(IN4, LOW);

  delay(2000); // Draai motor2 vooruit gedurende 2 seconden

  // Stop motor2
  digitalWrite(IN3, LOW);
  digitalWrite(IN4, LOW);

  delay(1000); // Wacht 1 seconde

  // Bestuur motor2 achteruit
  digitalWrite(IN3, LOW);
  digitalWrite(IN4, HIGH);

  delay(2000); // Draai motor2 achteruit gedurende 2 seconden

  // Stop motor2
  digitalWrite(IN3, LOW);
  digitalWrite(IN4, LOW);

  delay(1000); // Wacht 1 seconde
}
