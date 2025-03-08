#include <Servo.h> 
 
// Define pin assignments for components 
#define gas_sensor  A0 
#define buzzer      8 
#define fan         10 
 
int sensor_value;  // Variable to store gas sensor readings 
Servo servo;       // Servo motor object for controlling the gas supply regulator 
 
void setup() { 
  // Serial.begin(9600);  // Can uncomment this line if we want to use serial communication for 
debugging 
  pinMode(buzzer, OUTPUT);  // Set buzzer pin as output 
  pinMode(fan, OUTPUT);     // Set fan pin as output 
  servo.attach(9);          // Attach servo motor to pin 9 on the Arduino 
  servo.write(2);           // Set the initial position of the servo (regulator on) 
} 
 
void loop() { 
  sensor_value = analogRead(gas_sensor);  // Read analog value from the gas sensor 
  Serial.println(sensor_value);           // Print the sensor value (for debugging, comment out for final 
version) 
 
  if (sensor_value > 250) { 
    // If gas concentration is above a threshold (adjust 250 based on sensitivity), trigger alarm and 
safety measures 
    digitalWrite(buzzer, HIGH);  // Turn on the buzzer for audible alert 
    digitalWrite(fan, HIGH);     // Turn on the fan for safety (dispersing excess gas) 
    servo.write(130);             // Move the servo to close the gas supply regulator (shutting off the gas) 
  } else { 
    // If gas concentration is below the threshold, turn off alarm and safety measures 
    digitalWrite(buzzer, LOW);   // Turn off the buzzer 
    digitalWrite(fan, LOW);      // Turn off the fan 
    servo.write(5);               // Move the servo to the initial position (regulator on) 
  } 
 
  delay(500);  // Delay to control the rate of sensor readings and actions (adjust as needed) 
}