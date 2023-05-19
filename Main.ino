/*
   -- DF --
   
   This source code of graphical user interface 
   has been generated automatically by RemoteXY editor.
   To compile this code using RemoteXY library 3.1.8 or later version 
   download by link http://remotexy.com/en/library/
   To connect using RemoteXY mobile app by link http://remotexy.com/en/download/                   
     - for ANDROID 4.11.1 or later version;
     - for iOS 1.9.1 or later version;
    
   This source code is free software; you can redistribute it and/or
   modify it under the terms of the GNU Lesser General Public
   License as published by the Free Software Foundation; either
   version 2.1 of the License, or (at your option) any later version.    
*/

//////////////////////////////////////////////
//        RemoteXY include library          //
//////////////////////////////////////////////

// RemoteXY select connection mode and include library
#define REMOTEXY_MODE__ESP32CORE_WIFI_POINT
#include <WiFi.h>

#include <RemoteXY.h>

// RemoteXY connection settings
#define REMOTEXY_WIFI_SSID "DogFeederIoT"
#define REMOTEXY_WIFI_PASSWORD "12345678"
#define REMOTEXY_SERVER_PORT 6377


// RemoteXY configurate
#pragma pack(push, 1)
uint8_t RemoteXY_CONF[] =  // 531 bytes
  { 255, 9, 0, 46, 1, 12, 2, 16, 16, 5, 130, 1, 0, 90, 64, 11, 0, 30, 66, 128,
    8, 60, 49, 8, 1, 29, 31, 1, 5, 21, 20, 23, 9, 1, 29, 31, 84, 114, 101, 97,
    116, 0, 131, 3, 4, 93, 12, 4, 1, 28, 31, 77, 97, 105, 110, 0, 131, 2, 33, 93,
    12, 4, 2, 28, 31, 69, 100, 105, 116, 0, 67, 4, 21, 42, 23, 9, 1, 24, 31, 22,
    67, 4, 9, 8, 46, 7, 1, 24, 31, 13, 1, 5, 8, 77, 47, 8, 2, 29, 31, 67,
    97, 108, 105, 98, 114, 97, 116, 101, 0, 3, 132, 12, 20, 38, 10, 2, 28, 31, 7, 20,
    18, 40, 27, 7, 2, 29, 31, 2, 7, 20, 18, 57, 11, 8, 2, 30, 31, 2, 7, 20,
    33, 57, 11, 8, 2, 30, 31, 2, 131, 2, 18, 93, 12, 4, 3, 28, 31, 72, 105, 115,
    116, 111, 114, 121, 0, 67, 4, 8, 15, 46, 8, 3, 29, 31, 31, 131, 2, 47, 93, 12,
    4, 4, 28, 31, 73, 110, 102, 111, 0, 129, 0, 20, 35, 25, 4, 1, 27, 78, 101, 120,
    116, 32, 109, 101, 97, 108, 32, 97, 116, 58, 0, 129, 0, 27, 56, 11, 3, 1, 27, 83,
    116, 111, 114, 97, 103, 101, 0, 67, 4, 10, 77, 14, 9, 1, 24, 31, 22, 67, 4, 38,
    77, 13, 9, 1, 24, 31, 22, 129, 0, 11, 73, 11, 3, 1, 27, 72, 117, 109, 105, 100,
    105, 116, 121, 0, 129, 0, 35, 73, 18, 3, 1, 27, 84, 101, 109, 112, 101, 114, 97, 116,
    117, 114, 101, 0, 129, 0, 16, 8, 31, 7, 2, 27, 83, 99, 104, 101, 100, 117, 108, 101,
    0, 129, 0, 18, 35, 13, 3, 2, 27, 77, 101, 97, 108, 32, 115, 105, 122, 101, 0, 129,
    0, 18, 52, 7, 3, 2, 27, 72, 111, 117, 114, 0, 129, 0, 33, 52, 9, 3, 2, 27,
    77, 105, 110, 117, 116, 101, 0, 72, 108, 18, 19, 26, 26, 4, 2, 27, 75, 30, 0, 0,
    0, 0, 0, 0, 200, 66, 0, 0, 0, 0, 135, 0, 0, 112, 66, 0, 0, 200, 66, 94,
    0, 0, 240, 65, 0, 0, 112, 66, 36, 0, 0, 0, 0, 0, 0, 240, 65, 68, 49, 6,
    41, 53, 44, 4, 31, 27, 86, 97, 114, 105, 97, 98, 108, 101, 32, 49, 0, 129, 0, 10,
    6, 42, 5, 4, 27, 81, 117, 97, 108, 105, 116, 121, 32, 111, 102, 32, 115, 116, 111, 114,
    97, 103, 101, 0, 67, 4, 8, 25, 46, 8, 3, 29, 31, 31, 67, 4, 8, 35, 46, 8,
    3, 29, 31, 31, 67, 4, 8, 45, 46, 8, 3, 29, 31, 31, 67, 4, 8, 55, 46, 8,
    3, 29, 31, 31, 129, 0, 11, 9, 38, 4, 3, 28, 68, 65, 84, 69, 32, 32, 32, 72,
    79, 85, 82, 32, 32, 32, 83, 73, 90, 69, 0, 67, 4, 8, 65, 46, 8, 3, 29, 31,
    31, 67, 4, 8, 75, 46, 8, 3, 29, 31, 31 };

// this structure defines all the variables and events of your control interface
struct {

  // input variables
  uint8_t Trear;      // =1 if button pressed, else =0
  uint8_t Calibrate;  // =1 if button pressed, else =0
  uint8_t Meals;      // =0 if select position A, =1 if position B, =2 if position C, ...
  int16_t Portion;    // 32767.. +32767
  int16_t Hour;       // 32767.. +32767
  int16_t Minute;     // 32767.. +32767

  // output variables
  int8_t Storage;        // =0..100 level position
  char Info[22];         // string UTF8 end zero
  char Calendar[13];     // string UTF8 end zero
  char Record[31];       // string UTF8 end zero
  char Info_H[22];       // string UTF8 end zero
  char Info_T[22];       // string UTF8 end zero
  int8_t circularbar_1;  // from 0 to 100
  float onlineGraph_1;
  /*
  char Record[31];  // string UTF8 end zero
  char Record[31];  // string UTF8 end zero
  char Record[31];  // string UTF8 end zero
  char Record[31];  // string UTF8 end zero
  char Record[31];  // string UTF8 end zero
  char Record[31];  // string UTF8 end zero
*/
  // other variable
  uint8_t connect_flag;  // =1 if wire connected, else =0

} RemoteXY;
#pragma pack(pop)

/////////////////////////////////////////////
//           END RemoteXY include          //
/////////////////////////////////////////////

//======================= INCLUDES

// Humidity and temperature

#include <Adafruit_Sensor.h>
#include <DHT.h>
#include <DHT_U.h>

// DHT config.
#define DHTPIN 4       // Pin which is connected to the DHT sensor.
#define DHTTYPE DHT11  // DHT 11
DHT_Unified dht(DHTPIN, DHTTYPE);
float myTemperature = 0, myHumidity = 0;


//====================== FUNCTIONS

int temperature() {
  sensors_event_t event;
  dht.temperature().getEvent(&event);
  if (isnan(event.temperature)) {
    Serial.println("Error reading temperature!");
  } else {
    // Update temperature and humidity
    myTemperature = (float)event.temperature;
    return myTemperature;
  }
}

int humidity() {
  sensors_event_t event;
  dht.humidity().getEvent(&event);
  if (isnan(event.relative_humidity)) {
    Serial.println("Error reading humidity!");
  } else {
    myHumidity = (float)event.relative_humidity;
    return myHumidity;
  }
}

int quality() {
  int aux;
  if(temperature() >10 && temperature() < 20 && humidity() >0 && humidity() < 30) aux = 95;
  if(temperature() >20 && temperature() < 30 && humidity() >30 && humidity() < 60) aux = 65;
  if(temperature() >30  && humidity() >60) aux = 35;
  return aux;
}

void setup() {
  RemoteXY_Init();
  Serial.begin(9600);


  // Initialize Humidity and temperature
  dht.begin();
  sensor_t sensor;
  dht.temperature().getSensor(&sensor);



  // TODO you setup code
}

void loop() {
  RemoteXY_Handler();


  dtostrf(temperature(), 0, 0, RemoteXY.Info_T);
  dtostrf(humidity(), 0, 0, RemoteXY.Info_H);

  RemoteXY.onlineGraph_1 = quality();
  RemoteXY.circularbar_1 = quality();
}