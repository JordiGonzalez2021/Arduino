/****************************************************************
**                                                             **
**                            TÍTOL:                           **
**                  Nom represenatiu del programa              **
**                                                             **
** NOM: Nom de l'Alumne                       DATA: xx/xx/20xx **
****************************************************************/
//************************** INCLUDE ****************************


//************************* VARIABLES ***************************
const byte led0 = 5;    // donar nom al led connectant al pin nº5

//*************************** SETUP *****************************

void setup() 
{
  pinMode(led0, OUTPUT);
  
  for(int i = 0; i < 30; i++)
  {
    digitalWrite(led0, HIGH);
    delay(500);
    digitalWrite(led0, LOW);
    delay(500);
  }
}

//*************************** LOOP ******************************
void loop() 
{
  // put your main code here, to run repeatedly:
}

//************************* FUNCIONS ****************************
