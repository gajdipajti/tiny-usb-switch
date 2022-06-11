/*
  A Tiny USB switch with ATTinyx5.
  ATTinyx5 core for Arduino IDE integration: https://github.com/SpenceKonde/ATTinyCore

  Currently stripped for ATTiny25 (2048 bytes of prog. memory).
    * The code uses ~1300 bytes.
    * Because of prog. memory limitations, use without bootloader on ATTiny25.
    * Don't forget to set fuses: burn bootloader, even if you don't use it.
    * On ATTiny[45, 85], a bootloader can be used.
    * Clock Source: 8 MHz; LTO: Enabled; millis()/micros(): Enabled; B.O.D.: Disabled

  Author: [Tamás Gajdos](https://github.com/gajdipajti)
  
  Main Functions:
    * RESET/ENABLE/DISABLE USB PWR  -> PIN_B2 + LED

  Commands:
    * S\r - get status (1 -> 'ON', 0 -> 'OFF')
    * P\r - do a 02sec reset 'ANY' -> 'OFF' -> wait 02sec -> 'ON'
    * Q\r - do a 10sec reset 'ANY' -> 'OFF' -> wait 10sec -> 'ON'
    * R\r - do a 30sec reset 'ANY' -> 'OFF' -> wait 30sec -> 'ON'
    * Y\r - turn on  'ANY' -> 'ON' (actually a 0.1 sec reset)
    * N\r - turn off 'ANY' -> 'OFF'

  Recommended circuit:
    * PIN_B2 - NPN transistor (2N3904 - Relay (NA5W-K
*/
//#include <OneWire.h>

const int usbPWR = PIN_B2;

//OneWire ds(PIN_B4);  // (a 4.7K resistor is necessary)

void setup() {
  pinMode(usbPWR,  OUTPUT);      // Set USB PWR  ON/OFF to output
  Serial.begin(9600);            // Recommended for 8 MHz internal oscillator.
  ADCSRA&=(~(1<<ADEN));
}

void resetUSB(int dt) {
  digitalWrite(usbPWR, true);
  Serial.println('0');
  delay(dt);
  digitalWrite(usbPWR, false);
  Serial.println('1');
}

void loop() {
if (Serial.available()) {
  char inChar = (char)Serial.read();
  Serial.print(inChar);
  switch (inChar) {
    case 's':
      Serial.println(digitalRead(usbPWR));
      break;
    case 'y':
      resetUSB(100);
      break;
    case 'n':
      digitalWrite(usbPWR, true);
      Serial.println('0');
      break;
    case 'p':
      resetUSB(2000);
      break;
    case 'q':
      resetUSB(10000);
      break;
    case 'r':
      resetUSB(30000);
      break;
    default:
      Serial.println("ERR");
      break;
    } 
  }
}
