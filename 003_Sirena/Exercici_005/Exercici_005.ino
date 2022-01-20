/****************************************************************
**                                                             **
**                            TÍTOL:                           **
**                  Nom represenatiu del programa              **
**                                                             **
** NOM: Nom de l'Alumne                       DATA: xx/xx/20xx **
****************************************************************/
//************************** INCLUDE ****************************


//************************* VARIABLES ***************************
const byte xiulet = 9;
const byte pot0 = A0;
const byte pot1 = A1;
int valPot0, valPot1;

//*************************** SETUP *****************************

void setup() 
{
  pinMode(xiulet, OUTPUT);
  pinMode(pot0, INPUT);
  pinMode(pot1, INPUT);
  Serial.begin(9600);
}

//*************************** LOOP ******************************
void loop() 
{
  valPot0 = analogRead(pot0);
  valPot1 = analogRead(pot1);
  
  Serial.print("valPot0 = ");
  Serial.println(valPot0);
  Serial.print("valPot1 = ");
  Serial.println(valPot1);
  
  tone(xiulet, 1000, analogRead(pot0));
  delay(analogRead(pot1));
}

//************************* FUNCIONS ****************************
