int light1 = 2;
int light2 = 3;
int light3 = 4;
int light4 = 5;
int light5 = 6;
int dly = 50;

void setup() {
  pinMode(light1, OUTPUT);
  pinMode(light2, OUTPUT);
  pinMode(light3, OUTPUT);
  pinMode(light4, OUTPUT);
  pinMode(light5, OUTPUT);
 // This needs to be in a loop, of course
}

void loop() {
  // put your main code here, to run repeatedly:
  
  digitalWrite(light1, LOW);
  digitalWrite(light2, LOW);
  digitalWrite(light3, LOW);
  digitalWrite(light4, LOW);
  digitalWrite(light5, HIGH);
  delay(dly);

  digitalWrite(light1, LOW);
  digitalWrite(light2, LOW);
  digitalWrite(light3, LOW);
  digitalWrite(light4, HIGH);
  digitalWrite(light5, LOW);
  delay(dly);

  digitalWrite(light1, LOW);
  digitalWrite(light2, LOW);
  digitalWrite(light3, HIGH);
  digitalWrite(light4, LOW);
  digitalWrite(light5, LOW);
  delay(dly);
  
  digitalWrite(light1, LOW);
  digitalWrite(light2, HIGH);
  digitalWrite(light3, LOW);
  digitalWrite(light4, LOW);
  digitalWrite(light5, LOW);
  delay(dly);

  digitalWrite(light1, HIGH);
  digitalWrite(light2, LOW);
  digitalWrite(light3, LOW);
  digitalWrite(light4, LOW);
  digitalWrite(light5, LOW);
  delay(dly);

  digitalWrite(light1, LOW);
  digitalWrite(light2, HIGH);
  digitalWrite(light3, LOW);
  digitalWrite(light4, LOW);
  digitalWrite(light5, LOW);
  delay(dly);

  digitalWrite(light1, LOW);
  digitalWrite(light2, LOW);
  digitalWrite(light3, HIGH);
  digitalWrite(light4, LOW);
  digitalWrite(light5, LOW);
  delay(dly);

  digitalWrite(light1, LOW);
  digitalWrite(light2, LOW);
  digitalWrite(light3, LOW);
  digitalWrite(light4, HIGH);
  digitalWrite(light5, LOW);
  delay(dly);
}

  