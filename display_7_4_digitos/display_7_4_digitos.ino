/*
*Autor: Rafel de Souza Vareiro
*data de inicio: 14/06/2022
*
*função do projeto: começei esse programa para facilitar o uso do display de 7 segmentos 4 digitos
*pois acaba sendo um codigo muito grande, a mina intenção com ele é futuramente transformar em uma 
*biblioteca porem ele esta em fase de teste.
*
*esse projeto é uma projeto didatico então pode apresentar falhas, fique a vontade para fazer 
*alterações no prejeto como quiser, e compartilhar as suas experiencias porem falhas e bugs podem 
*ser apresentados nesse codigo, verifique muito bem antes de usar se por acaso tiver algum conselho
*pode comentar.
*
*obs: criticas construtivas são sempre bem vindas!
*
*obrigrado por ler e faça um bom uso
*
*gmail para contado: rafaels.vareiro@gmail.com
*/

#include "display_7_seg.h"


  int pin_user[8] = {13,12,11,10,9,8,7,6}; //colocar os pinos na ordem (a,b,c,d,e,f,g,dp)
  int comums_user[4] = {5,4,3,2}; // ordem dos digitos crescente do 1 ao 4

void setup()
{
  config_pin(pin_user, comums_user);
}

void loop()
{
  int num = 0;// use essa variavel para escolher o numero a ser imprimido no display
  print_display(num, pin_user, comums_user);
}
