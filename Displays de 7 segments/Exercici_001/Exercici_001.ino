/****************************************************************
**                                                             **
**                            TÍTOL:                           **
**                  Nom represenatiu del programa              **
**                                                             **
** NOM: Nom de l'Alumne                       DATA: xx/xx/20xx **
****************************************************************/
//************************** INCLUDE ****************************


//************************* VARIABLES ***************************

const int segA = 8;
const int segB = 7;
const int segC = 5;
const int segD = 3;
const int segE = 2;
const int segF = 10;
const int segG = 11;
const int segDP = 6;

//*************************** SETUP *****************************

void setup()
{
  pinMode(segA, OUTPUT);
  pinMode(segB, OUTPUT);
  pinMode(segC, OUTPUT);
  pinMode(segD, OUTPUT);
  pinMode(segE, OUTPUT);
  pinMode(segF, OUTPUT);
  pinMode(segG, OUTPUT);
  pinMode(segDP, OUTPUT);
  
  for(int i = 0; i <= 2; i++)
  {
    digitalWrite(segB, HIGH);
    digitalWrite(segC, HIGH);
    digitalWrite(segD, HIGH);
    digitalWrite(segE, HIGH);
    delay(500);
    digitalWrite(segA, HIGH);
    digitalWrite(segF, HIGH);
    delay(500);
    digitalWrite(segA, LOW);
    digitalWrite(segB, LOW);
    digitalWrite(segC, LOW);
    digitalWrite(segD, LOW);
    digitalWrite(segF, LOW);
    digitalWrite(segE, HIGH);
    digitalWrite(segG, HIGH);
    delay(500);
    digitalWrite(segB, HIGH);
    digitalWrite(segC, HIGH);
    digitalWrite(segD, HIGH);
    digitalWrite(segE, HIGH);
    delay(500);
    digitalWrite(segB, LOW);
    digitalWrite(segC, LOW);
    digitalWrite(segD, LOW);
    digitalWrite(segG, LOW);
    digitalWrite(segF, HIGH);
    delay(500);
    digitalWrite(segE, LOW);
    digitalWrite(segF, LOW);
  }
}

//*************************** LOOP ******************************
void loop() {
  // put your main code here, to run repeatedly:

}

//************************* FUNCIONS ****************************
