void setup() {
  Serial.begin(9600);
  Serial.println("Hola soy un arduino");
  pinMode(13,OUTPUT);
}

void loop() {

  if(Serial.available()){
    char Letra = Serial.read();
    Serial.print(Letra);
    if (Letra == 'H') {
      digitalWrite(13,1);

    }
    else if(Letra == 'L'){
      digitalWrite(13,0);
    }
  }

}
