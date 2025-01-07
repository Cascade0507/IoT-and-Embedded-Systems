int red = 10;
int yellow = 9;
int green = 8;

void setup() {
  pinMode(red,OUTPUT);
  pinMode(yellow,OUTPUT);
  pinMode(green,OUTPUT);
}

void loop() {
  digitalWrite(red,HIGH);
  delay(5000);
  change_green();
  delay(5000);
  change_red();
  delay(5000);
}

void change_green(){
  digitalWrite(red,LOW);
  digitalWrite(yellow, HIGH);
  delay(750);
  digitalWrite(yellow,LOW);
  digitalWrite(green, HIGH);
}

void change_red(){
  digitalWrite(green,LOW);
  digitalWrite(yellow,HIGH);
  delay(750);
  digitalWrite(yellow,LOW);
  digitalWrite(red,HIGH);
}
