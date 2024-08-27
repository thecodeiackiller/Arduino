int greenPin = 10;
int bluePin = 9;
int redPin = 11;

String userInputColor;
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
  userInputColor = Serial.readString();
  userInputColor.trim(); // Remove any leading/trailing whitespace
  userInputColor.toLowerCase(); // Convert to lowercase for case-insensitive comparison
  if(userInputColor == "green")
  {
    digitalWrite(greenPin, HIGH);
    digitalWrite(redPin, LOW);
    digitalWrite(bluePin, LOW);
  }
  else if(userInputColor == "blue")
  {
    digitalWrite(bluePin, HIGH);
    digitalWrite(greenPin, LOW);
    digitalWrite(redPin, LOW);
  }
  else if(userInputColor == "red")
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
