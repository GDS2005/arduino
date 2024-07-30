# Arduino projects

#### Here is a simple usage for Arduino modules and their combination projects. 

## Considerations
### Digital Pins
Digital pins on the Arduino Uno can read or write digital signals, which means they can only understand two states: HIGH (1) or LOW (0). These pins are numbered from 0 to 13.
- Input Mode: In this mode, the pins can detect the presence or absence of voltage (HIGH or LOW). This is used for reading button presses, digital sensors, etc.
- Output Mode: In this mode, the pins can send a digital signal (HIGH or LOW) to other components. This is used for controlling LEDs, relays, etc.
- PWM (Pulse Width Modulation): Some digital pins (marked with a ~ symbol, such as 3, 5, 6, 9, 10, and 11) can output a PWM signal, which can be used for dimming LEDs or controlling motor speed.
### Analog Pins
Analog pins on the Arduino Uno are used to read analog signals, which are continuous signals that can have a range of values. These pins are numbered from A0 to A5.
- Analog Input: The analog pins can read varying voltage levels, allowing them to interpret sensor data like temperature, light intensity, etc. The analog input is converted to a digital value between 0 and 1023 using the board's ADC (Analog-to-Digital Converter).
- Analog Output: Although labeled as analog, these pins cannot output true analog signals. However, analogWrite() can be used with PWM-capable digital pins to simulate analog output.

## Modules description
| Code | Description |
| --- | --- |
| dht22 | Humidity and Temperature sensor |
| sr501 | Movement sensor |
| hc-sr04 | Ultrasonic sensor |
| lm393 | Light Sensor |
| sg90 | Servo Motor |
| hc-05 | Bluetooh module |
| relay | Switch |

## Run projects
1. Open the code file with Arduino IDE.
2. Select the Board and Port configuration.
3. Upload the project to the Arduino board.
4. Check the serial monitor in Arduino IDE to see the lectures.