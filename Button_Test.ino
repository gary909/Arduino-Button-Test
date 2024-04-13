// Define the pin where the button is connected
const int buttonPin = 8;

// Variable to store the button state
int buttonState = 0;

void setup() {
  // Initialize the button pin as an input
  pinMode(buttonPin, INPUT_PULLUP);

  // Start serial communication
  Serial.begin(9600);
}

void loop() {
  // Read the state of the button
  buttonState = digitalRead(buttonPin);

  // Check if the button is pressed
  if (buttonState == LOW) {
    // If the button is pressed, print this message
    Serial.println("Button pressed!");
  } else {
    // If the button is not pressed, print this message
    Serial.println("Button not pressed.");
  }

  // Delay a little bit to avoid bouncing issues
  delay(200);
}
