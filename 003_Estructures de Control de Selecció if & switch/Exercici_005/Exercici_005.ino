/****************************************************************
**                                                             **
**                            TÍTOL:                           **
**                  Nom represenatiu del programa              **
**                                                             **
** NOM: Nom de l'Alumne                       DATA: xx/xx/20xx **
****************************************************************/
//************************** INCLUDE ****************************


//************************* VARIABLES ***************************
float Indicador = 3.5;

//*************************** SETUP *****************************

void setup() 
{
  Serial.begin (9600); // put your setup code here, to run once:
  if (Indicador < 3.5)
  {
    Serial.print ("A");
  }
  else if (Indicador < 6.5)
  {
    Serial.print ("B");
  }
  else if (Indicador < 11.1)
  {
    Serial.print ("C");
  }
  else if (Indicador < 17.7)
  {
    Serial.print ("D");
  }
  else if (Indicador < 38.2)
  {
    Serial.print ("E");
  }
  else if (Indicador < 43.2)
  {
    Serial.print ("F");
  }
  else
  {
    Serial.print ("G");
  }
}

//*************************** LOOP ******************************
void loop() {
  // put your main code here, to run repeatedly:

}

//************************* FUNCIONS ****************************
