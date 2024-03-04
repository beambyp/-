#define BLYNK_AUTH_TOKEN "MjUNI9yAcf3zeyqkwVQ66dcI8UrK0qh2"
#define BLYNK_PRINT Serial

#include <WiFi.h>
#include <WiFiClient.h>
#include <BlynkSimpleEsp32.h>

int buzzer = 23;
int button = 22;
int lastButtonState = HIGH;

// Your WiFi credentials.
char ssid[] = "micpaka";
char pass[] = "12345678";

// This function is called every time the Virtual Pin 0 state changes
BLYNK_WRITE(V1)
{
  if (param.asInt() == 1) {
    digitalWrite(buzzer, HIGH);
  }
  else {}
}

BLYNK_WRITE(V2)
{
  if (param.asInt() == 1) {
    digitalWrite(buzzer, HIGH);
  }
  else {}
}

BLYNK_WRITE(V3)
{
  if (param.asInt() == 1) {
    digitalWrite(buzzer, HIGH);
  }
  else {}
}

BLYNK_WRITE(V4)
{
  if (param.asInt() == 1) {
    digitalWrite(buzzer, HIGH);
  }
  else {}
}

BLYNK_WRITE(V5)
{
  if (param.asInt() == 1) {
    digitalWrite(buzzer, HIGH);
  }
  else {}
}

BLYNK_WRITE(V6)
{
  if (param.asInt() == 1) {
    digitalWrite(buzzer, HIGH);
  }
  else {}
}

BLYNK_WRITE(V7)
{
  if (param.asInt() == 1) {
    digitalWrite(buzzer, HIGH);
  }
  else {}
}

BLYNK_WRITE(V8)
{
  if (param.asInt() == 1) {
    digitalWrite(buzzer, HIGH);
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
}

void setup() {
  Serial.begin(9600);
  Blynk.begin(BLYNK_AUTH_TOKEN, ssid, pass, "blynk.iot-cm.com", 8080); // Blynk
  pinMode(buzzer, OUTPUT);
  pinMode(button,INPUT_PULLUP);
}

void loop()  //main program loop
{
  Blynk.run();
  if (digitalRead(button) == LOW) {
    digitalWrite(buzzer, LOW);
  }
  Serial.println(digitalRead(buzzer));
}