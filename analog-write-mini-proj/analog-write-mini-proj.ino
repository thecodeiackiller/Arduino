int bluePin = 9;
int noBright = 0;
int lowBright = 50;
int medBright = 145;
int highBright = 255;
int brightness[4] = 
{
noBright, lowBright, medBright, highBright
};


void setup() {
  // put your setup code here, to run once:
pinMode(bluePin,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
int brightnessLength = sizeof(brightness) / sizeof(brightness[0]);
  for(int i = 0; i < brightnessLength; i++)
  {
    analogWrite(bluePin, brightness[i]);
    delay(500);
  }

// In the past we have specified high or low, but we can do middle.
// Second parameter in analogWrite isn't high or low (0 to 5v), but an int from 0-255

// 0 = 0 volts
// 255 = 5 volts
// Adding something just to push to GitHub

// With the analogWrite we are simulating analogs but not really doing them
}
