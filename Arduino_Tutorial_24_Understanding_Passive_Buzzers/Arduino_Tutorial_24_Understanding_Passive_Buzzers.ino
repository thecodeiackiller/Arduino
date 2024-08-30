int buzzPin = 9;
unsigned int buzzTime;
// Question: What is the significance of this in the real world?
int potentiometerPin = A2;
int potentiometerOutput;


void setup() {
  // put your setup code here, to run once:
  pinMode(buzzPin, OUTPUT);
  pinMode(potentiometerPin, INPUT);
  Serial.begin(9600); //Does our baud rate need to change because were working with microseconds??

}

void loop() {
  // put your main code here, to run repeatedly:
   potentiometerOutput = analogRead(potentiometerPin);

  // Map the potentiometer value (0-1023) to the desired delay range (10000-60 microseconds)
  buzzTime = map(potentiometerOutput, 0, 1023, 60, 10000);

  // Generate the buzz tone
  digitalWrite(buzzPin, HIGH);
  delayMicroseconds(buzzTime);
  digitalWrite(buzzPin, LOW);
  delayMicroseconds(buzzTime);
}
// To make it buzz, have to turn on/off continuously
// Need a "buzztime 1"
// Need "buzztime 2"
// These allow for different tones
// Learning today: there is a base method called delayMicroseconds


// Homework
// To the left: 10000 microsecond delay
// To the right: 60 microsecond delay
// Hint: To do this, math will be needed.
// So analogRead probably reads in MilliSeconds, so we'll have to probably multiply the reading by 1000 because 