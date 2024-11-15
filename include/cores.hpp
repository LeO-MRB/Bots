#include "main.cpp"

const int PINO_SENSOR_S0 = 8; // Pino 8 da BlackBoard conectado ao pino S0 do TCS230
const int PINO_SENSOR_S1 = 9; // Pino 9 da BlackBoard conectado ao pino S1 do TCS230
const int PINO_SENSOR_S2 = 11; // Pino 12 da BlackBoard conectado ao pino S2 do TCS230
const int PINO_SENSOR_S3 = 12; // Pino 11 da BlackBoard conectado ao pino S3 do TCS230
const int PINO_SENSOR_OUT = 10; // Pino 10 da BlackBoard conectado ao pino OUT do TCS230


pinMode(PINO_SENSOR_S0, OUTPUT); // Pino S0 configurado como saida
pinMode(PINO_SENSOR_S1, OUTPUT); // Pino S1 configurado como saida
pinMode(PINO_SENSOR_S2, OUTPUT); // Pino S2 configurado como saida
pinMode(PINO_SENSOR_S3, OUTPUT); // Pino S3 configurado como saida
pinMode(PINO_SENSOR_OUT, INPUT); // Pino OUT configurado como entrada

digitalWrite(PINO_SENSOR_S0, HIGH); // Pino S0 em nivel alto
digitalWrite(PINO_SENSOR_S1, LOW); // Pino S1 em nivel baixo

void leitura_cores(){
  
digitalWrite(PINO_SENSOR_S2, LOW); // Pino S2 em nivel baixo
digitalWrite(PINO_SENSOR_S3, LOW); // Pino S3 em nivel baixo

if(digitalRead(PINO_SENSOR_OUT) == HIGH){ // Verifica o nivel logico no pino OUT do sensor
    vermelho = pulseIn(PINO_SENSOR_OUT, LOW); // Le duracao do pulso na saida
  } 
else {
    vermelho = pulseIn(PINO_SENSOR_OUT, HIGH); // Le duracao do pulso na saida
  }  
    digitalWrite(PINO_SENSOR_S3, HIGH); // PINO S3 em nivel alto

if(digitalRead(PINO_SENSOR_OUT) == HIGH){ // Verifica o nivel logico no pino OUT do sensor
    azul = pulseIn(PINO_SENSOR_OUT, LOW); // Le duracao do pulso na saida
  } 
else {
    azul = pulseIn(PINO_SENSOR_OUT, HIGH); // Le duracao do pulso na saida
  }
    
  digitalWrite(PINO_SENSOR_S2, HIGH); // Pino S2 em nivel alto

if(digitalRead(PINO_SENSOR_OUT) == HIGH){ // Verifica o nivel logico no pino OUT do sensor
    verde = pulseIn(PINO_SENSOR_OUT, LOW); // Le duracao do pulso na saida
  } 
else {
    verde = pulseIn(PINO_SENSOR_OUT, HIGH); // Le duracao do pulso na saida
  }
}