# Electonics List:


## Specific Parts:

[ESP32-S3 Dev Board](https://www.amazon.com/gp/product/B0DG8L7MQ9/ref=ewc_pr_img_1?smid=AA8JFJR0F3SWY&th=1)


## General Parts:
Jumper Wires M2M (5x)

Light Diode (1x)

Breadboard (1x)

220Ω Resistor (1x)

## Tools for Assembly and Usage
USB-C Charging Cable for ESP32-S3 Board to be powered. This cable must also be able to have data communication and transfer.

# Assembly:

Attach the ESP32 to the breadboard snuggly in the middle. Connect the 3.3v pin from the microcontroller to the power rail of the breadboard. Connect the GND pin of the microcontroller to the GND rail of the breadboard. Place the button in a central part of the breadboard. Connect one end of the button from its column to the GND rail via a jumper wire. Connect the other side of the button (which should be placed in a seperate column then the GND side) to a  GPIO pin on the ESP32 (Pin 7 as an example). Place a Light Diode on seperate columns in a different place on the breadboard. Connect the anode side of the diode to another GPIO pin (Pin 5 for example). Then connect the cathode in a seperate column to a 220Ω resistor which connects to the GND rail. This completes the system.
