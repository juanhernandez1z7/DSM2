void setup() {
  pinMode(13,OUTPUT);

}

void loop() {
  int lectura = analogRead(4);
  lectura = map(lectura, 0, 1023, 100, 1000);
  parpadeo(lectura);
  

}

void parpadeo(int lectura){
  digitalWrite(13,1);
  delay(lectura);
  digitalWrite(13,0);
  delay(lectura);
}
