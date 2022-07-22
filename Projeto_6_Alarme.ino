int LED = 13; //Porta D13 é definido como LED
int buzzer = 10; //Porta D10 é definido como Buzzer
int sharp = 0; //Porta A0 é definida como sensor
void setup() {
  pinMode(sharp,INPUT); //Porta do sensor é definida como entrada
  pinMode(buzzer,OUTPUT); //Porta do Buzzer é definida como saída
  pinMode(LED,OUTPUT); //Porta do LED é definida como saída
}
void loop() {
  int ir = analogRead(sharp); //Leitura da porta analogica do sensor é feita
  if(ir>150) { //Se o valor for menor que 150 o LED e o Buzzer são acionados
    digitalWrite(LED, HIGH); //LED liga
    digitalWrite(buzzer, HIGH); //Buzzer liga
  }else { //Depois
    digitalWrite(LED, LOW); //Led desliga
    digitalWrite(buzzer, LOW); //Buzzer desliga
  }
}
