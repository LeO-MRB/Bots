#include <Arduino.h>

//Definição dos pinos de controle do motor

#define Motor1 9 // Pino_Velocidade 1º Motor ( 0 a 255)_ Porta IN2 ponte H;
#define Motor2 11 //Pino_Velocidade 2º Motor ( 0 a 255) _ Porta IN4 ponte H;
#define Motor3 11 //Pino_Velocidade 2º Motor ( 0 a 255) _ Porta IN4 ponte H;
#define direcao1 8 //Pino_Direção do 1º Motor: Para frente / Para trás (HIGH ou LOW)_ porta IN1 ponte H;
#define direcao2 10 //Pino_Direção do 2º Motor: Para frente / Para trás (HIGH ou LOW)_ porta IN3 ponte H;


//variável responsável por controlar a velocidade dos motores
int rapido = 150;
int medio = 75;
int devagar = 30;
int velocidade = 0;
int distancia =0;

void movimento(){
pinMode(Motor1, OUTPUT);
pinMode(Motor2, OUTPUT);
pinMode(direcao1, OUTPUT);
pinMode(direcao2, OUTPUT);

digitalWrite(direcao1, LOW);
digitalWrite(direcao2, LOW);

}