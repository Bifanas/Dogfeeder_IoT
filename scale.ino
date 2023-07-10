
#include <HX711.h>

// Define the pins connected to the HX711 module
const int LOADCELL_DT_PIN = 27;
const int LOADCELL_SCK_PIN = 26;

// Create an instance of the HX711 library
HX711 scale;

void setup() {
  Serial.begin(115200);
  
  // Initialize the HX711 module
  scale.begin(LOADCELL_DT_PIN, LOADCELL_SCK_PIN);
  
  // Set the calibration factor for your specific load cell
  // You can calibrate it by placing a known weight and adjusting this value
  scale.set_scale(100); // Replace 1000 with your calibration factor

  // Tare the scale to remove any existing weight
  scale.tare();
}

void loop() {
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

  delay(1000); // Delay for 1 second before reading again
}