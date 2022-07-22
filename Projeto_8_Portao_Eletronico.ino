#include <Servo.h> //Inclui a biblioteca do servo.h
const int sensor = 0; //Define a porta A0 como sensor
Servo myservo; //Declara a variável do servo como myservo

void setup() {
  myservo.attach(9); //Myservo é definido como porta digital 9
  pinMode(sensor, INPUT); //Define a porta do sensor como entrada
  Serial.begin(9600);
}

void loop(){
  int ir = analogRead(sensor); //Faz a leitura da porta analógica do sensor
  Serial.print(ir); //Escreve ir
  Serial.print(" ir"); //Define como ir
  Serial.println();
  if(ir > 450){ //Se o valor da leitura for menor que 450
    myservo.write(90); //O servo se move 90 graus
    delay (6000); //Espera de 6 segundos
    myservo.write(-90); //O servo volta 90 graus
  }
}
