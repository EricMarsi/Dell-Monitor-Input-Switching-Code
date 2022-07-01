# Dell-Monitor-Input-Switching-Code

This Code is related to my YouTube Video so that I could easily switch between two inputs on my Dell Display without having to press two buttons a total of two times.

On the ATTiny85 Dev Board from DigiSpark The onboard voltage regulator needed to be removed as my input voltage is 3.3v instead of 5v

The following Connections need to be made:

GND -> GND

VIN -> +3.3v

P1 -> N/A Status LED

P2 -> Normally Open Momentary Push Button Switch with other side to Ground

P3 -> Input Select on Monitor

P4 -> OK Button on Monitor


YouTube Video for Reference:
