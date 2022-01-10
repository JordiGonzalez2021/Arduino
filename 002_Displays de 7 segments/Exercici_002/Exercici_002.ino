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
}

//*************************** LOOP ******************************
void loop() 
{
  digitalWrite(segG, LOW);    //0
  digitalWrite(segA, HIGH);
  digitalWrite(segB, HIGH);
  digitalWrite(segC, HIGH);
  digitalWrite(segD, HIGH);
  digitalWrite(segE, HIGH);
  digitalWrite(segF, HIGH);
  
  delay(500);

  digitalWrite(segA, LOW);    //1
  digitalWrite(segD, LOW);
  digitalWrite(segE, LOW);
  digitalWrite(segF, LOW);

  delay(500);

  digitalWrite(segC, LOW);    //2
  digitalWrite(segA, HIGH);
  digitalWrite(segG, HIGH);
  digitalWrite(segE, HIGH);
  digitalWrite(segD, HIGH);

  delay(500);

  digitalWrite(segE, LOW);    //3
  digitalWrite(segC, HIGH);

  delay(500);

  digitalWrite(segA, LOW);    //4
  digitalWrite(segF, HIGH);
  digitalWrite(segD, LOW);

  delay(500);

  digitalWrite(segB, LOW);    //5
  digitalWrite(segA, HIGH);
  digitalWrite(segD, HIGH);

  delay(500);

  digitalWrite(segA, LOW);    //6
  digitalWrite(segE, HIGH);

  delay(500);

  digitalWrite(segF, LOW);    //7
  digitalWrite(segE, LOW);
  digitalWrite(segG, LOW);
  digitalWrite(segD, LOW);
  digitalWrite(segA, HIGH);
  digitalWrite(segB, HIGH);

  delay(500);

  digitalWrite(segF, HIGH);   //8
  digitalWrite(segG, HIGH);
  digitalWrite(segE, HIGH);
  digitalWrite(segD, HIGH);

  delay(500);

  digitalWrite(segE, LOW);    //9
  digitalWrite(segD, LOW);

  delay(500);
}

//************************* FUNCIONS ****************************
