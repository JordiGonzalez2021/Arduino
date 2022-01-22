/****************************************************************
**                                                             **
**                            TÍTOL:                           **
**                  Nom represenatiu del programa              **
**                                                             **
** NOM: Nom de l'Alumne                       DATA: xx/xx/20xx **
****************************************************************/
//************************** INCLUDE ****************************
#include "IRremote.h"
int receiver = 11; // Signal Pin of IR receiver to Arduino Digital Pin 11
int state = 1, previousState = 1;
int currentButtonState;
int PlayPause;

/*-----( Declare objects )-----*/
IRrecv irrecv(receiver);     // create instance of 'irrecv'
decode_results results;      // create instance of 'decode_results'

/*-----( Function )-----*/
void translateIR() // takes action based on IR code received

// describing Remote IR codes 

{
  switch(results.value)
  {
  case 0xFFA25D: Serial.println("POWER"); 
  currentButtonState = !currentButtonState;
  state = 1; 
  PlayPause = 0; break;
  case 0xFFE21D: Serial.println("FUNC/STOP"); break;
  case 0xFF629D: Serial.println("VOL+"); break;
  case 0xFF22DD: Serial.println("FAST BACK"); break;
  case 0xFF02FD: Serial.println("PLAY/PAUSE"); 
  PlayPause = !PlayPause; break;
  case 0xFFC23D: Serial.println("FAST FORWARD"); break;
  case 0xFFE01F: Serial.println("DOWN");    
  state--; break;
  case 0xFFA857: Serial.println("VOL-"); break;
  case 0xFF906F: Serial.println("UP");    
  state++; break;
  case 0xFF9867: Serial.println("EQ"); break;
  case 0xFFB04F: Serial.println("ST/REPT"); break;
  case 0xFF6897: Serial.println("0");
  state = 2; break;
  case 0xFF30CF: Serial.println("1");    
  state = 3; break;
  case 0xFF18E7: Serial.println("2");    
  state = 4; break;
  case 0xFF7A85: Serial.println("3");    
  state = 5; break;
  case 0xFF10EF: Serial.println("4");    
  state = 6; break;
  case 0xFF38C7: Serial.println("5");    
  state = 7; break;
  case 0xFF5AA5: Serial.println("6");    
  state = 8; break;
  case 0xFF42BD: Serial.println("7");    
  state = 9; break;
  case 0xFF4AB5: Serial.println("8");    
  state = 10; break;
  case 0xFF52AD: Serial.println("9");    
  state = 11; break;
  case 0xFFFFFFFF: Serial.println(" REPEAT"); break;  

  default: 
    Serial.println(" other button   ");

  }// End Case

  delay(200); // Do not get immediate repeat

} //END translateIR

//************************* VARIABLES ***************************
const int segA = 8;
const int segB = 7;
const int segC = 5;
const int segD = 3;
const int segE = 2;
const int segF = 10;
const int segG = 12;
const int segDP = 6;

//*************************** SETUP *****************************
void setup()
{
  Serial.begin(9600);
  Serial.println("IR Receiver Button Decode"); 
  irrecv.enableIRIn(); // Start the receiver
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
  if (irrecv.decode(&results)) // have we received an IR signal?
  {
    translateIR(); 
    irrecv.resume(); // receive the next value
  }
  if(state>11 || state<1)
  {
    state = previousState;
    Serial.print("State = ");    //Ensenya el valor de State sempre i quant estigui als limits establerts
    Serial.println(state);
  }
  if(state != previousState)
  {
    Serial.print("State = ");    //Ensenya el valor de State sempre i quant sigui diferent a l'estat anterior
    Serial.println(state);
  }
  if(results.value != 0xFF02FD)
  {
    PlayPause = 0;
  }
  if(PlayPause == 1)
  {
    state = random(2,11);
    Serial.print("State = ");    //Ensenya el valor de State sempre que es generi un nombre nou aleatòriament
    Serial.println(state);
    delay(1000);
  }
  if(currentButtonState == 1)
  {
    if(results.value == 0xFFE01F && state<2)
    {
      state = previousState;
    }
    switch(state)
    { 
      case 1:
      digitalWrite(segG, LOW);    //Comfirmació d'engegada
      digitalWrite(segA, LOW);
      digitalWrite(segB, LOW);
      digitalWrite(segC, LOW);
      digitalWrite(segD, LOW);
      digitalWrite(segE, LOW);
      digitalWrite(segF, LOW);
      digitalWrite(segDP, HIGH);
      break;
      
      case 2:
      digitalWrite(segG, LOW);    //0
      digitalWrite(segA, HIGH);
      digitalWrite(segB, HIGH);
      digitalWrite(segC, HIGH);
      digitalWrite(segD, HIGH);
      digitalWrite(segE, HIGH);
      digitalWrite(segF, HIGH);
      digitalWrite(segDP, LOW);
      break;
  
      case 3:
      digitalWrite(segA, LOW);    //1
      digitalWrite(segB, HIGH);
      digitalWrite(segC, HIGH);
      digitalWrite(segD, LOW);
      digitalWrite(segE, LOW);
      digitalWrite(segF, LOW);
      digitalWrite(segG, LOW);
      digitalWrite(segDP, LOW);
      break;
  
      case 4:
      digitalWrite(segA, HIGH);    //2
      digitalWrite(segB, HIGH);
      digitalWrite(segC, LOW);
      digitalWrite(segD, HIGH);
      digitalWrite(segE, HIGH);
      digitalWrite(segF, LOW);
      digitalWrite(segG, HIGH);
      digitalWrite(segDP, LOW);
      break;
      
      case 5:
      digitalWrite(segA, HIGH);    //3
      digitalWrite(segB, HIGH);
      digitalWrite(segC, HIGH);
      digitalWrite(segD, HIGH);
      digitalWrite(segE, LOW);
      digitalWrite(segF, LOW);
      digitalWrite(segG, HIGH);
      digitalWrite(segDP, LOW);
      break;
      
      case 6:
      digitalWrite(segA, LOW);    //4
      digitalWrite(segB, HIGH);
      digitalWrite(segC, HIGH);
      digitalWrite(segD, LOW);
      digitalWrite(segE, LOW);
      digitalWrite(segF, HIGH);
      digitalWrite(segG, HIGH);
      digitalWrite(segDP, LOW);
      break;
  
      case 7:
      digitalWrite(segA, HIGH);    //5
      digitalWrite(segB, LOW);
      digitalWrite(segC, HIGH);
      digitalWrite(segD, HIGH);
      digitalWrite(segE, LOW);
      digitalWrite(segF, HIGH);
      digitalWrite(segG, HIGH);
      digitalWrite(segDP, LOW);
      break;
  
      case 8:
      digitalWrite(segA, HIGH);    //6
      digitalWrite(segB, LOW);
      digitalWrite(segC, HIGH);
      digitalWrite(segD, HIGH);
      digitalWrite(segE, HIGH);
      digitalWrite(segF, HIGH);
      digitalWrite(segG, HIGH);
      digitalWrite(segDP, LOW);
      break;
     
      case 9:
      digitalWrite(segA, HIGH);    //7
      digitalWrite(segB, HIGH);
      digitalWrite(segC, HIGH);
      digitalWrite(segD, LOW);
      digitalWrite(segE, LOW);
      digitalWrite(segF, LOW);
      digitalWrite(segG, LOW);
      digitalWrite(segDP, LOW);
      break;
  
      case 10:
      digitalWrite(segA, HIGH);    //8
      digitalWrite(segB, HIGH);
      digitalWrite(segC, HIGH);
      digitalWrite(segD, HIGH);
      digitalWrite(segE, HIGH);
      digitalWrite(segF, HIGH);
      digitalWrite(segG, HIGH);
      digitalWrite(segDP, LOW);
      break;
      
      case 11:
      digitalWrite(segA, HIGH);    //9
      digitalWrite(segB, HIGH);
      digitalWrite(segC, HIGH);
      digitalWrite(segD, HIGH);
      digitalWrite(segE, LOW);
      digitalWrite(segF, HIGH);
      digitalWrite(segG, HIGH);
      digitalWrite(segDP, LOW);
      break;
    }
  }
  else
  {
    digitalWrite(segG, LOW);    //Parat
    digitalWrite(segA, LOW);
    digitalWrite(segB, LOW);
    digitalWrite(segC, LOW);
    digitalWrite(segD, LOW);
    digitalWrite(segE, LOW);
    digitalWrite(segF, LOW);
    digitalWrite(segDP, LOW);
  }
  previousState = state;
}

//************************* FUNCIONS ****************************
