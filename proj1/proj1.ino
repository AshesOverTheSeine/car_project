// Pins controlling wheel 1
int m1p1 = 5;  // Forward
int m1p2 = 6;  // Backward
// Pins controlling wheel 2
int m2p1 = 10;  // Forward
int m2p2 = 11;  // Backward

// The speed the wheels will turn at, between 0 and 255
int speed = 50;

// the setup function runs once when you press reset or power the board
void setup() {
  pinMode(m1p1, OUTPUT);
  pinMode(m1p2, OUTPUT);
  pinMode(m2p1, OUTPUT);
  pinMode(m2p2, OUTPUT);
}

// the loop function runs over and over again forever
void loop() {
  
  // TODO: Get correct order of moves, fine-tune speed and timing

  forward();

  delay (2000);
  
  reverse();

  delay (2000);
  
  left();

  delay(1000);

}

// Sets the motors moving forward
void forward() {
  analogWrite(m1p1, speed);
  analogWrite(m1p2, LOW);
  analogWrite(m2p1, speed);
  analogWrite(m2p2, LOW);
}

// Sets the motors moving backward
void backward() {
  analogWrite(m1p1, LOW);
  analogWrite(m1p2, speed);
  analogWrite(m2p1, LOW);
  analogWrite(m2p2, speed);
}

// Turn left (right?)
void left() {
  analogWrite(m1p1, speed);
  analogWrite(m1p2, LOW);
  analogWrite(m2p1, LOW);
  analogWrite(m2p2, speed);
}

// Turn right (left?)
void right() {
  analogWrite(m1p1, LOW);
  analogWrite(m1p2, speed);
  analogWrite(m2p1, speed);
  analogWrite(m2p2, LOW);
}
