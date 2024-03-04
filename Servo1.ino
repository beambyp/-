//ServoBeam
#define BLYNK_AUTH_TOKEN "IBWlYqWDnJaAtTayXbvqn79G27F6jK01"
#define BLYMK_AUTH_TOKEN_Buzzer "MjUNI9yAcf3zeyqkwVQ66dcI8UrK0qh2"
#define BLYNK_PRINT Serial

#include <WiFi.h>
#include <WiFiClient.h>
#include <BlynkSimpleEsp32.h>
#include <ESP32Servo.h>

// Your WiFi credentials.
char ssid[] = "micpaka";
char pass[] = "12345678";

// create servo object to control a servo
Servo servo;
WidgetBridge bridge(V0);

// This function is called every time the Virtual Pin 0 state changes
BLYNK_WRITE(V0)
{
  if (param.asInt() == 1) {
    servo.write(45);
    bridge.virtualWrite(V1, 1);
  }
  else {}
}

BLYNK_WRITE(V1)
{
  if (param.asInt() == 1) {
    servo.write(90);
    bridge.virtualWrite(V2,1);
  }
  else {}
}

BLYNK_WRITE(V2)
{
  if (param.asInt() == 1) {
    servo.write(135);
    bridge.virtualWrite(V3,1);
  }
  else {}
}

BLYNK_WRITE(V3)
{
  if (param.asInt() == 1) {
    servo.write(180);
    bridge.virtualWrite(V4,1);
    delay(2000);
    servo.write(0);
  }
  else {}
}

// This function is called every time the device is connected to the Blynk.Cloud
BLYNK_CONNECTED()
{
    // Change Web Link Button message to "Congratulations!"
    Blynk.setProperty(V3, "offImageUrl", "https://static-image.nyc3.cdn.digitaloceanspaces.com/general/fte/congratulations.png");
    Blynk.setProperty(V3, "onImageUrl", "https://static-image.nyc3.cdn.digitaloceanspaces.com/general/fte/congratulations_pressed.png");
    Blynk.setProperty(V3, "url", "https://docs.blynk.io/en/getting-started/what-do-i-need-to-blynk/how-quickstart-device-was-made");
    bridge.setAuthToken(BLYMK_AUTH_TOKEN_Buzzer);
    digitalWrite(2,HIGH);

}

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  Serial.print("Start");
  Blynk.begin(BLYNK_AUTH_TOKEN, ssid, pass, "blynk.iot-cm.com", 8080); // Blynk
  servo.attach(21);   // Servo Pin
  servo.write(0);    // Servo Initial Position
  pinMode(2,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  Blynk.run();
}