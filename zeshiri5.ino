float voltage;
int ledpin=10;
void setup() {
  Serial.begin(9600);
}

void loop() {
  float voltage=analogRead(A1);
  float voltage1=voltage/1023*5;
  float voltage2=map(voltage,0,1023,0,255);
  Serial.print("voltage=");
  Serial.println(voltage1);
//  delay(1000);
  analogWrite(10,voltage2);
   
}
