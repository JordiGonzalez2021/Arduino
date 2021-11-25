/********************************************************************************
**                                                                              **
**                              Hello World                                     **
**                                                                              **
**                                                                              **
*********************************************************************************/

//********* Includes *************************************************************

//********** Variables ***********************************************************

//********** Setup ***************************************************************
void setup()                // run once, when the sketch starts
{
  Serial.begin(9600);
  Serial.println("Escull el numero de la operacio que vols realitzar?");  
  Serial.println("  1.Comprovar numero de targeta de credit");
  Serial.println("  2.Comprovar numero de compte bancari");
  Serial.println("  3.Buscar un digit perdut de targeta de credit");
}

//********* Loop *****************************************************************
void loop()                 // run over and over again
{
 
}

//********* Funcions *************************************************************
