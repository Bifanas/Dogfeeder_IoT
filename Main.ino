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
#include <HTTPClient.h>
#include <RemoteXY.h>

// RemoteXY connection settings
#define REMOTEXY_WIFI_SSID "DogFeederIoT"
#define REMOTEXY_WIFI_PASSWORD "12345678"
#define REMOTEXY_SERVER_PORT 6377
//server configuration stuff(incomplete)
const char WIFI_SSID[] =0//erodam
const char WIFI_PASSWORD[] =0//erodam password

String HOST_NAME = "http://192.168.1.68"; // change to your PC's IP address
String PATH_NAME   = "/insert_temp.php";
//String queryString = "?user_id=User1&temperature=30.5&humidity=50.0&weight=70.0";
// RemoteXY configurat  
#pragma pack(push, 1)
uint8_t RemoteXY_CONF[] =   // 719 bytes
  { 255,26,0,53,1,200,2,16,31,5,130,3,2,17,59,47,2,30,130,1,
  0,90,64,11,0,30,66,128,8,60,49,8,1,29,31,1,5,21,20,23,
  9,1,29,31,84,114,101,97,116,0,131,3,4,93,12,4,1,28,31,77,
  97,105,110,0,131,2,33,93,12,4,2,28,31,69,100,105,116,0,67,4,
  21,42,23,9,1,24,31,22,67,4,12,7,40,5,1,24,31,20,1,5,
  19,78,25,8,2,29,31,67,97,108,105,98,114,97,116,101,0,131,2,19,
  93,12,4,3,28,31,72,105,115,116,111,114,121,0,67,4,8,15,46,8,
  3,29,31,31,131,2,47,93,12,4,4,28,31,73,110,102,111,0,129,0,
  20,35,25,4,1,27,78,101,120,116,32,109,101,97,108,32,97,116,58,0,
  129,0,27,56,11,3,1,27,83,116,111,114,97,103,101,0,67,4,10,77,
  14,9,1,24,31,22,67,4,38,77,13,9,1,24,31,22,129,0,11,73,
  11,3,1,27,72,117,109,105,100,105,116,121,0,129,0,35,73,18,3,1,
  27,84,101,109,112,101,114,97,116,117,114,101,0,129,0,16,6,31,7,2,
  27,83,99,104,101,100,117,108,101,0,129,0,41,19,17,4,2,27,77,101,
  97,108,32,115,105,122,101,0,129,0,7,19,9,4,2,27,72,111,117,114,
  0,129,0,22,19,12,4,2,27,77,105,110,117,116,101,0,72,108,18,19,
  26,26,4,2,27,75,30,0,0,0,0,0,0,200,66,0,0,0,0,135,
  0,0,112,66,0,0,200,66,94,0,0,240,65,0,0,112,66,36,0,0,
  0,0,0,0,240,65,68,49,6,41,53,44,4,31,27,86,97,114,105,97,
  98,108,101,32,49,0,129,0,10,6,42,5,4,27,81,117,97,108,105,116,
  121,32,111,102,32,115,116,111,114,97,103,101,0,67,4,8,25,46,8,3,
  29,31,31,67,4,8,35,46,8,3,29,31,31,67,4,8,45,46,8,3,
  29,31,31,67,4,8,55,46,8,3,29,31,31,129,0,11,9,38,4,3,
  28,68,65,84,69,32,32,32,72,79,85,82,32,32,32,83,73,90,69,0,
  67,4,8,65,46,8,3,29,31,31,67,4,8,75,46,8,3,29,31,31,
  129,0,24,80,3,4,1,27,37,0,129,0,51,80,3,4,1,27,194,186,
  67,0,129,0,5,70,53,4,2,27,73,115,32,116,104,101,32,102,111,111,
  100,32,97,109,111,117,110,116,32,105,110,99,111,114,114,101,116,63,0,7,
  20,5,26,13,7,2,31,29,2,7,20,5,36,13,7,2,31,29,2,7,
  20,5,45,13,7,2,31,29,2,7,20,5,54,13,7,2,31,29,2,7,
  20,22,26,13,7,2,31,29,2,7,20,22,36,13,7,2,31,29,2,7,
  20,22,45,13,7,2,31,29,2,7,20,22,54,13,7,2,31,29,2,7,
  20,42,26,16,7,2,31,29,2,7,20,42,36,16,7,2,31,29,2,7,
  20,42,45,16,7,2,31,29,2,7,20,42,54,16,7,2,31,29,2,129,
  0,19,27,2,5,2,27,58,0,129,0,19,37,2,5,2,27,58,0,129,
  0,19,46,2,5,2,27,58,0,129,0,19,55,2,5,2,27,58,0 };
  
// this structure defines all the variables and events of your control interface 
struct {

    // input variables
  uint8_t Treat; // =1 if button pressed, else =0 
  uint8_t Calibrate; // =1 if button pressed, else =0 
  int16_t Hour_A;  // 32767.. +32767 
  int16_t Hour_B;  // 32767.. +32767 
  int16_t Hour_C;  // 32767.. +32767 
  int16_t Hour_D;  // 32767.. +32767 
  int16_t Minute_A;  // 32767.. +32767 
  int16_t Minute_B;  // 32767.. +32767 
  int16_t Minute_C;  // 32767.. +32767 
  int16_t Minute_D;  // 32767.. +32767 
  int16_t Meal_size_A;  // 32767.. +32767 
  int16_t Meal_size_B;  // 32767.. +32767 
  int16_t Meal_size_C;  // 32767.. +32767 
  int16_t Meal_size_D;  // 32767.. +32767 

    // output variables
  int8_t Storage; // =0..100 level position 
  char Info[22];  // string UTF8 end zero 
  char Calendar[20];  // string UTF8 end zero 
  char Record[31];  // string UTF8 end zero 
  char Info_H[22];  // string UTF8 end zero 
  char Info_T[22];  // string UTF8 end zero 
  int8_t circularbar_1;  // from 0 to 100 
  float onlineGraph_1;
  char Record[31];  // string UTF8 end zero 
  char Record[31];  // string UTF8 end zero 
  char Record[31];  // string UTF8 end zero 
  char Record[31];  // string UTF8 end zero 
  char Record[31];  // string UTF8 end zero 
  char Record[31];  // string UTF8 end zero 

    // other variable
  uint8_t connect_flag;  // =1 if wire connected, else =0 

} RemoteXY;
#pragma pack(pop)
/////////////////////////////////////////////
//           END RemoteXY include          //
/////////////////////////////////////////////

//======================= INCLUDES

// Humidity and temperature-----------------------------------------------
#include <Adafruit_Sensor.h>
#include <DHT.h>
#include <DHT_U.h>
#define DHTPIN 4       // Pin which is connected to the DHT sensor.
#define DHTTYPE DHT11  // DHT 11
DHT_Unified dht(DHTPIN, DHTTYPE);
float myTemperature = 0, myHumidity = 0;

// Real Time Clock---------------------------------------------------------------------

#include "Arduino.h"
#include "uRTCLib.h"
uRTCLib rtc(0x68);  // uRTCLib rtc;


// Scale/load cell 

#include <HX711.h>

const int LOADCELL_DT_PIN = 27;
const int LOADCELL_SCK_PIN = 26;

HX711 scale;// Create an instance of the HX711 library

// Motor --------------------------------------------------------

const int enable_motor = 33;
const int step = 32;
const int dirPin = 35;

//====================== FUNCTIONS


void stepper(float Screw_turns, int motorpin, bool direction) { 
  
  int speed = 840;      //NEEDS TO BE CALIBRATED !!!
  int full_turn = 4000;

  int steps = Screw_turns * full_turn;  // get how many steps
  
  digitalWrite(enable_motor, LOW);  
  digitalWrite(dirPin, direction);

  for (int x = 0; x < steps; x++) {
    digitalWrite(motorpin, HIGH);
    delayMicroseconds(speed);  
    digitalWrite(motorpin, LOW);
    delayMicroseconds(speed);
  }
  digitalWrite(enable_motor, HIGH);
}


void feed( int cal,int amount, bool slow) {
  float turns;
  turns = 50 / cal;  //  to get how many turns to get 50g 

  for (int i = 0; i <= amount; i = i + 50) {
    stepper(turns, step, 0);  //1 turn = 4000 steps = 103g
    stepper(0.2, step, 1);       //spins backwards chug control
    if (slow) {
      delay(1000);
    }
  }
}


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
  if (temperature() > 10 && temperature() < 20 && humidity() > 0 && humidity() < 30) aux = 95;
  if (temperature() > 20 && temperature() < 30 && humidity() > 30 && humidity() < 60) aux = 65;
  if (temperature() > 30 && humidity() > 60) aux = 35;
  return aux;
}
void calculate_closest_meal(){
  int diff0 = abs((RemoteXY.Hour_A - rtc.hour()) * 60 + (RemoteXY.Minute_A - rtc.minute()));
  int diff1 = abs((RemoteXY.Hour_B - rtc.hour()) * 60 + (RemoteXY.Minute_B - rtc.minute()));
  int diff2 = abs((RemoteXY.Hour_C - rtc.hour()) * 60 + (RemoteXY.Minute_C - rtc.minute()));
  int diff3 = abs((RemoteXY.Hour_D - rtc.hour()) * 60 + (RemoteXY.Minute_D - rtc.minute()));
  //find smaller diffrence
  int minDiff = min(min(diff0, diff1), min(diff2, diff3));

  int closestHour, closestMinute;
  if (minDiff == diff0) {
    closestHour = RemoteXY.Hour_A;
    closestMinute = RemoteXY.Minute_A;
  }
  else if (minDiff == diff1) {
    closestHour = RemoteXY.Hour_B;
    closestMinute = RemoteXY.Minute_B;
  }
  else if(minDiff == diff2){
    closestHour = RemoteXY.Hour_C;
    closestMinute = RemoteXY.Minute_C;
  }
  else{
    closestHour = RemoteXY.Hour_D;
    closestMinute = RemoteXY.Minute_D;    
  }
  //coppy transform int to string
    std::string strHour = std::to_string(closestHour);
    std::string strMinute = std::to_string(closestMinute);
    std::string result = strHour + ":" + strMinute;
    std::strcpy(Info, result.c_str());

}


void setup() {
  RemoteXY_Init();
  Serial.begin(9600);
  //Serial.begin(115200);

  // Initialize the HX711 module ------------------------------
  scale.begin(LOADCELL_DT_PIN, LOADCELL_SCK_PIN);
  
  // Set the calibration factor for your specific load cell
  // You can calibrate it by placing a known weight and adjusting this value
  scale.set_scale(100); // Replace 1000 with your calibration factor

  
  scale.tare();// Tare the scale to remove any existing weight


// Initialize RTC----------------------------------
  URTCLIB_WIRE.begin();
  //rtc.set(0, 8, 14, 4, 6, 7, 2023); // rtc.set(second, minute, hour, dayOfWeek, dayOfMonth, month, year)


  // Initialize Humidity and temperature----------------------------------
  dht.begin();
  sensor_t sensor;
  dht.temperature().getSensor(&sensor);

  // motor pins ------------------------------------------

  pinMode(enable_motor, OUTPUT);
  pinMode(step, OUTPUT);
  pinMode(dirPin, OUTPUT);



  // TODO you setup code
}

void loop() {
   //server input, all that is to be stored(varibles need to be changed,and times need to be agreed opon(5min intervals of sending info or 1min...))
   //String queryString = "?user_id=User1&temperature=" + String(temperature) + "&humidity=" + String(humidity) +"&weight=" + String(weight)+"&lastHumidityChange=" + String(lastHumidityChange)+"&lastTemperatureChange=" + String(lastTemperatureChange);
  RemoteXY_Handler();


   
  rtc.refresh();
  sprintf(RemoteXY.Calendar, "%04d-%02d-%02d %02d:%02d:%02d",rtc.year(), rtc.month(), rtc.day(),rtc.hour(), rtc.minute(), rtc.second());
 //update real time to RemoteXY.hour RemoteXY.minute RemoteXY.second ---- day month year? 



// Quality (temperature,humidity)  
   
  dtostrf(temperature(), 0, 0, RemoteXY.Info_T);
  dtostrf(humidity(), 0, 0, RemoteXY.Info_H);
  
  RemoteXY.onlineGraph_1 = quality();
  RemoteXY.circularbar_1 = quality();

/*
IMPLEMENT CALIBRATION
/*

   
// Give a treat
   if(RemoteXY.Treat){
   feed(100,200,0);
   }

/*
IMPLEMENT FEED----------------------
 */

/*
IMPLEMENT STORAGE GAUGE----------------
   float weight = scale.get_units();
   RemoteXY.Storage = weight..........?????
   MUST CONVERT FLOAT TO 0..100 level position 

*/
   // Read the raw value from the load cell
  long rawValue = scale.read();

  // Get the weight in units based on your calibration factor
  float weight = scale.get_units();

  // Print the raw value and weight to the Serial Monitor
  Serial.print("Raw Value: ");
  Serial.print(rawValue);
  Serial.print(", Weight: ");
  Serial.print(weight);
  Serial.println(" grams");


}
