# HC-05

#### HC-05 is a Bluetooth module widely used in electronics projects for wireless communication between devices. It is a versatile module that supports both Bluetooth Serial Port Profile (SPP) and Bluetooth v2.0 + EDR (Enhanced Data Rate)

### Image
<img src="https://github.com/GDS2005/arduino/blob/main/hc-05/module.jpg" alt="hc-05 Module" width="600"/>

### Pinout
| DHT22 Pins | Description |
| --- | --- |
| 1 | STATE |
| 2 | RXD |
| 3 | TXD |
| 4 | GND |
| 5 | VCC |
| 6 | EN |

### Logic

- TXD (Transmit Data): This pin transmits data from the HC-05 module to the connected microcontroller or other devices.
- RXD (Receive Data): This pin receives data sent to the HC-05 module from the connected microcontroller or other devices.

### Config

1. Entering AT Mode
- AT Mode 1: After powering the module, press the button on the HC-05. The LED should flash quickly. Send AT commands to verify the mode.
- AT Mode 2: Before powering the module, press and hold the button. Power the module while holding the button, then release it. The LED should flash slowly, indicating AT Mode 2.
2. Basic AT Commands
 - Checking AT Mode: AT
Responds with "OK" if the module is in AT mode.
 - Changing Baud Rate: AT+UART=<baud rate>,<stop bits>,<parity>
Example: AT+UART=9600,1,0 sets baud rate to 9600, 1 stop bit, no parity.
- Changing Name: AT+NAME=<name>
Sets the module's name. Example: AT+NAME=MyBluetooth.
- Changing Role: AT+ROLE=<role>
Sets the module as a master (1) or slave (0). Example: AT+ROLE=1.
- Changing Password: AT+PSWD=<password>
Sets the pairing password. Example: AT+PSWD=1234.
- Inquiring the Current Settings:
. AT+UART? for baud rate
. AT+NAME? for name
. AT+ROLE? for role
. AT+PSWD? for password
3. Advanced AT Commands
- Set Master/Slave Mode:
. AT+ROLE=0 (Slave)
. AT+ROLE=1 (Master)
- Inquire Device Address: AT+ADDR?
Returns the module's address.
- Reset to Default Settings: AT+ORGL
Resets the module to factory settings.
4. Exiting AT Mode
Power off the module and power it back on without pressing the button, or use an AT command if supported to switch modes.

### Diagram
<img src="https://github.com/GDS2005/arduino/blob/main/hc-05/circuit.jpg" alt="hc-05 Diagram" width="600"/>