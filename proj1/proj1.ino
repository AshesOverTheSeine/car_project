// Time it takes to do a 180
#define half 7100

// Pins controlling wheel 1
int m1p1 = 5;  // Forward
int m1p2 = 6;  // Backward
// Pins controlling wheel 2
int m2p1 = 10;  // Forward
int m2p2 = 11;  // Backward

// The speed the wheels will turn at, between 0 and 255
int speed = 255;

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

  //180 degree turn
  
  reverse();
  delay (half);
  halt();
  delay(1000);
  right();
  delay(half/4);
  halt();
  delay(1000);
  right();
  delay(half/4);
  halt();
  delay(1000);
  right();
  delay(half/4);
  halt();
  delay(1000);
  right();
  delay(half/4);
  halt();
  
  delay (2000);
  
  forward();

  delay(20000);

}

// Sets the motors moving forward
void forward() {
  analogWrite(m1p1, speed);
  analogWrite(m1p2, LOW);
  analogWrite(m2p1, speed);
  analogWrite(m2p2, LOW);
}

// Sets the motors moving backward
void reverse() {
  analogWrite(m1p1, speed);
  analogWrite(m1p2, LOW);
  analogWrite(m2p1, LOW);
  analogWrite(m2p2, speed);
}

// Turn right
void right() {
  analogWrite(m1p1, LOW);
  analogWrite(m1p2, speed);
  analogWrite(m2p1, speed);
  analogWrite(m2p2, LOW);
}

// Turn left
void left() {
  analogWrite(m1p1, LOW);
  analogWrite(m1p2, speed);
  analogWrite(m2p1, LOW);
  analogWrite(m2p2, speed);
}

void halt() {
  analogWrite(m1p1, LOW);
  analogWrite(m1p2, LOW);
  analogWrite(m2p1, speed);
  analogWrite(m2p2, speed);
}

