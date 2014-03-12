# arduino projects

Several arduino projects I played with to gain some more electrical experience and who knows one day it will help me to open the curtains depending on the light..

## specifications

* starter kit overview

## inotool

Since I'm a big command line tools fan I became in love with inotool.org to communicate between my ArchLinux setup and the Arduino board.

And hell I like it a lot.

Using those 3 commands you can easily generate your first project:

```bash
  $ ino init -t blink
  $ ino build
  $ ino upload
```

## projects

A list of the projects I've build together with a brief explenation of their purposes

### blink

This project I created to test my local setup using inotool.org. It blinks the build in led 13 of the arduino bord.

Following the guide on http://inotool.org/quickstart I created this project and tweaked the predefined LED_PIN to a custom integer so I can easily switch between led on a breadboard or the proto shield.
