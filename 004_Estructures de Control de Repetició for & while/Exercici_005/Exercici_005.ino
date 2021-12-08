/****************************************************************
**                                                             **
**                            TÍTOL:                           **
**                  Nom represenatiu del programa              **
**                                                             **
** NOM: Nom de l'Alumne                       DATA: xx/xx/20xx **
****************************************************************/
//************************** INCLUDE ****************************


//************************* VARIABLES ***************************
int taula = 2;

//*************************** SETUP *****************************

void setup() 
{                     // put your setup code here, to run once:
  Serial.begin (9600);

  for(int taula=2; taula <=10; taula++)
  {
    Serial.print("Taula de multiplicar del ");
    Serial.println(taula);

    for (int i=0; i <= 10; i++)
    {
      Serial.print(taula);
      Serial.print(" x ");
      Serial.print(i);
      Serial.print(" = ");
      Serial.println(taula*i);
    }
    Serial.println();
  }
}

//*************************** LOOP ******************************
void loop() {
  // put your main code here, to run repeatedly:

}

//************************* FUNCIONS ****************************
