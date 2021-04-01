void setup() {
  pinMode(8, OUTPUT);    // sets the digital pin 9 (IC pin 14) as output
  pinMode(7, INPUT);     // Sets the digital pin 7 (IC pin 13) as input
  
}

// Create a variable to store status of button press
int val = 0;

void loop() {

  // Get button status and store in 'val'
  val = digitalRead(7);
  
  // If button has been pressed then blink
  if (val == HIGH) {

    // Perform the blinking by periodically turning light on and off
    digitalWrite(8, HIGH); // sets the digital pin 9 on
    delay(1000);            // waits for a second
    digitalWrite(8, LOW);  // sets the digital pin 9 off
    delay(1000);            // waits for a second
    
  }
  
}
