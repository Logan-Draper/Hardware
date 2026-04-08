/*
This code uses an ESP32-S3 dev module to toggle two lights on and off with the press of a button. First press light one is on, second press,
light one is off light two is on. third press, light two is off, light one is on, repeat.

To build the same board, look at ~LED_blink/electronics/perfboard/toggle_two_lights.jpg

*/

const int buttonPin = 4;
const int ledPin_1 = 5;
const int ledPin_2 = 6;
bool ledState = false;
 int curr_pin = ledPin_1;

void setup() {
  pinMode(buttonPin, INPUT_PULLUP);
  pinMode(ledPin_1, OUTPUT);
  pinMode(ledPin_2,OUTPUT);
}

void loop() {
  if (digitalRead(buttonPin) == LOW) {
      digitalWrite(ledPin_1,HIGH);
      digitalWrite(ledPin_2,LOW);
    if(curr_pin == ledPin){
      digitalWrite(ledPin_1,HIGH);
      digitalWrite(ledPin_2,LOW);
      curr_pin = ledPin_2;
      delay(300);
    }else if (curr_pin == ledPin_2){
      digitalWrite(ledPin_2,HIGH);
      digitalWrite(ledPin_1,LOW);
      curr_pin = ledPin_1;
      delay(300);
    }
  }

}
