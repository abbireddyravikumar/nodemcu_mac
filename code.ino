# nodemcu_mac
code to find mac address of NodeMcu
#include <ESP8266WiFi.h>
 void setup(){ 
   Serial.begin(115200);
   delay(500); 
   Serial.println("Electronics For Engineer");
   }
void loop(){ 
  Serial.print("Your NodeMcu MAC ID: ");
   Serial.println(WiFi.macAddress());
   delay(4000);
}
