# Laser Activation with IR

This Arduino project demonstrates how to control a laser module using an Infrared (IR) transmitter and receiver along with a push button. When the button is pressed, the IR transmitter sends a signal to the IR receiver, activating the laser module. Releasing the button deactivates the laser. This project can be used for various applications like remote-controlled laser pointers or simple laser switches.

## Hardware Components

- Arduino Nano
- IR Transmitter Module
- IR Receiver Module
- Laser Module
- Push Button
- Resistors
- Jumper Wires

## Wiring Connections

- Connect the IR Transmitter module:
  - VCC to Arduino 5V
  - GND to Arduino GND
  - Signal to Arduino Digital Pin 3

- Connect the IR Receiver module:
  - VCC to Arduino 5V
  - GND to Arduino GND
  - Signal to Arduino Digital Pin 4

- Connect the Laser Module:
  - Laser module control pin to Arduino Digital Pin 6
  - Laser module power supply (if separate) to appropriate voltage source (e.g., 3.3V or 5V)

- Connect the Push Button:
  - Connect one terminal to Arduino Digital Pin 2
  - Connect the other terminal to GND
  - Add an appropriate resistor (e.g., 10kΩ) between the button's input and 5V for pull-up functionality.

## Functionality

- Pressing the button activates the laser module, and the laser beam emits.
- Releasing the button deactivates the laser module, turning off the laser beam.
- An Infrared (IR) signal is transmitted when the button is pressed using the IR transmitter.
- The IR receiver module is used to detect the IR signal. You can use this IR signal for additional functionality, such as triggering other devices or systems.

## Usage

1. Upload the Arduino sketch (`laser_activation_with_ir.ino`) to your Arduino Nano.
2. Ensure that all hardware components are correctly connected as per the wiring diagram.
3. Power on the Arduino Nano.
4. Press the button to activate the laser module. Release the button to deactivate it.

## Customization

- You can adjust the delays and timing in the code to match your specific IR transmitter and receiver modules.
- Modify the IR signal code to match the desired functionality when an IR signal is received.


## Acknowledgments

This project is based on the concepts of IR communication and Arduino. Special thanks to the Arduino community for their contributions and support.

## Author

- Shashank J

## License

This project is licensed under the MIT License - see the [LICENSE.md](LICENSE.md) file for details.