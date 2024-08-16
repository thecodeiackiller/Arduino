int j = 0;
String myString = "j = ";
int delayTime = 750;


void setup() {

  Serial.begin(9600);
}

void loop() {
  Serial.print(myString);
  Serial.println(j);
  delay(delayTime);
  j++; 
}
