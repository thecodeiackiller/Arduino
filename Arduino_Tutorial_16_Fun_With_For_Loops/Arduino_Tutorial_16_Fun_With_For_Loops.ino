int delayTime = 100;
int j;
void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
}

void loop() {
  for(j = 10; j > 0; j--)
  {
    Serial.println(j);
    delay(delayTime);
  }
  Serial.println();
  // put your main code here, to run repeatedly:

}
