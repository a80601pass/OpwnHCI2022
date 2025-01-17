//Lesson-2 Button
//Press the button to turn ON/OFF LED
//CAVEDU Education 2020

//Constants won't change. They're used here to set pin numbers:
const int buttonPin = 6;     // the number of the pushbutton pin
const int ledPin =  4;  // the number of the LED pin
// variables will change:
int buttonState = 0; // variable for reading the pushbutton statu s

void setup() {
  // initialize the LED pin as an output:
  pinMode(ledPin, OUTPUT);
  // initialize the pushbutton pin as an input:
  pinMode(buttonPin, INPUT);
}

void loop() {
  // read the state of the pushbutton value:
  buttonState = digitalRead(buttonPin);
  // check if the pushbutton is pressed. If it is, the buttonState is HIGH:
  if (buttonState == HIGH) {//更改HIGH或LOW決定觸發狀態
    digitalWrite(ledPin, HIGH);  // turn LED on:
  } else {
    digitalWrite(ledPin, LOW);   // turn LED off:
  }
  //try to add delay() to control the blink frequency
}
