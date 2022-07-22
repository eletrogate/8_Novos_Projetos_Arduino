const int ledPin1 = 13; //Define a porta D13 como LED 1
const int ledPin2 = 12; //Define a porta D12 como LED 2
const int ledPin3 = 11; //Define a porta D11 como LED 2
const int Botao1 = 2; //Define a porta D2 como botão 1
const int Botao2 = 3; //Define a porta D3 como botão 2
const int Botao3 = 4; //Define a porta D4 como botão 3
const int Buzzer = 10; //Define a porta D10 como Buzzer
int EstadoBotao1 = 0; //Estado inicial do botão1 é = 0
int EstadoBotao2 = 0; //Estado inicial do botão2 é = 0
int EstadoBotao3 = 0; //Estado inicial do botão3 é = 0
int Tom = 0; //Tom inicial é = 0
void setup() {
  pinMode(Buzzer, OUTPUT); //Define a porta do Buzzer como saída
  pinMode(ledPin1, OUTPUT); //Define a porta do LED 1 como saída
  pinMode(Botao1, INPUT); //Define a porta do botão 1 como entrada
  pinMode(ledPin2, OUTPUT); //Define a porta do LED 2 como saída
  pinMode(Botao2, INPUT); //Define a porta do botão 2 como entrada
  pinMode(ledPin3, OUTPUT); //Define a porta do LED 3 como saída
  pinMode(Botao3, INPUT); //Define a porta do botão 3 como entrada
}
void loop(){
  EstadoBotao1 = digitalRead(Botao1); //É feito a leitura do estado do botão 1
  EstadoBotao2 = digitalRead(Botao2); //É feito a leitura do estado do botão 2
  EstadoBotao3 = digitalRead(Botao3); //É feito a leitura do estado do botão 3

  //A variável abaixo irá acionar um tom do Buzzer e um Led de acordo com os estados dos botões
  if(EstadoBotao1 && !EstadoBotao2 &&
    !EstadoBotao3) {
    Tom = 50;
    digitalWrite(ledPin1, HIGH); //LED 1 liga
  }
  //A variável abaixo irá acionar um tom do Buzzer e um Led de acordo com os estados dos botões
  if(EstadoBotao2 && !EstadoBotao1 &&
    !EstadoBotao3) {
    Tom = 400;
    digitalWrite(ledPin3, HIGH); //LED 3 liga
  }
  //A variável abaixo irá acionar um tom do Buzzer e um Led de acordo com os estados dos botões
  if(EstadoBotao3 && !EstadoBotao2 &&
    !EstadoBotao1) {
    Tom = 1000;
    digitalWrite(ledPin2, HIGH); //LED 2 liga
  }
  while(Tom > 0){
    digitalWrite(Buzzer, HIGH); //Buzzer liga
    delayMicroseconds(Tom); //Tempo de espera do Tom
    digitalWrite(Buzzer, LOW); //Buzzer desliga
    delayMicroseconds(Tom); //Tempo de espera do Tom
    Tom = 0;
    digitalWrite(ledPin1, LOW); //LED 1 desliga
    digitalWrite(ledPin2, LOW); //LED 2 desliga
    digitalWrite(ledPin3, LOW); //LED 3 desliga
  }
}
