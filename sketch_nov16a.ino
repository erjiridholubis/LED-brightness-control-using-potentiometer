int led = 6;
int pinPot = A0;
int potVal = 0;

void setup() {
  // put your setup code here, to run once:
  pinMode(led,OUTPUT);
  
}

void loop() {
  // put your main code here, to run repeatedly:
  potVal = analogRead(pinPot);
  potVal = map(potVal,0,1023,0,255);
  analogWrite(led,potVal);
}
