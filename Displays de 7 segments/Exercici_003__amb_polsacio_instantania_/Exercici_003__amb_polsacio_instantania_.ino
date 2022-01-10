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
const int buttonPin = 22;
int currentbuttonState = 0;
int previousbuttonState = 0;
int state = 0;
unsigned long previousTime, currentTime;
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
  pinMode(buttonPin, INPUT);
  previousTime = millis();
}

//*************************** LOOP ******************************
void loop() 
{
  delay(50);
  currentTime = millis();
  currentbuttonState = digitalRead(buttonPin);
  if(currentbuttonState == 0)
  {
    previousbuttonState = !previousbuttonState;
    delay(100);
  }
  if(previousbuttonState == 1)
  {
    if(currentTime-previousTime > 500)
    {
      state++;
      if(state == 10)
      {
        state = 0;
      }
      previousTime = currentTime;
    }
  }
  switch(state)
  {
    case 0:
    digitalWrite(segG, LOW);    //0
    digitalWrite(segA, HIGH);
    digitalWrite(segB, HIGH);
    digitalWrite(segC, HIGH);
    digitalWrite(segD, HIGH);
    digitalWrite(segE, HIGH);
    digitalWrite(segF, HIGH);
    break;
    
    case 1:
    digitalWrite(segA, LOW);    //1
    digitalWrite(segD, LOW);
    digitalWrite(segE, LOW);
    digitalWrite(segF, LOW);
    break;
    
    case 2:
    digitalWrite(segC, LOW);    //2
    digitalWrite(segA, HIGH);
    digitalWrite(segG, HIGH);
    digitalWrite(segE, HIGH);
    digitalWrite(segD, HIGH);
    break;
    
    case 3:
    digitalWrite(segE, LOW);    //3
    digitalWrite(segC, HIGH);
    break;
    
    case 4:
    digitalWrite(segA, LOW);    //4
    digitalWrite(segF, HIGH);
    digitalWrite(segD, LOW);
    break;

    case 5:
    digitalWrite(segB, LOW);    //5
    digitalWrite(segA, HIGH);
    digitalWrite(segD, HIGH);
    break;

    case 6:
    digitalWrite(segA, LOW);    //6
    digitalWrite(segE, HIGH);
    break;
   
    case 7:
    digitalWrite(segF, LOW);    //7
    digitalWrite(segE, LOW);
    digitalWrite(segG, LOW);
    digitalWrite(segD, LOW);
    digitalWrite(segA, HIGH);
    digitalWrite(segB, HIGH);
    break;

    case 8:
    digitalWrite(segF, HIGH);   //8
    digitalWrite(segG, HIGH);
    digitalWrite(segE, HIGH);
    digitalWrite(segD, HIGH);
    break;
    
    case 9:
    digitalWrite(segE, LOW);    //9
    digitalWrite(segD, LOW);
    break;
  }
}

//************************* FUNCIONS ****************************
