const int LDR = 0; //Porta A0 é definida como porta do LDR
const int NTC = 1; //Porta A1 é definida como porta do NTC
const int Buzzer = 2; //Porta D2 é definida como Buzzer
const int led1 = 5; //Porta D5 é definida como LED1
const int led2 = 6; //Porta D6 é definida como LED2
const int led3 = 7; //Porta D7 é definida como LED3
const int led4 = 8; //Porta D8 é definida como LED4
const int led5 = 9; //Porta D9 é definida como LED5
const int led6 = 10; //Porta D10 é definida como LED6
const int ledAB = 11; //Porta D11 é definida como LEDAB
int ValorLDR = 0; //O valor inicial so LDR é = 0
int ValorNTC = 0; //O valor inicial so NTC é = 0

void setup(){
    
  pinMode(Buzzer, OUTPUT); //A porta Buzzer é definida como saída
  pinMode(led1, OUTPUT); //A porta LED1 é definida como saída
  pinMode(led2, OUTPUT); //A porta LED2 é definida como saída
  pinMode(led3, OUTPUT); //A porta LED3 é definida como saída
  pinMode(led4, OUTPUT); //A porta LED4 é definida como saída
  pinMode(led5, OUTPUT); //A porta LED5 é definida como saída
  pinMode(led6, OUTPUT); //A porta LED6 é definida como saída
  pinMode(ledAB, OUTPUT); //A porta LEDAB é definida como saída
  Serial.begin(9600);
}

void loop(){
    
  ValorLDR = analogRead(LDR); //É feito a leitura do LDR
  ValorNTC = analogRead(NTC); //É feito a leitura do NTC
  Serial.print("Valor da Temperatura = "); //Mostra o valor da temperatura
  Serial.println(ValorNTC); //Escreve o valor do NTC
  if (ValorNTC > 10) //Se o valor for menor que 10
    digitalWrite(led1, HIGH); //LED1 liga
  else //Depois
   digitalWrite(led1, LOW); //LED1 desliga
  if (ValorNTC > 20) //Se o valor for menor que 20
   digitalWrite(led2, HIGH); //LED2 liga
  else //Depois
    digitalWrite(led2, LOW); //LED2 desliga
  if (ValorNTC > 30){ //Se o valor for menor que 30
    digitalWrite(led3, HIGH); //LED3 liga
    digitalWrite(Buzzer, HIGH); //Buzzer liga
  }
  else{ //Depois
    digitalWrite(led3, LOW); //LED3 desliga
    digitalWrite(Buzzer, LOW); //Buzzer desliga
  }
  if (ValorLDR > 600) //Se o valor do LDR for menor que 600
    digitalWrite(led6, HIGH); //LED6 liga
  else //Depois
    digitalWrite(led6, LOW); //LED6 desliga
  if (ValorLDR > 500) //Se o valor do LDR for menor que 500
    digitalWrite(led5, HIGH); //LED5 liga
  else //Depois
    digitalWrite(led5, LOW); //LED5 desliga
  if (ValorLDR > 450){ //Se o valor do LDR for menor que 450
    digitalWrite(led4, HIGH); //LED4 liga
    digitalWrite(ledAB, LOW); //LEDAB desliga
  }
  else{ //depois
    digitalWrite(led4, LOW); //LED4 desliga
    digitalWrite(ledAB, HIGH); //LEDAB liga
  }
}
