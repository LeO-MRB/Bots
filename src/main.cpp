#include <Arduino.h>
#include "cores.hpp"
#include "ataque.hpp"
#include "movimentacao.hpp"



//Definição dos pinos dos sensores

#define pin_S1 7
#define pin_S2 6
#define pin_S3 5
#define pin_S4 4
#define pin_S3 3

bool Sensor1 = 0;
bool Sensor2 = 0;
bool SensorCor = 0;
int SensorEcho = 0;
int SensorTrig = 0;


//variável responsável por controlar a velocidade dos motores



void setup(){
pinMode(pin_S1, INPUT);
pinMode(pin_S2, INPUT);
pinMode(pin_S3, INPUT);
pinMode(pin_S4, OUTPUT);
Serial.begin(9600);//Comunicação serial
}

void loop(){
//Neste processo armazenamos o valor lido pelo sensor na variável que armazena tais dados.

Sensor1 = digitalRead(pin_S1);
Sensor2 = digitalRead(pin_S2);
SensorEcho = digitalRead(pin_S3);
SensorTrig = digitalRead(pin_S4);

if (distancia >= 300){
	velocidade = rapido;
}
else if (distancia < 300 && distancia > 150) {
	velocidade = medio;
}
else {
	velocidade = devagar;
}

//Para a cor branca atribuímos o valor 0 e, para a cor preta, o valor 1.

if((Sensor1 == 1) && (Sensor2 == 1)){ // Se detectar na extremidade das faixas duas cores pretas
analogWrite(Motor1, velocidade); // Ambos motores ligam na mesma velocidade
analogWrite(Motor2, velocidade);
}

if((Sensor1 == 0) && (Sensor2 == 1)){ // Se detectar um lado branco e o outro preto
analogWrite(Motor1, 0); // O motor 1 desliga
analogWrite(Motor2, velocidade); // O motor 2 fica ligado, fazendo assim o carrinho virar
}

if((Sensor1 == 1) && (Sensor2 == 0)){ // Se detectar um lado preto e o outro branco
analogWrite(Motor1, velocidade); //O motor 1 fica ligado
analogWrite(Motor2, 0); // O motor 2 desliga, fazendo assim o carrinho virar no outro sentido
}

// Agora falta só Detecção do tipo de cone e acionamento da arma

if ((distancia >=20) && (azul < vermelho && azul < verde)); { 
  servo_motor.write(10); // Verifica se dectou azul e movimenta o servo que talvez vire um motor normal
}
else if ((distancia >=20) && (vermelho < azul && vermelho < verde)); { 



}
}