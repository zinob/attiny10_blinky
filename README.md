# A minimalistic example to program an attiny10 using a Bus Pirate and platform.io.

I'm publishing this since I couldn't (easily) find a simple platformio repo that used bus pirate for the ATTINY and I had some issues and wasn't sure if I was thick or if there was a bug somewhere.
 
It blinks all pins, because I was hunting a ~~red-herring~~ cold-solder joint.
This example will only work if RESET-fuse has NOT been blown, then you need add some some external power-supply and transistors to make it output *12V* on the RESET-pin when CS is low.

the pinout used by avrdudes buspirate_bb mode is 

| BP | attiny  | attiny pin|
|----|---------|-----------|
|MOSI| TPIDATA | pin 1     |
|GND | GND     | pin 2     |
|CLK | TPICLK  | pin 3     |
|5V  | VCC     | pin 5     |
|CS  | RESET   | pin 6     |

![buspirate->attiny pinout (see above table)](attiny_bp_sketch.png)

I recommend using a lab-dec since that makes it easy to keep track of all the connections
![don’t cry, it won’t help](easy.png)

(yes having a stuffed animal next to your lab-dec helps. It might not be great for ESD but it makes for a great conversation partner when you can't figure out wha’ts wrong)

