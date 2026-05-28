#include <WiFi.h>

#include "config.h"

void connectWiFi()
{
    WiFi.begin(
        WIFI_SSID,
        WIFI_PASSWORD
    );

    while(WiFi.status() != WL_CONNECTED)
    {
        delay(1000);

        Serial.println("Connecting WiFi...");
    }

    Serial.println("WiFi Connected");
}