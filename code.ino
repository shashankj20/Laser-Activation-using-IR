const int buttonPin = 2; // Define the push button pin
const int irTransmitterPin = 3; // Define the IR transmitter (IR LED) pin
const int laserPin = 6; // Define the laser module control pin
bool buttonPressed = false; // Track button press state

void setup() {
  pinMode(buttonPin, INPUT_PULLUP); // Set the button pin as an input with pull-up resistor
  pinMode(irTransmitterPin, OUTPUT); // Set the IR transmitter pin as an output
  pinMode(laserPin, OUTPUT); // Set the laser module control pin as an output
  Serial.begin(9600); // Initialize serial communication
  digitalWrite(laserPin, LOW); // Turn off the laser module initially
}

void loop() {
  int buttonState = digitalRead(buttonPin);

  if (buttonState == LOW && !buttonPressed) { // Button is pressed and not already registered as pressed
    Serial.println("Button pressed.");
    sendIRSignal();
    toggleLaser(); // Toggle the laser module state
    buttonPressed = true; // Mark the button as pressed
  } else if (buttonState == HIGH && buttonPressed) { // Button is released and marked as pressed
    buttonPressed = false; // Mark the button as released
  }
}

void sendIRSignal() {
  // Send a basic IR signal (you may need to adjust this for your specific IR transmitter)
  digitalWrite(irTransmitterPin, HIGH);
  delayMicroseconds(900); // Adjust this delay for your IR transmitter
  digitalWrite(irTransmitterPin, LOW);
  delayMicroseconds(450); // Adjust this delay for your IR transmitter
}

void toggleLaser() {
  static bool laserOn = false; // Static variable to remember laser state
  laserOn = !laserOn; // Toggle the laser state
  digitalWrite(laserPin, laserOn ? HIGH : LOW); // Set laser state
}
