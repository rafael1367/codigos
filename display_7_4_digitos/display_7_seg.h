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

    bool matriz[10][8] = {// a, b, c, d, e, f, g, dp
                            {1, 1, 1, 1, 1, 1, 0, 0}, /*numero 0*/
                            {0, 1, 1, 0, 0, 0, 0, 0}, /*numero 1*/
                            {1, 1, 0, 1, 1, 0, 1, 0}, /*numero 2*/
                            {1, 1, 1, 1, 0, 0, 1, 0}, /*numero 3*/
                            {0, 1, 1, 0, 0, 1, 1, 0}, /*numero 4*/
                            {1, 0, 1, 1, 0, 1, 1, 0}, /*numero 5*/
                            {1, 0, 1, 1, 1, 1, 1, 0}, /*numero 6*/
                            {1, 1, 1, 0, 0, 0, 0, 0}, /*numero 7*/
                            {1, 1, 1, 1, 1, 1, 1, 0}, /*numero 8*/
                            {1, 1, 1, 0, 0, 1, 1, 0}  /*numero 9*/
                          
                          };
    
    
    //função que define os pinos como saida(OUTPUT)!
    void config_pin(int *p, int *c)
    {
      for(int i = 8; i < 8; i++)
      {
        pinMode(*p, OUTPUT);
        digitalWrite(*p, LOW);
        p++;
      }

      
      for(int i = 4; i < 4; i++)
      {
        pinMode(*c, OUTPUT);
        digitalWrite(*c, LOW);
        c++;
      }
    }  


    // parametros da função abaixo: numero que vai ser imprimido,pinos,comum;
    void print_display(int num, int *p, int *c)
    {
   
          for(int b = 0; b < 8; b++)
          {
            digitalWrite(*c,HIGH);
            digitalWrite(*p, matriz[num][b]);
            p++;
          } 
         digitalWrite(*c,LOW);
     }
