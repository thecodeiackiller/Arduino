int myVoltPin = A2;
int redPin = 9;
int yellowPin = 10;
int greenPin = 11;
float readVal;
float V2;
int delayT = 250;

void setup() {
  Serial.begin(9600);
  pinMode(myVoltPin, INPUT);
  pinMode(redPin, OUTPUT);
  pinMode(yellowPin, OUTPUT);
  pinMode(greenPin, OUTPUT);
}

void loop() {
  readVal = analogRead(myVoltPin);
  V2= (5./1023.)*readVal;
  Serial.println(V2);


 if (V2 < 3)
  {
    digitalWrite(redPin, LOW);
    digitalWrite(yellowPin, LOW);
    digitalWrite(greenPin, HIGH);
  }
  if (V2 < 4) {
digitalWrite(redPin, LOW);
    digitalWrite(yellowPin, HIGH);
    digitalWrite(greenPin, LOW);
  }
  else
  {
    digitalWrite(redPin, LOW);
    digitalWrite(yellowPin,LOW);
    digitalWrite(greenPin, HIGH);
  }
 

}
