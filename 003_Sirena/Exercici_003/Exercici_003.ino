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
  
}

//*************************** LOOP ******************************
void loop() 
{
  tone(xiulet, 200);
  delay(500);
  tone(xiulet, 400);
  delay(500);
  tone(xiulet, 600);
  delay(500);
  tone(xiulet, 800);
  delay(500);
  noTone(xiulet);
  delay(1000);
}
//************************* FUNCIONS ****************************