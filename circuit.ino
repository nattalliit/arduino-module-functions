// This sketch turns on the built-in LED of the arduino when a toggle button is pressed
int togglePin1 = 2;
int togglePin2 = 4;
int ledPin = LED_BUILTIN;  //By default is Digital PIN 13 as output
int toggleState1 = LOW;
int toggleState2 = LOW;

void setup() {
    // Serial.begin(9600); Uncomment if needed to check the status in the serial monitor
    pinMode(ledPin, OUTPUT);
    pinMode(togglePin1, INPUT);
    pinMode(togglePin2, INPUT);
}

// repeat infinitely
void loop() {
    toggleState1 = digitalRead(togglePin1);    
    toggleState2 = digitalRead(togglePin2);

    // Serial.println(switchState); Uncomment if needed to check the status in the serial monitor

    if (toggleState1 == HIGH) {
        digitalWrite(ledPin, HIGH);
    } else {
         digitalWrite(ledPin, LOW);
     }  

    delay(10) // just to give a short time between conditionals depending on the toggle button speed response can be removed

    if (toggleState2 == HIGH) {
        digitalWrite(ledPin, HIGH);
    } else {
         digitalWrite(ledPin, LOW);
     }  
}