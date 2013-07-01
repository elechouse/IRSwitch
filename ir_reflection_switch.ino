/**
  ******************************************************************************
  * @file    ir_reflection_switch.ino
  * @author  JiapengLi
  * @brief   This file provides a demostration on how to control led by using 
          Arduino Reflectional Infrared Switch Sensor.
  Product:
  http://www.elechouse.com/elechouse/index.php?main_page=product_info&cPath=152_156&products_id=355

  ******************************************************************************
  * @note:
        When the IR reflection sensor senses the object, LED on Arduino board 
        is turned on.
  ******************************************************************************
  * @section  HISTORY
    
    2013/07/01    Initial version.
  */

/** LED control pin */
int ledPin = 13;

/**
Sensor     Arduino
  S    -->    2
*/
int switchPin = 2;

int value = 0; 
 
void setup() 
{
  /** switch pin initial */
  pinMode(switchPin, INPUT);
  digitalWrite(switchPin, HIGH);  // INPUT pull HIGH
  
  /** led pin initial */
  pinMode(ledPin, OUTPUT);
}
 
void loop() 
{
  /** read sensor output voltage */
  value = digitalRead(switchPin);
  
  if (HIGH == value) {
    /** LED on*/
    digitalWrite(ledPin, HIGH);
  } else {
    /** LED off*/
    digitalWrite(ledPin, LOW);
  }
}
