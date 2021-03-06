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
const byte buttonPin2 = 2;    // donar nom al pin 2 de l'Arduino
byte buttonState2 = 0;        // aquesta variable guarda l'estat en que es troba el el botó que li correspon
const byte buttonPin3 = 3;    // donar nom al pin 3 de l'Arduino
byte buttonState3 = 0;        // aquesta variable guarda l'estat en que es troba el el botó que li correspon
//*************************** SETUP *****************************

void setup() 
{
  pinMode(led0, OUTPUT);      // definir el pin 5 com una sortida
  pinMode(led1, OUTPUT);      // definir el pin 6 com una sortida
  pinMode(led2, OUTPUT);      // definir el pin 7 com una sortida
  pinMode(led3, OUTPUT);      // definir el pin 8 com una sortida
  pinMode(led4, OUTPUT);      // definir el pin 9 com una sortida
  pinMode(led5, OUTPUT);      // definir el pin 10 com una sortida
  pinMode(led6, OUTPUT);      // definir el pin 11 com una sortida
  pinMode(led7, OUTPUT);      // definir el pin 12 com una sortida
  pinMode(buttonPin2, INPUT); // definir el pin 2 com una entrada
  pinMode(buttonPin3, INPUT); // definir el pin 3 com una entrada
}

//*************************** LOOP ******************************
void loop() 
{
  buttonState2 = digitalRead(buttonPin2); // donar el valor de button pin (el valor llegit per la placa) a buttonState1
  buttonState3 = digitalRead(buttonPin3); // donar el valor de button pin (el valor llegit per la placa) a buttonState2

  if (buttonState2 == 0)
  {
    digitalWrite(led0, HIGH);    // posar a 5V el pin 5
    digitalWrite(led1, HIGH);    // posar a 5V el pin 6
    digitalWrite(led2, HIGH);    // posar a 5V el pin 7
    digitalWrite(led3, HIGH);    // posar a 5V el pin 8
    digitalWrite(led4, HIGH);    // posar a 5V el pin 9
    digitalWrite(led5, HIGH);    // posar a 5V el pin 10
    digitalWrite(led6, HIGH);    // posar a 5V el pin 11
    digitalWrite(led7, HIGH);    // posar a 5V el pin 12
    
    delay(500);                  // es queden leds 500ms encesos
    
    digitalWrite(led0, LOW);     // posar a 0V el pin 5
    digitalWrite(led1, LOW);     // posar a 0V el pin 6
    digitalWrite(led2, LOW);     // posar a 0V el pin 7
    digitalWrite(led3, LOW);     // posar a 0V el pin 8
    digitalWrite(led4, LOW);     // posar a 0V el pin 9
    digitalWrite(led5, LOW);     // posar a 0V el pin 10
    digitalWrite(led6, LOW);     // posar a 0V el pin 11
    digitalWrite(led7, LOW);     // posar a 0V el pin 12
    
    delay(500);                  // es queden leds 500ms apagats
  }
  else if (buttonState3 == 0)
  {
    digitalWrite(led0, HIGH);     // posar a 5V el pin 5
    digitalWrite(led1, LOW);      // posar a 0V el pin 6
    digitalWrite(led2, HIGH);     // posar a 5V el pin 7
    digitalWrite(led3, LOW);      // posar a 0V el pin 8
    digitalWrite(led4, HIGH);     // posar a 5V el pin 9
    digitalWrite(led5, LOW);      // posar a 0V el pin 10
    digitalWrite(led6, HIGH);     // posar a 5V el pin 11
    digitalWrite(led7, LOW);      // posar a 0V el pin 12
    
    delay(500);                   // es queden leds 500ms encesos
    
    digitalWrite(led0, LOW);      // posar a 0V el pin 5
    digitalWrite(led1, HIGH);     // posar a 5V el pin 6
    digitalWrite(led2, LOW);      // posar a 0V el pin 7
    digitalWrite(led3, HIGH);     // posar a 5V el pin 8
    digitalWrite(led4, LOW);      // posar a 0V el pin 9
    digitalWrite(led5, HIGH);     // posar a 5V el pin 10
    digitalWrite(led6, LOW);      // posar a 0V el pin 11
    digitalWrite(led7, HIGH);     // posar a 5V el pin 12
    
    delay(500);                   // es queden leds 500ms apagats
  }
  else
  {
    digitalWrite(led0, HIGH);    // posar a 5V el pin 5
    digitalWrite(led1, LOW);     // posar a 0V el pin 6
    digitalWrite(led2, LOW);     // posar a 0V el pin 7
    digitalWrite(led3, LOW);     // posar a 0V el pin 8
    digitalWrite(led4, LOW);     // posar a 0V el pin 9
    digitalWrite(led5, LOW);     // posar a 0V el pin 10
    digitalWrite(led6, LOW);     // posar a 0V el pin 11
    digitalWrite(led7, HIGH);    // posar a 5V el pin 12
    
    delay(300);                // es queden leds 300ms encesos
                                 //2
    digitalWrite(led0, HIGH);    // posar a 5V el pin 5
    digitalWrite(led1, HIGH);    // posar a 5V el pin 6
    digitalWrite(led2, LOW);     // posar a 0V el pin 7
    digitalWrite(led3, LOW);     // posar a 0V el pin 8
    digitalWrite(led4, LOW);     // posar a 0V el pin 9
    digitalWrite(led5, LOW);     // posar a 0V el pin 10
    digitalWrite(led6, HIGH);    // posar a 5V el pin 11
    digitalWrite(led7, HIGH);    // posar a 5V el pin 12
    
    delay(300);                // es queden leds 300ms apagats
                                 //3
    digitalWrite(led0, LOW);     // posar a 0V el pin 5
    digitalWrite(led1, HIGH);    // posar a 5V el pin 6
    digitalWrite(led2, HIGH);    // posar a 5V el pin 7
    digitalWrite(led3, LOW);     // posar a 0V el pin 8
    digitalWrite(led4, LOW);     // posar a 0V el pin 9
    digitalWrite(led5, HIGH);    // posar a 5V el pin 10
    digitalWrite(led6, HIGH);    // posar a 5V el pin 11
    digitalWrite(led7, LOW);     // posar a 0V el pin 12
  
    delay(300);                // es queden leds 300ms apagats
                                 //4
    digitalWrite(led0, LOW);     // posar a 0V el pin 5
    digitalWrite(led1, LOW);     // posar a 0V el pin 6
    digitalWrite(led2, HIGH);    // posar a 5V el pin 7
    digitalWrite(led3, HIGH);    // posar a 5V el pin 8
    digitalWrite(led4, HIGH);    // posar a 5V el pin 9
    digitalWrite(led5, HIGH);    // posar a 5V el pin 10
    digitalWrite(led6, LOW);     // posar a 0V el pin 11
    digitalWrite(led7, LOW);     // posar a 0V el pin 12
    
    delay(300);                // es queden leds 300ms apagats
                                 //5
    digitalWrite(led0, LOW);     // posar a 0V el pin 5
    digitalWrite(led1, LOW);     // posar a 0V el pin 6
    digitalWrite(led2, LOW);     // posar a 0V el pin 7
    digitalWrite(led3, HIGH);    // posar a 5V el pin 8
    digitalWrite(led4, HIGH);    // posar a 5V el pin 9
    digitalWrite(led5, LOW);     // posar a 0V el pin 10
    digitalWrite(led6, LOW);     // posar a 0V el pin 11
    digitalWrite(led7, LOW);     // posar a 0V el pin 12
    
    delay(300);                // es queden leds 300ms apagats
                                 //6
    digitalWrite(led0, LOW);     // posar a 0V el pin 5
    digitalWrite(led1, LOW);     // posar a 0V el pin 6
    digitalWrite(led2, LOW);     // posar a 0V el pin 7
    digitalWrite(led3, HIGH);    // posar a 5V el pin 8
    digitalWrite(led4, HIGH);    // posar a 5V el pin 9
    digitalWrite(led5, LOW);     // posar a 0V el pin 10
    digitalWrite(led6, LOW);     // posar a 0V el pin 11
    digitalWrite(led7, LOW);     // posar a 0V el pin 12
      
    delay(300);                // es queden leds 300ms apagats
                                 //7
    digitalWrite(led0, LOW);     // posar a 0V el pin 5
    digitalWrite(led1, LOW);     // posar a 0V el pin 6
    digitalWrite(led2, HIGH);    // posar a 5V el pin 7
    digitalWrite(led3, HIGH);    // posar a 5V el pin 8
    digitalWrite(led4, HIGH);    // posar a 5V el pin 9
    digitalWrite(led5, HIGH);    // posar a 5V el pin 10
    digitalWrite(led6, LOW);     // posar a 0V el pin 11
    digitalWrite(led7, LOW);     // posar a 0V el pin 12
    
    delay(300);                // es queden leds 300ms apagats
                                 //8
    digitalWrite(led0, LOW);     // posar a 0V el pin 5
    digitalWrite(led1, HIGH);    // posar a 5V el pin 6
    digitalWrite(led2, HIGH);    // posar a 5V el pin 7
    digitalWrite(led3, LOW);     // posar a 0V el pin 8
    digitalWrite(led4, LOW);     // posar a 0V el pin 9
    digitalWrite(led5, HIGH);    // posar a 5V el pin 10
    digitalWrite(led6, HIGH);    // posar a 5V el pin 11
    digitalWrite(led7, LOW);     // posar a 0V el pin 12
  
    delay(300);                // es queden leds 300ms apagats
                                 //9
    digitalWrite(led0, HIGH);    // posar a 5V el pin 5
    digitalWrite(led1, HIGH);    // posar a 5V el pin 6
    digitalWrite(led2, LOW);     // posar a 0V el pin 7
    digitalWrite(led3, LOW);     // posar a 0V el pin 8
    digitalWrite(led4, LOW);     // posar a 0V el pin 9
    digitalWrite(led5, LOW);     // posar a 0V el pin 10
    digitalWrite(led6, HIGH);    // posar a 5V el pin 11
    digitalWrite(led7, HIGH);    // posar a 5V el pin 12
  
    delay(300);                // es queden leds 300ms apagats
                                 //10
    digitalWrite(led0, HIGH);    // posar a 5V el pin 5
    digitalWrite(led1, LOW);     // posar a 0V el pin 6
    digitalWrite(led2, LOW);     // posar a 0V el pin 7
    digitalWrite(led3, LOW);     // posar a 0V el pin 8
    digitalWrite(led4, LOW);     // posar a 0V el pin 9
    digitalWrite(led5, LOW);     // posar a 0V el pin 10
    digitalWrite(led6, LOW);     // posar a 0V el pin 11
    digitalWrite(led7, HIGH);    // posar a 5V el pin 12
  
    delay(300);                // es queden leds 300ms apagats
                                 //11
    digitalWrite(led0, LOW);     // posar a 0V el pin 5
    digitalWrite(led1, LOW);     // posar a 0V el pin 6
    digitalWrite(led2, LOW);     // posar a 0V el pin 7
    digitalWrite(led3, LOW);     // posar a 0V el pin 8
    digitalWrite(led4, LOW);     // posar a 0V el pin 9
    digitalWrite(led5, LOW);     // posar a 0V el pin 10
    digitalWrite(led6, LOW);     // posar a 0V el pin 11
    digitalWrite(led7, LOW);     // posar a 0V el pin 12
  
    delay(300);                // es queden leds 300ms apagats
                                 //12
    digitalWrite(led0, LOW);     // posar a 0V el pin 5
    digitalWrite(led1, LOW);     // posar a 0V el pin 6
    digitalWrite(led2, LOW);     // posar a 0V el pin 7
    digitalWrite(led3, LOW);     // posar a 0V el pin 8
    digitalWrite(led4, LOW);     // posar a 0V el pin 9
    digitalWrite(led5, LOW);     // posar a 0V el pin 10
    digitalWrite(led6, LOW);     // posar a 0V el pin 11
    digitalWrite(led7, LOW);     // posar a 0V el pin 12
   
    delay(300);                // es queden leds 300ms apagats
  }
}

//************************* FUNCIONS ****************************
