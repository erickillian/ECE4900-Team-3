/*
  Clever Cleaning Container (C^3)

  This code processes input from a 4x4 keypad matrix
  (Teyleten Robot 4 x 4 Matrix Array 16 Key Membrane Switch Keypad Keyboard for Arduino AVR PI C)
  https://www.amazon.com/Teyleten-Robot-Membrane-Keyboard-Arduino/dp/B0993D2VLR/ref=sr_1_23?dchild=1&keywords=keypad+for+arduino&qid=1631044015&s=industrial&sr=1-23
  
  The code then processes the input to control 4 DC Pumps through a motor sheild
  (HiLetgo TB6612 Mosfet for Arduino Motor Shield Standard IIC I2C TB6612FNG Stepper Motor PCA9685 PWM Servo Driver Shield V2 Robot PWM Uno Mega R3 Replace L293D)
  https://www.amazon.com/HiLetgo-TB6612FNG-Stepper-Motor-Replace/dp/B073SP76MC/ref=sr_1_3?dchild=1&keywords=ARDUINO+V2&qid=1630451092&s=industrial&sr=1-3


  Pinouts:
  * list the components attached to each input
  * list the components attached to each output

  Created 10/12/2021
  By Eric Killian
  
  Modified 10/12/2021
  Eric Killian
*/


#include <EEPROM.h>
#include <Keypad.h>

const byte ROWS = 4;
const byte COLS = 4;

char hexaKeys[ROWS][COL] = {
  {'1','2','3','A'},
  {'4','5','6','B'},
  {'7','8','9','C'},
  {'*','0','#','D'}
};

// These pins might need to change based on what pins are needed for the motor shield outputs
const byte row_pins[ROWS] = {1,2,3,4} //Pins used for the rows of the keypad
const byte col_pins[COLS] = {5,6,7,8} // Pins for the columns of the keypad

void setup() {
  // put your setup code here, to run once:
  
}

void loop() {
  // put your main code here, to run repeatedly:

}