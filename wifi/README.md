# wifi-shield

This sketch can be used to connect to a WPA secured wireless network using a static ip address.

Using [inotool](http://inotool.org) you can compile the code and upload it to your arduino device

```bash
	$ ino clean
	$ ino build
	$ ino upload
```

Once you've uploaded the code to your arduino device you can catch the output in a serial connection.

```bash
	$ ino serial
```

If everything went well you should see an output according to this:

```bash
	Terminal ready
	Firmware Version:1.1.0
	SSID: YOUR-WIRELESS-SSID
	IP Address: X.X.X.X
	signal strength (RSSI):-66 dBm
```

To close the serial connection you have to use the key combination [ctrl-a] [ctrl-x]

I successfully tested this piece of code with an arduino Leonardo and a Wifi shield model R3
