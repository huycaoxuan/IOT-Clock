#include <WiFiManager.h>
#include "secrets.h"

WiFiManager wm;
bool res;

void setup() {
    WiFi.mode(WIFI_STA);
    Serial.begin(115200);
    Serial.setDebugOutput(true);

    // reset settings - wipe stored credentials for testing
    // these are stored by the esp library
    //wm.resetSettings();
    res = wm.autoConnect("AutoConnectAP","password"); // password protected ap
    if(!res) {
        Serial.println("Failed to connect");
        // ESP.restart();
    } 
    else {
        //if you get here you have connected to the WiFi    
        Serial.println("connected...yeey :)");
    }
}

void loop() { 
    if (WiFi.status() == WL_CONNECTED){
}
