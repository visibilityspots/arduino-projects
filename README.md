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

A list of the projects I've build together with a brief explenation of their purposes.

The bigger goal is a project related to my [roomba](http://www.irobotbelgium.com/nl/stofzuigrobotten/24-roomba-780-5060155404530.html) cleaning device.

Using some arduino magic I want to be:

- able to control the device through the internet using a wifi shield and some infrared transmitter
- informed when the roomba leaves using the sonar sensor sending mails through a wifi shield to the [ifttt](https://ifttt.com/sms) service

### blink

This project I created to test my local setup using inotool.org. It blinks the build in led 13 of the arduino bord.

Following the guide on http://inotool.org/quickstart I created this project and tweaked the predefined LED_PIN to a custom integer so I can easily switch between led on a breadboard or the proto shield.

### wifi-shield

I still have to buy a [wifi shield](http://arduino.cc/en/Guide/ArduinoWiFiShield) before I can actually start testing this out.

### sonar

This is a project to test the sonar sensor HC-SR04 based on the [tutorial](http://arduinobasics.blogspot.be/2012/11/arduinobasics-hc-sr04-ultrasonic-sensor.html) arduino basics.

It shows in a serial connection how far an object is located from the sensor. The idea is that when my rooma leaves it's box and therefor the sonar is measuring a distance longer than 10cm a message should be sent he left his box.

That way I will kept informed every time he left for cleaning.

### infrared

iThis project's objective is to sent out ir signals to the roomba. That way I could control it from distance which could be by sending mail, sending commands, whatever is possible through the wifi shield.

The current state of the project is based on a [tutorial](https://learn.adafruit.com/ir-sensor) of adafruit to read the frequences of the commands sended by the remote so I could store them and use them afterwards to control the device.
