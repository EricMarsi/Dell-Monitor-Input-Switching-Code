# Dell-Monitor-Input-Switching-Code

Decided that with the amount of devices that I work on that I needed a easier way to switch display inputs to my Dell Monitor on my lab bench. Instead of pressing two buttons a total of three times I need to switch inputs, this method allows me to only press one button with a bit of automation

On the ATTiny85 Dev Board from DigiSpark The onboard voltage regulator needed to be removed as my input voltage is 3.3v instead of 5v

The following Connections need to be made:

GND -> GND

VIN -> +3.3v

P1 -> N/A Status LED

P2 -> Normally Open Momentary Push Button Switch with other side to Ground

P3 -> Input Select on Monitor

P4 -> OK Button on Monitor


YouTube Video for Reference:
