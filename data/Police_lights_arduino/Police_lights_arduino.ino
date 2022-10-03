// Police lights Made by Matthew Hugley Updated 3/31/2020

int redled=11; // set pin
int blueled=9; // set pin
int leddelay=50; // delay it by 50 ms
int leddelay2=150; // delay it by 150 ms
int leddelay1=100; // delay it by 100 ms

void setup() {
  // put your setup code here, to run once:
pinMode(redled,OUTPUT);
pinMode(blueled,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(redled, HIGH);
  delay(leddelay);
  digitalWrite(redled, LOW);
  delay(leddelay);
  digitalWrite(redled, HIGH);
  delay(leddelay);
  digitalWrite(redled, LOW);
  delay(leddelay);
  digitalWrite(redled, HIGH);
  delay(leddelay);
  digitalWrite(redled, LOW);
  delay(leddelay);
  
  delay(300);

  digitalWrite(blueled, HIGH);
  delay(leddelay);
  digitalWrite(blueled, LOW);
  delay(leddelay);
  digitalWrite(blueled, HIGH);
  delay(leddelay);
  digitalWrite(blueled, LOW);
  delay(leddelay);
  digitalWrite(blueled, HIGH);
  delay(leddelay);
  digitalWrite(blueled, LOW);
  delay(leddelay);
}
