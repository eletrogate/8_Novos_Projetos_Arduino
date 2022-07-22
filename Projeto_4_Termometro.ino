int PinoSensor = 0;//Declara o pino A0 como entrada do sensor
int Buzzer = 6;//Define o pino D6 como Buzzer
int led1 = 8;//Define o LED 1 como porta D8
int led2 = 9;//Define o LED 2 como porta D9
int led3 = 10;//Define o LED 3 como porta D10
int led4 = 11;//Define o LED 4 como porta D11
int led5 = 12;//Define o LED 5 como porta D12
int led6 = 13;//Define o LED 6 como porta D13
int ValorSensor = 0;//Declara o valor inicial do sensor = 0
void setup() {
  pinMode(Buzzer, OUTPUT); //Porta do Buzzer é definida como saída
  pinMode(led1, OUTPUT); //Porta do LED 1 é definida como saída
  pinMode(led2, OUTPUT); //Porta do LED 2 é definida como saída
  pinMode(led3, OUTPUT); //Porta do LED 3 é definida como saída
  pinMode(led4, OUTPUT); //Porta do LED 4 é definida como saída
  pinMode(led5, OUTPUT); //Porta do LED 5 é definida como saída
  pinMode(led6, OUTPUT); //Porta do LED 6 é definida como saída
  Serial.begin(9600);
}
void loop(){
  ValorSensor = analogRead(PinoSensor);//É feito a leitura do pino do sensor
  Serial.print("Valor do Sensor = "); //Define o valor do sensor
  Serial.println(ValorSensor); //Escreve o valor do sensor
  if (ValorSensor > 30) //A função vai definir como cada LED será ligado dependendo do valor que o sensor mandar
    digitalWrite(led1, HIGH); //LED 1 liga
  else
   digitalWrite(led1, LOW); //LED 1 desliga
  if (ValorSensor > 35) //A função vai definir como cada LED será ligado dependendo do valor que o sensor mandar
   digitalWrite(led2, HIGH); //LED 2 liga
  else
   digitalWrite(led2, LOW); //LED 2 desliga
  if (ValorSensor > 40) //A função vai definir como cada LED será ligado dependendo do valor que o sensor mandar
    digitalWrite(led3, HIGH); //LED 3 liga
  else
    digitalWrite(led3, LOW); //LED 3 desliga
  if (ValorSensor > 45) //A função vai definir como cada LED será ligado dependendo do valor que o sensor mandar
   digitalWrite(led4, HIGH); //LED 4 liga
  else
   digitalWrite(led4, LOW); //LED 4 desliga
  if (ValorSensor > 50) //A função vai definir como cada LED será ligado dependendo do valor que o sensor mandar
   digitalWrite(led5, HIGH); //LED 5 liga
  else
    digitalWrite(led5, LOW); //LED 5 desliga
  if (ValorSensor > 55 ){ //A função vai definir como cada LED será ligado dependendo do valor que o sensor mandar
    digitalWrite(led6, HIGH); //LED 6 liga
    digitalWrite(Buzzer, HIGH); //Buzzer liga
  }
  else{
    digitalWrite(led6, LOW); //Led 6 desliga
    digitalWrite(Buzzer, LOW); //Buzzer desliga
  }
  delay(1000); //espera de 1000 milissegundos
}
