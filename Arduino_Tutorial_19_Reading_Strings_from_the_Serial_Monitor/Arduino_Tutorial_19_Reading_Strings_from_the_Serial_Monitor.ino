int greenPin = 9;
int bluePin = 10;
int redPin = 11;

int userInputColor;
String question = "Please type in the color of LED you want to turn on.";
String response = "You entered the color";


void setup() {
  Serial.begin(9600);
  pinMode(greenPin, OUTPUT);
  pinMode(redPin, OUTPUT);
  pinMode(bluePin, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  // Ask, Wait, Read
  Serial.println(question);
  while(Serial.available() == 0)
  {

  }
  userInputColor = Serial.parseInt();
  Serial.println(response +  userInputColor);
  if(userInputColor == 1)
  {
    digitalWrite(greenPin, HIGH);
    digitalWrite(redPin, LOW);
    digitalWrite(bluePin, LOW);
  }
  else if(userInputColor == 2)
  {
    digitalWrite(bluePin, HIGH);
    digitalWrite(greenPin, LOW);
    digitalWrite(redPin, LOW);
  }
  else if(userInputColor == 3)
  {
    digitalWrite(redPin, HIGH);
    digitalWrite(greenPin, LOW);
    digitalWrite(bluePin, LOW);
  }
  // else
  // {
  //   digitalWrite(redPin, HIGH);
  //   digitalWrite(greenPin, HIGH);
  //   digitalWrite(bluePin, HIGH);
  // }

}
