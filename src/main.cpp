/*
  CODE FOR TERMINATOR3001

  All hands are connected to an ArduinoUno.And each Uno is connected to the ArduinoMega with this code
  Each hand also has a corresponding Serial number:
  Serial1 - First Arm
  Serial2 - Second Armm
  Serial3 - Third Arm 
*/

#include <Arduino.h>

// startAndWait makes it so all three hands can move independent of each other
// This also allows each hand to be better coordinated and timed with delay which has to be placed in between startAndWait
void startAndWait()
{
  Serial1.println("s");
  Serial2.println("s");
  Serial3.println("s");
  
  while (Serial1.readStringUntil('\n')[0] != 'e')
  {
    break;
  }
  while (Serial2.readStringUntil('\n')[0] != 'e')
  {
    break;
  }
  while (Serial3.readStringUntil('\n')[0] != 'e')
  {
    break;
  }
}

void setup()
{
  // Adjusting Arm Speed
  Serial.begin(115200);
  Serial1.begin(115200);
  Serial2.begin(115200);
  Serial3.begin(115200);
}

void loop()
{ 
  // Starting Position for Third Arm
  startAndWait();
  Serial3.println("m1=075");
  Serial3.println("m2=110");
  Serial3.println("m3=020");
  Serial3.println("m4=090");
  Serial3.println("m6=010");
  startAndWait();

  // First Arm Picking up the Sponge.And The Second Getting into Position
  Serial1.println("m1=165");
  Serial2.println("m1=010");
  startAndWait();
  Serial1.println("m2=080");
  Serial2.println("m2=120");
  startAndWait();
  Serial1.println("m3=030");
  Serial2.println("m3=000");
  startAndWait();
  Serial1.println("m4=000");
  Serial2.println("m4=075");
  startAndWait();

  // First Arm Picking Up the Sponge
  Serial1.println("m6=010");
  startAndWait();
  Serial1.println("m6=073");
  startAndWait();

  // Both hands getting into position
  Serial1.println("m3=080");
  Serial2.println("m6=010");
  startAndWait();
  Serial1.println("m4=045");
  Serial2.println("m1=020");
  delay(2000);
  startAndWait();
  Serial1.println("m1=045");
  startAndWait();
  Serial1.println("m4=020");
  Serial2.println("m3=020");
  startAndWait();

  // First Arm Passing the Sponge to the Second
  Serial1.println("m6=073");
  startAndWait();
  Serial2.println("m6=010");
  delay(2000);
  startAndWait();
  Serial2.println("m6=073");
  startAndWait();
  delay(2000);
  Serial1.println("m6=010");
  Serial2.println("m3=050");
  startAndWait();

  // Passing to Third Arm Start
  Serial2.println("m1=130");
  startAndWait();
  delay(4000);
  startAndWait();
  Serial3.println("m3=010");
  startAndWait();
  Serial2.println("m3=020");
  startAndWait();
  Serial3.println("m6=073");
  startAndWait();
  delay(1000);
  Serial2.println("m6=010");
  startAndWait();
  Serial2.println("m3=040");

  // Third Arm Picking Up the Sponge
  startAndWait();
  Serial3.println("m3=060");
  delay(2000);
  startAndWait();
  Serial3.println("m1=075");
  startAndWait();
  Serial3.println("m6=073");
  startAndWait();
  Serial3.println("m1=150");
  startAndWait();

  // Third Arm Setting the Sponge Down
  Serial3.println("m2=090");
  Serial3.println("m3=020");
  Serial3.println("m4=090");
  startAndWait();
  Serial3.println("m4=180");
  startAndWait();
  Serial3.println("m6=010");
  startAndWait();
  Serial3.println("m4=090");
  startAndWait();
}
