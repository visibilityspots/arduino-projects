#include <WiFi.h>

char ssid[] = "SSID";			// your network SSID (name)
char pass[] = "WPA-KEY";	    	// your network password
int status = WL_IDLE_STATUS;		// the Wifi radio's status
IPAddress ip(0, 0, 0, 0);		// static ip

void setup() {
  // initialize serial:
  Serial.begin(9600);

  delay(10000);

  // check for the presence of the shield:
  if (WiFi.status() == WL_NO_SHIELD) {
    Serial.println("WiFi shield not present");
    // don't continue:
    while(true);
  }

  // set static ip
  WiFi.config(ip);

  // attempt to connect to Wifi network:
  while ( status != WL_CONNECTED) {
    Serial.print("Attempting to connect to SSID: ");
    Serial.println(ssid);
    // Connect to WPA/WPA2 network. Change this line if using open or WEP network:
    status = WiFi.begin(ssid, pass);

    // wait 10 seconds for connection:
    delay(10000);
  }

  // once connected, print the state
  printWifiState();
}

void loop() {
}

void printWifiState() {
  // print firmware version
  Serial.print(F("Firmware Version:"));
  Serial.println(WiFi.firmwareVersion());

  // print the SSID of the network you're attached to:
  Serial.print("SSID: ");
  Serial.println(WiFi.SSID());

  // print your WiFi shield's IP address:
  IPAddress ip = WiFi.localIP();
  Serial.print("IP Address: ");
  Serial.println(ip);

  // print the received signal strength:
  long rssi = WiFi.RSSI();
  Serial.print("signal strength (RSSI):");
  Serial.print(rssi);
  Serial.println(" dBm");
}
