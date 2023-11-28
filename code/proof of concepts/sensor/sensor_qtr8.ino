#include <QTRSensors.h>

// Define de digitale pinnen waaraan de QTR-8A-sensoren zijn aangesloten
#define SENSOR_PIN_1 2
#define SENSOR_PIN_2 3
#define SENSOR_PIN_3 4
#define SENSOR_PIN_4 5

// Maak een object van het type QTRSensors
QTRSensors qtr;

void setup() {
  // Configureer de sensorpinnen
  unsigned int sensorValues[4];
  qtr.setTypeRC();
  qtr.setSensorPins((const uint8_t[]){SENSOR_PIN_1, SENSOR_PIN_2, SENSOR_PIN_3, SENSOR_PIN_4}, 4);

  // Zet emitters uit voor kalibratie
  pinMode(13, OUTPUT);  // Je kunt een willekeurige pin gebruiken
  digitalWrite(13, LOW);

  // Kalibreer de sensoren (voer deze kalibratieroutine uit wanneer de robot op de lijn staat)
  delay(500);
  for (int i = 0; i < 250; i++) {
    qtr.calibrate();  // Kalibreer met de emitters uitgeschakeld
    delay(20);
  }
  digitalWrite(13, HIGH);  // Zet de emitter terug aan
  delay(500);
}

void loop() {
  // Lees sensorwaarden
  unsigned int sensorValues[4];
  qtr.read(sensorValues);

  // Druk de sensorwaarden af naar de Serial Monitor
  for (int i = 0; i < 4; i++) {
    Serial.print(sensorValues[i]);
    Serial.print('\t');
  }
  Serial.println();

  // Voeg hier je eigen logica toe op basis van de sensorwaarden

  delay(100);  // Vertraging voor stabiliteit
}
