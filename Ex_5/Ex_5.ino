/**********************************************************************************
**                                                                               **
**                          Control Structures                                   **
**                                                                               **
**                                                                               **
**********************************************************************************/

//********** Includes *************************************************************

//********** Variables ************************************************************
float KgCO2m2 = 11.1;

//********** Setup ****************************************************************
void setup()              // run once, when the sketch starts
{
  Serial.begin(9600);     // set up Serial library at 9600 bps

  if(KgCO2m2<3.5)
  {
    Serial.print("Qualificació energetica A");
  } 
  else if (KgCO2m2<6.5 && KgCO2m2>=3.5)
  {
    Serial.print("Qualificació energetica B");
  }
  else if (KgCO2m2<11.1 && KgCO2m2>=6.5)
  {
    Serial.print ("Qualificació energetica C");
  }
  else if (KgCO2m2<17.7 && KgCO2m2>=11.1)
  {
    Serial.print ("Qualificació energetica D");
  }
  else if (KgCO2m2<38.2 && KgCO2m2>=17.7)
  {
    Serial.print ("Qualificació energetica E");
  }
  else if (KgCO2m2<43.2 && KgCO2m2>=38.2)
  {
    Serial.print ("Qualificació energetica F");
  }
  else
  {
    Serial.print ("Qualificació energetica G");
  }
}

//********** Loop *****************************************************************
void loop()   // we need this to be here even though its empty
{
}

//********** Funcions *************************************************************
