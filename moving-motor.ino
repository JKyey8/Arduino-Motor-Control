
int enable = 5;
int dira = 3;
int dirb = 4;


void setup() {

  // put your setup code here, to run once:
pinMode(enable,OUTPUT);
pinMode(dira,OUTPUT);
pinMode(dirb,OUTPUT);
Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  analogWrite(enable,255);
  digitalWrite(dira,HIGH);
  digitalWrite(dirb,LOW);
  
}
