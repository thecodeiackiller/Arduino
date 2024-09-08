int lightPen = A0;
int lightVal;
int delayAmt = 200;
int redPin = 10;
int greenPin = 9;
void setup() {
  // put your setup code here, to run once:
  pinMode(lightPen, INPUT); // This was OUTPUT, but needed to be INPUT. We are reading the input which is given by the photons from the light;
  Serial.begin(9600);
  pinMode(redPin, OUTPUT);
  pinMode(greenPin, OUTPUT);
  

}

void loop() {
  // put your main code here, to run repeatedly:
  lightVal = analogRead(lightPen);
  Serial.println(lightVal);
  delay(delayAmt);

  if(lightVal > 400)
  {
    digitalWrite(greenPin, HIGH);
    digitalWrite(redPin, LOW);
    lightVal = analogRead(lightPen);
  }
  else if(lightVal < 400)
  {
    digitalWrite(redPin, HIGH);
    digitalWrite(greenPin, LOW);
    lightVal = analogRead(lightPen);
  }

}
