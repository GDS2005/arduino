# HC-SR04

#### HC-SR04 works by sending sound waves from the transmitter, which then bounce off of an object and then return to the receiver.  You can determine how far away something is by the time it takes for the sound waves to get back to the sensor.

### Pinout
| HC-SR04 Pins | Description |
| --- | --- |
| 1 | VCC |
| 2 | TRIGGER |
| 3 | ECHO |
| 4 | GND |

### Logic
"""Distance = Speed × Time"""
The speed of sound is approximately 340 meters per second. With the Ultrasonic Sensor we can get the time with the ECHO pin

### Diagram
<img src="https://github.com/GDS2005/arduino/blob/main/hc-sr04/circuit.jpg" alt="dht22 Image" width="600"/>

### Usage
* Open the code file with Arduino IDE.
* Select the Board and Port configuration.
* Check the serial monitor in Arduino IDE to see the lectures.