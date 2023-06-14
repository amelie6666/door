// SD Card Module
#include <SPI.h>
#include <SD.h>

// SD Card module
#include <SPI.h>
#include <SD. h>


// Real Time Clock (RTC)
#include "RTClib"
RTC_Millis rtc;   // Software Real Time Clock (RTC)
DateTime rightNow; // used to store the current time.

// Software Real Time Clock (RTC)
DateTime rightNow;  // used to store the current time.

// SD Card - Confirm Pin
#define SDpin 53

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);  // Open serial communications and wait for port to open:
  while (!Serial) {
    delay(1);  // wait for serial port to connect. Needed for native USB port only
  }

  // SD Card initialisation
  Serial.print("Initializing SD card...");
  if (!SD.begin(SDpin)) {
    Serial.println("initialization failed!");
    while (1)
      ;
  }
}

void loop() {
  // put your main code here, to run repeatedly:



  airConditioning();

  When the line sensor is touched, the air con turns on.
  When the line sensor dectects no touch, turn the air con off.
  drivewayNotificationSystemProcess();


}

/*
 * 
 * 
 */

void airConditioning() {
  

}


void drivewayNotificationSystemProcess () {










  void panicRoom() {

    //read crash sensor
    //if true 
     // output to piezo (pin 3)
    //else 
     //output notone pin 3
  }

}

void 







void
