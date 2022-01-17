/****************************************************************
**                                                             **
**                            TÍTOL:                           **
**                  Nom represenatiu del programa              **
**                                                             **
** NOM: Nom de l'Alumne                       DATA: xx/xx/20xx **
****************************************************************/
//************************** INCLUDE ****************************


//************************* VARIABLES ***************************
const byte led0 = 5;          // donar nom al pin 5 de l’Arduino
const byte led1 = 6;          // donar nom al pin 6 de l’Arduino
const byte led2 = 7;          // donar nom al pin 7 de l’Arduino
const byte led3 = 8;          // donar nom al pin 8 de l’Arduino
const byte led4 = 9;          // donar nom al pin 9 de l’Arduino
const byte led5 = 10;         // donar nom al pin 10 de l’Arduino
const byte led6 = 11;         // donar nom al pin 11 de l’Arduino
const byte led7 = 12;         // donar nom al pin 12 de l’Arduino
const byte pot0 = A0;         // donar nom al pin A0 de l’Arduino

int valPot0;                  // guardar valor del potenciometre

//*************************** SETUP *****************************

void setup() 
{
  digitalWrite(led0, HIGH);    // posar a 5V el pin 5
  digitalWrite(led1, LOW);     // posar a 0V el pin 6
  digitalWrite(led2, LOW);     // posar a 0V el pin 7
  digitalWrite(led3, LOW);     // posar a 0V el pin 8
  digitalWrite(led4, LOW);     // posar a 0V el pin 9
  digitalWrite(led5, LOW);     // posar a 0V el pin 10
  digitalWrite(led6, LOW);     // posar a 0V el pin 11
  digitalWrite(led7, HIGH);    // posar a 5V el pin 12
  
  delay(temps);                // es queden leds 300ms encesos
                               //2
  digitalWrite(led0, HIGH);    // posar a 5V el pin 5
  digitalWrite(led1, HIGH);    // posar a 5V el pin 6
  digitalWrite(led2, LOW);     // posar a 0V el pin 7
  digitalWrite(led3, LOW);     // posar a 0V el pin 8
  digitalWrite(led4, LOW);     // posar a 0V el pin 9
  digitalWrite(led5, LOW);     // posar a 0V el pin 10
  digitalWrite(led6, HIGH);    // posar a 5V el pin 11
  digitalWrite(led7, HIGH);    // posar a 5V el pin 12
  
  delay(temps);                // es queden leds 300ms apagats
                               //3
  digitalWrite(led0, LOW);     // posar a 0V el pin 5
  digitalWrite(led1, HIGH);    // posar a 5V el pin 6
  digitalWrite(led2, HIGH);    // posar a 5V el pin 7
  digitalWrite(led3, LOW);     // posar a 0V el pin 8
  digitalWrite(led4, LOW);     // posar a 0V el pin 9
  digitalWrite(led5, HIGH);    // posar a 5V el pin 10
  digitalWrite(led6, HIGH);    // posar a 5V el pin 11
  digitalWrite(led7, LOW);     // posar a 0V el pin 12

  delay(temps);                // es queden leds 300ms apagats
                               //4
  digitalWrite(led0, LOW);     // posar a 0V el pin 5
  digitalWrite(led1, LOW);     // posar a 0V el pin 6
  digitalWrite(led2, HIGH);    // posar a 5V el pin 7
  digitalWrite(led3, HIGH);    // posar a 5V el pin 8
  digitalWrite(led4, HIGH);    // posar a 5V el pin 9
  digitalWrite(led5, HIGH);    // posar a 5V el pin 10
  digitalWrite(led6, LOW);     // posar a 0V el pin 11
  digitalWrite(led7, LOW);     // posar a 0V el pin 12
  
  delay(temps);                // es queden leds 300ms apagats
                               //5
  digitalWrite(led0, LOW);     // posar a 0V el pin 5
  digitalWrite(led1, LOW);     // posar a 0V el pin 6
  digitalWrite(led2, LOW);     // posar a 0V el pin 7
  digitalWrite(led3, HIGH);    // posar a 5V el pin 8
  digitalWrite(led4, HIGH);    // posar a 5V el pin 9
  digitalWrite(led5, LOW);     // posar a 0V el pin 10
  digitalWrite(led6, LOW);     // posar a 0V el pin 11
  digitalWrite(led7, LOW);     // posar a 0V el pin 12
  
  delay(temps);                // es queden leds 300ms apagats
                               //6
  digitalWrite(led0, LOW);     // posar a 0V el pin 5
  digitalWrite(led1, LOW);     // posar a 0V el pin 6
  digitalWrite(led2, LOW);     // posar a 0V el pin 7
  digitalWrite(led3, HIGH);    // posar a 5V el pin 8
  digitalWrite(led4, HIGH);    // posar a 5V el pin 9
  digitalWrite(led5, LOW);     // posar a 0V el pin 10
  digitalWrite(led6, LOW);     // posar a 0V el pin 11
  digitalWrite(led7, LOW);     // posar a 0V el pin 12
    
  delay(temps);                // es queden leds 300ms apagats
                               //7
  digitalWrite(led0, LOW);     // posar a 0V el pin 5
  digitalWrite(led1, LOW);     // posar a 0V el pin 6
  digitalWrite(led2, HIGH);    // posar a 5V el pin 7
  digitalWrite(led3, HIGH);    // posar a 5V el pin 8
  digitalWrite(led4, HIGH);    // posar a 5V el pin 9
  digitalWrite(led5, HIGH);    // posar a 5V el pin 10
  digitalWrite(led6, LOW);     // posar a 0V el pin 11
  digitalWrite(led7, LOW);     // posar a 0V el pin 12
  
  delay(temps);                // es queden leds 300ms apagats
                               //8
  digitalWrite(led0, LOW);     // posar a 0V el pin 5
  digitalWrite(led1, HIGH);    // posar a 5V el pin 6
  digitalWrite(led2, HIGH);    // posar a 5V el pin 7
  digitalWrite(led3, LOW);     // posar a 0V el pin 8
  digitalWrite(led4, LOW);     // posar a 0V el pin 9
  digitalWrite(led5, HIGH);    // posar a 5V el pin 10
  digitalWrite(led6, HIGH);    // posar a 5V el pin 11
  digitalWrite(led7, LOW);     // posar a 0V el pin 12

  delay(temps);                // es queden leds 300ms apagats
                               //9
  digitalWrite(led0, HIGH);    // posar a 5V el pin 5
  digitalWrite(led1, HIGH);    // posar a 5V el pin 6
  digitalWrite(led2, LOW);     // posar a 0V el pin 7
  digitalWrite(led3, LOW);     // posar a 0V el pin 8
  digitalWrite(led4, LOW);     // posar a 0V el pin 9
  digitalWrite(led5, LOW);     // posar a 0V el pin 10
  digitalWrite(led6, HIGH);    // posar a 5V el pin 11
  digitalWrite(led7, HIGH);    // posar a 5V el pin 12

  delay(temps);                // es queden leds 300ms apagats
                               //10
  digitalWrite(led0, HIGH);    // posar a 5V el pin 5
  digitalWrite(led1, LOW);     // posar a 0V el pin 6
  digitalWrite(led2, LOW);     // posar a 0V el pin 7
  digitalWrite(led3, LOW);     // posar a 0V el pin 8
  digitalWrite(led4, LOW);     // posar a 0V el pin 9
  digitalWrite(led5, LOW);     // posar a 0V el pin 10
  digitalWrite(led6, LOW);     // posar a 0V el pin 11
  digitalWrite(led7, HIGH);    // posar a 5V el pin 12

  delay(temps);                // es queden leds 300ms apagats
                               //11
  digitalWrite(led0, LOW);     // posar a 0V el pin 5
  digitalWrite(led1, LOW);     // posar a 0V el pin 6
  digitalWrite(led2, LOW);     // posar a 0V el pin 7
  digitalWrite(led3, LOW);     // posar a 0V el pin 8
  digitalWrite(led4, LOW);     // posar a 0V el pin 9
  digitalWrite(led5, LOW);     // posar a 0V el pin 10
  digitalWrite(led6, LOW);     // posar a 0V el pin 11
  digitalWrite(led7, LOW);     // posar a 0V el pin 12

  delay(temps);                // es queden leds 300ms apagats
                               //12
  digitalWrite(led0, LOW);     // posar a 0V el pin 5
  digitalWrite(led1, LOW);     // posar a 0V el pin 6
  digitalWrite(led2, LOW);     // posar a 0V el pin 7
  digitalWrite(led3, LOW);     // posar a 0V el pin 8
  digitalWrite(led4, LOW);     // posar a 0V el pin 9
  digitalWrite(led5, LOW);     // posar a 0V el pin 10
  digitalWrite(led6, LOW);     // posar a 0V el pin 11
  digitalWrite(led7, LOW);     // posar a 0V el pin 12
 
  delay(temps);                // es queden leds 300ms apagats
}

//*************************** LOOP ******************************
void loop() 
{
  
}

//************************* FUNCIONS ****************************
