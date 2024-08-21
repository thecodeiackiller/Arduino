// Will probably need to increment the LED brightness by 255/1023 for a precise measurement
int potentiometerPin = A1;
int greenLedPin = 6;
float voltageConversion = (255.0/1023.0); // Will probably need to round this value before inserting it into the analogWrite;
int convertedVoltage;
int potentiometerReading;
void setup() {
  // put your setup code here, to run once:
  pinMode(greenLedPin, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  potentiometerReading = analogRead(potentiometerPin);
  int convertedVoltage = floor(potentiometerReading*voltageConversion);
  analogWrite(greenLedPin, convertedVoltage);
}
