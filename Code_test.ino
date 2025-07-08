// Manual control of X and Y stepper motors (no GRBL)
// Use for basic testing or fixed-path engraving

const int x_step = 2;
const int x_dir  = 5;
const int y_step = 3;
const int y_dir  = 6;

void setup() {
  pinMode(x_step, OUTPUT);
  pinMode(x_dir, OUTPUT);
  pinMode(y_step, OUTPUT);
  pinMode(y_dir, OUTPUT);

  // Move to origin
  digitalWrite(x_dir, HIGH);
  digitalWrite(y_dir, HIGH);

  delay(1000);

  moveX(100);
  moveY(100);
}

void loop() {
  // Engrave a square path
  moveX(100);
  delay(500);
  moveY(100);
  delay(500);
  moveX(-100);
  delay(500);
  moveY(-100);
  delay(1000);
}

void moveX(int steps) {
  digitalWrite(x_dir, steps > 0 ? HIGH : LOW);
  for (int i = 0; i < abs(steps); i++) {
    digitalWrite(x_step, HIGH);
    delayMicroseconds(800);
    digitalWrite(x_step, LOW);
    delayMicroseconds(800);
  }
}

void moveY(int steps) {
  digitalWrite(y_dir, steps > 0 ? HIGH : LOW);
  for (int i = 0; i < abs(steps); i++) {
    digitalWrite(y_step, HIGH);
    delayMicroseconds(800);
    digitalWrite(y_step, LOW);
    delayMicroseconds(800);
  }
}