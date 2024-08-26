int redPin = 6;
int yellowPin = 9;
int blinkDelay = 100;
int lightTransitionDelay = 1000;



void setup() {
  // put your setup code here, to run once:
  pinMode(redPin, OUTPUT);
  pinMode(yellowPin, OUTPUT);

}

void loop() {

  for(int i = 0; i < 3; i++)
  {
    digitalWrite(redPin, HIGH);
    delay(blinkDelay);
    digitalWrite(redPin, LOW);
    delay(blinkDelay);
    
  }
  delay(lightTransitionDelay);
  for(int i = 0; i < 5; i++)
  {
    digitalWrite(yellowPin, HIGH);
    delay(blinkDelay);
    digitalWrite(yellowPin, LOW);
    delay(blinkDelay);
    
    
  }
  delay(lightTransitionDelay);
  // put your main code here, to run repeatedly:

}
