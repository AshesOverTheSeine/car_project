int m1p1 = 5;
int m1p2 = 6;
int m2p1 = 10;
int m2p2 = 11;

// the setup function runs once when you press reset or power the board
void setup() {
  pinMode(m1p1, OUTPUT);
  pinMode(m1p2, OUTPUT);
  pinMode(m2p1, OUTPUT);
  pinMode(m2p2, OUTPUT);
}

// the loop function runs over and over again forever
void loop() {

  delay(2000);

  //both forward
  digitalWrite(m1p1, HIGH);
  digitalWrite(m1p2, LOW);
  digitalWrite(m2p1, HIGH);
  digitalWrite(m2p2, LOW);

  delay (2000);
  
  //both reverse
  digitalWrite(m1p1, LOW);
  digitalWrite(m1p2, HIGH);
  digitalWrite(m2p1, LOW);
  digitalWrite(m2p2, HIGH);

}
