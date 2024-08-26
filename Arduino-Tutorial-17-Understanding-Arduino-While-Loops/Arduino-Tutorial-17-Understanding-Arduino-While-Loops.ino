// Arduino Tutorial 17: Understanding While Loops
int potentiometerReading = 0;
int redLedControlPin = 9;
int potentiometerReadPin = A1;
int delayTiem = 500;

void setup() {
  // put your setup code here, to run once:
  pinMode(redLedControlPin, OUTPUT);
  pinMode(potentiometerReadPin, INPUT);
  Serial.begin(9600);


}

void loop() {
  potentiometerReading = analogRead(potentiometerReadPin);
  Serial.println(potentiometerReading);
  while(potentiometerReading > 300)
  {
    digitalWrite(redLedControlPin, HIGH);
    potentiometerReading = analogRead(potentiometerReadPin);
    Serial.println(potentiometerReading);
  }
  
    digitalWrite(redLedControlPin, LOW);
  // put your main code here, to run repeatedly:

}
