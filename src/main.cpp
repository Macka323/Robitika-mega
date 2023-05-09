#include <Arduino.h>

void setup()
{
  Serial.begin(115200);
  Serial1.begin(115200);
  Serial2.begin(115200);
  Serial3.begin(115200);
}

void startAndWait()
{
  Serial1.println("s");
  while (Serial1.readStringUntil('\n')[0] != 'e')
  {
    break;
  }

  Serial2.println("s");
  while (Serial2.readStringUntil('\n')[0] != 'e')
  {
    break;
  }

  Serial3.println("s");
  while (Serial3.readStringUntil('\n')[0] != 'e')
  {
    break;
  }
}

void loop()
{
  // startAndWait();
  // Serial2.println("m1=010");
  // Serial2.println("m2=135");
  // Serial2.println("m3=000");
  // Serial2.println("m4=125");
  // startAndWait();
  // delay(1000);



   delay(4000);


  // Code For Robot Arm 1
  Serial1.println("m1=180");
   Serial2.println("m1=010");
  Serial1.println("m2=080");
   Serial2.println("m2=120");
  Serial1.println("m3=030");
   Serial2.println("m3=000");
  Serial1.println("m4=000");
  Serial2.println("m4=125");
  Serial1.println("m6=010");
  Serial.println("tuka odi");
  startAndWait();
  Serial1.println("m3=010");
  
  Serial.println("tuka dali odi");
  startAndWait();
  Serial1.println("m6=073");
   Serial2.println("m6=073");
  startAndWait();
  Serial1.println("m1=055");
   Serial2.println("m6=010");
  Serial1.println("m3=050");
   Serial2.println("m6=073");
  Serial1.println("m4=045");
    Serial2.println("m1=140");
  startAndWait();
  Serial1.println("m6=073");
    Serial2.println("m6=010");
      Serial2.println("m6=073");
  startAndWait();
  delay(2000);
  Serial1.println("m6=010");
  startAndWait();

 
            



  // Code For Robot Arm 2
  
  startAndWait();
 
 
}
