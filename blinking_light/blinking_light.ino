int redBlink = 5;
int blueBlink = 10;
int greenBlink = 15;

int pinNumber[] = {2,3,4};
int blinkCount[] = {redBlink, blueBlink, greenBlink};

void setup() {
  // put your setup code here, to run once:
  for(int i = 0; i < 2; i++)
  {
    pinMode(pinNumber[i], OUTPUT);
  }
  
}

void loop() {
  // put your main code here, to run repeatedly:
 for(int i = 0; i < 2; i++)
 {
    for(int j = 0; j < blinkCount[i]; j++)
    {
      digitalWrite(pinNumber[i],HIGH);
      delay(50);
      digitalWrite(pinNumber[i],LOW);
      delay(50);
    }
 }
}
