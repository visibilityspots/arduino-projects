# sonar

This sketch can be used to calculate if an object is placed in a perimeter of 10 cm of the sonar shield.

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
	out of range
	out of range
	out of range
	out of range
	out of range
	out of range
	out of range
```

And when you place an object in front of the device whitin 10 cm you should see, together with the blinking led 13:

```bash
	out of range
	out of range
	out of range
	out of range
	out of range
	in range
	in range
	in range
	in range
	in range
	in range
	in range
	in range
	in range
	in range
	out of range
	out of range
	out of range
	out of range
	out of range
	out of range
```

To close the serial connection you have to use the key combination [ctrl-a] [ctrl-x]

I successfully tested this piece of code with an arduino Leonardo and a HC-SR04 sonar sensor shield
