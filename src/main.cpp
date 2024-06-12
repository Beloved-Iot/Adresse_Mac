#include "WiFi.h"  /*included WiFi library*/
 
void setup(){
  delay(1000);
  Serial.begin(115200); /*defined baud rate*/
 delay(2000);
  WiFi.mode(WIFI_MODE_STA); /*configured ESP32 WiFi in Station Mode*/
  Serial.print("ESP32 Station Interface MAC Address: ");
  Serial.println(WiFi.macAddress());  /*Prints ESP32 MAC address in Station Mode*/
}
 
void loop(){   }