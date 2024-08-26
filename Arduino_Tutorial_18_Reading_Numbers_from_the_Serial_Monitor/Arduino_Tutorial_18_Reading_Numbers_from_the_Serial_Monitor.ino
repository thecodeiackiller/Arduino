int userInputNumber;
String msg1 = "How many blinks do you want?";

int j = 1;
int pinWeAreWorkingWith = 9;
int delayTime = 200;



void setup() {
   // put your setup code here, to run once:
   // We have to do three things:
   // 1. Ask
   // 2. Wait
   // 3. Read
  Serial.begin(9600); 
}

void loop() {
  // put your main code here, to run repeatedly:
  // Going to need:
  // 1. Serial.parseInt
  // 2. Serial.available
  Serial.println(msg1);// Asking.. 
  while(Serial.available() == 0) // Waiting.. 
  {

  }
  userInputNumber = Serial.parseInt();

  while(j <= userInputNumber) // Riding... wait, no. Writing.
  {
    digitalWrite(pinWeAreWorkingWith, HIGH);
    delay(delayTime);
    digitalWrite(pinWeAreWorkingWith, LOW);
    delay(delayTime);
    j++;
  }
  digitalWrite(pinWeAreWorkingWith, LOW);
  j = 1; // Need to make sure we are resetting j each time or else it will stay at the amount it incremented to and won't blink. Try leaving this out.





}
