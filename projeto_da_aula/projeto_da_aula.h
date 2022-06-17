/*
 *programa de teste
 */

void config_led(int *led, int botao)
{
  pinMode(botao,INPUT);
    for(int i = 0; i < 3; i++)
    {
        pinMode(*led,OUTPUT);
        led++;
    }
}

int estado = 0;


void liga_led(int botao, int *led)
{
    

    if(botao == HIGH)
    {
        Serial.print("  estado anterior da variavel: ");
        Serial.print(estado);
        estado++;
        Serial.print("  estado da variavel: ");
        Serial.println(estado);
        delay(300);
    }
    
    switch(estado)
    {
        case 0:
            led = 0;
            digitalWrite(*led, LOW);
            led = 1;
            digitalWrite(*led, LOW);
            led = 2;
            digitalWrite(*led, LOW);
        break;

        case 1:
            led = 0;
            digitalWrite(*led, HIGH);
            led = 1;
            digitalWrite(*led, LOW);
            led = 2;
            digitalWrite(*led, HIGH);
        break;

        case 2:
            led = 0;
            digitalWrite(*led, HIGH);
            led = 1;
            digitalWrite(*led, LOW);
            led = 2;
            digitalWrite(*led, HIGH);
        break;

        case 3:
            led = 0;
            digitalWrite(*led, LOW);
            led = 1;
            digitalWrite(*led, HIGH);
            led = 2;
            digitalWrite(*led, HIGH);
        break;

        case 4:
            estado = 0;
        break;
    }
}
