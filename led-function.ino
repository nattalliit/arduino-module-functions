#define LED_PIN    9
#define SENSOR_PIN A0
#define BRIGHTNESS_THRESHOLD 300

void setup() {
  pinMode(LED_PIN, OUTPUT);
}

void loop() {
  int sensorValue = analogRead(SENSOR_PIN);
  int state = (sensorValue <= BRIGHTNESS_THRESHOLD) ? HIGH : LOW;
  // delay(1000); adds a delay of 1 second for the turn on
  digitalWrite(LED_PIN, state);
}