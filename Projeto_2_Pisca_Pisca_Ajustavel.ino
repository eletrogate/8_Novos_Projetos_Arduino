int potPin = 0; //Declara porta A0 do potênciometro
int ledPin = 11; //Declara a porta D11 para o LED
int val = 0; //Declara o valor inicial como zero
void setup(){
  pinMode(ledPin, OUTPUT); //Declara porta do LED como saída
}
void loop(){
  val = analogRead(potPin); //Le o valor do potênciometro
  digitalWrite(ledPin, HIGH); //Liga o Led
  delay(val); //Lê o valor do potênciometro e dá o tempo
  digitalWrite(ledPin, LOW); //Desliga o LED
  delay(val); //Lê o valor do potênciometro e dá o tempo
}
