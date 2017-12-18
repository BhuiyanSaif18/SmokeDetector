// Digital pin 8 will call 'pin8'
int pin8 = 8;
// pin 7 will provide a constant 5V
int pin7 =7;
// A0 will call 'sensor'
int sensor = A0;
// Initial sensorValue 0
int sensorValue = 0;

// The setup routine runs once when you press reset
void setup() {
  pinMode(pin7, OUTPUT);
  // Initialize the digital pin 8 as an output
  pinMode(pin8, OUTPUT);
  Serial.begin(9600);
}
void loop() {
  // Providing the 5V
  digitalWrite(pin7, HIGH);
  // Read the input on A0
  sensorValue = analogRead(sensor);
  // Print the value from Sensor
  Serial.println(sensorValue, DEC);
  if (sensorValue > 350) {
    // the LED will turn on
    digitalWrite(pin8, HIGH);
  }
  else {
    // the LED will turn off
    digitalWrite(pin8, LOW);
  }
}
