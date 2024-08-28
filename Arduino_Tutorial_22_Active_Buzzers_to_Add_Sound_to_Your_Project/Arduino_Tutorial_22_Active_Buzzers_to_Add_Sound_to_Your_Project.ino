int buzzerPin = 9;
int delayTime = 200;
int potentiometerNumber = A2;
int emergencySignal = 1000;
int serialReading;
String numberRequest = "Manipulate the potentiometer cowboy!";





void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(buzzerPin, OUTPUT);
  Serial.println(numberRequest);
}

void loop() {
  // put your main code here, to run repeatedly:
  serialReading = analogRead(potentiometerNumber);
  Serial.println(serialReading);
  while(serialReading > emergencySignal)
  {
    digitalWrite(buzzerPin, HIGH);
    serialReading = analogRead(potentiometerNumber);
    delay(delayTime);
    Serial.println(serialReading);

  }
  digitalWrite(buzzerPin, LOW);



}


// Find the two buzzer
// Active Buzzer - Green - easiest to use. Plug it in and connect it to a voltage. Polarity does matter. Active buzzer has a circuit and costs a little more.
// Passive Buzzer - Black - have to apply an AC signal (Arduino this mean digitalWrite(), delay, back and forth). Cheaper. The tone we get out is a function of how fast we modulate it. We can get some tunes out of a passive buzzer.

// Need:
// Serial.begin
// pinMode

// Ask  serial.println(msg)
// Wait serial.available
// Read serial.pasrseInt

// If potentiometer > 1000, make noise.
