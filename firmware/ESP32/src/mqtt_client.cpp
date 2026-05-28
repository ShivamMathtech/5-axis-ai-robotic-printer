#include <WiFi.h>
#include <PubSubClient.h>

#include "config.h"

WiFiClient espClient;

PubSubClient client(espClient);

void connectMQTT()
{
    client.setServer(
        MQTT_SERVER,
        MQTT_PORT
    );

    while(!client.connected())
    {
        client.connect("ESP32_5AXIS");

        delay(1000);
    }

    Serial.println("MQTT Connected");
}

void sendTelemetry()
{
    client.publish(
        "printer/status",
        "Running"
    );
}