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

//*************************** SETUP *****************************

void setup() 
{
  pinMode(xiulet, OUTPUT);
}

//*************************** LOOP ******************************
void loop() 
{
  tone(xiulet, 1000);
  delay(20);
  tone(xiulet, 1250);
  delay(20);
}

//************************* FUNCIONS ****************************
