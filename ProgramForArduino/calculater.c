// Define the analog input pin for the ACS712 sensor
const int ACS712_PIN = A0;

// Define the number of samples to take for the average
const int NUM_SAMPLES = 50;

// Define the voltage of your power supply (in volts)
const float SUPPLY_VOLTAGE = 5.0;

// Define the sensitivity of the ACS712 sensor (in millivolts per ampere)
const float ACS712_SENSITIVITY = 185.0;

// Define the RMS voltage of the AC power supply (in volts)
const float AC_VOLTAGE_RMS = 220.0;

// Define the cost of electricity per unit in THB
const float ELECTRICITY_COST_PER_UNIT = 3.5;

void setup() {
  // Initialize the serial port
  Serial.begin(9600);
}

void loop() {
  // Take the average of several readings from the ACS712 sensor
  int sensorValue = 0;
  for (int i = 0; i < NUM_SAMPLES; i++) {
    sensorValue += analogRead(ACS712_PIN);
    delay(2);
  }
  sensorValue /= NUM_SAMPLES;

  // Convert the sensor reading to a current measurement (in amperes)
  float current = (sensorValue - 512.0) * (SUPPLY_VOLTAGE / 1024.0) / ACS712_SENSITIVITY;

  // Calculate the power being consumed by the load (in watts)
  float power = current * AC_VOLTAGE_RMS;

  // Convert the power consumption to THB
  float power_in_kWh = power / 1000.0 / 60.0 / 60.0; // convert from watts to kWh
  float cost_in_THB = power_in_kWh * ELECTRICITY_COST_PER_UNIT;

  // Print the current and power measurements to the serial monitor
  Serial.print("Current: ");
  Serial.print(current, 3);
  Serial.print(" A | Power: ");
  Serial.print(power, 3);
  Serial.print(" W | Cost: ");
  Serial.print(cost_in_THB, 2);
  Serial.println(" THB");

  // Wait for a moment before taking the next reading
  delay(500);
}