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
int a = 0;              // crear una variable per fer el conteig de vegades que s'ha executat el programa sense necessitar l'estructura de for

//*************************** SETUP *****************************

void setup() 
{
  pinMode(led0, OUTPUT);
}

//*************************** LOOP ******************************
void loop() 
{
  if (a<30)
  {
    digitalWrite(led0, HIGH);
    delay(500);
    digitalWrite(led0, LOW);
    delay(500);
    a++;
  }
  else 
  {
    digitalWrite(led0, LOW);
  }
}

//************************* FUNCIONS ****************************
