/*
 * Autor: Rafael de Souza Vareiro 
 * Data de atualização do projeto: 17 / 06 / 2022
 * 
 *programa de teste
 *esse projeto foi criado a partir de uma questão do curso que eu faço
 *porem não sei o por que o botão não esta alterando o valor da variavel estado
 *da função "liga_led" se alguem puder me ajudar ficarei muito grato
 */
 #include "projeto_da_aula.h"


void setup()
{
  int botao = 7;
  int led[3] = {10,9,8};
  
  config_led(led, botao);
  liga_led(botao, led);
  Serial.begin(9600);
}

void loop()
{
  int botao = 7;
  int led[3] = {10,9,8};
  
  int pinbotao = digitalRead(botao);
    
    if(pinbotao == HIGH)
    {
      Serial.print("estado do botao: ");
      Serial.print(pinbotao);
    }
    
    liga_led(pinbotao, led);
    
}
