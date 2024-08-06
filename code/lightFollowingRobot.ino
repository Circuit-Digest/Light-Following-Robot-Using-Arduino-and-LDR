```cpp
/*
  Light-Seeking Robot Using LDRs and Motors

  Features:
  - Uses two Light Dependent Resistors (LDRs) to detect light levels.
  - Controls two motors to move towards the light source.
  - Moves straight when both LDRs detect the same light level.
  - Turns left or right based on which LDR detects more light.
  - Stops if neither LDR detects sufficient light.

  Working:
  - The LDRs are connected to digital pins and read light intensity.
  - Depending on the readings from the LDRs, the motors are controlled to move the robot towards the light.
  - The robot adjusts its direction by comparing the light intensity detected by the left and right LDRs.
*/

// Define pins for the Left and Right LDRs
#define LeftLDR 8
#define RightLDR 9

// Define pins for the Left and Right Motors
#define LeftMotor 10
#define RightMotor 11

// Define the motor speed (0-255)
#define MotorSpeed 255

void setup() {
  Serial.begin(115200);

  // Set LDR pins as input
  pinMode(LeftLDR, INPUT);
  pinMode(RightLDR, INPUT);

  // Set motor pins as output
  pinMode(LeftMotor, OUTPUT);
  pinMode(RightMotor, OUTPUT);
}

void loop() {
  // If both LDRs detect light, move forward
  if (!digitalRead(LeftLDR) && !digitalRead(RightLDR)) {
    digitalWrite(LeftMotor, MotorSpeed);
    digitalWrite(RightMotor, MotorSpeed);
  }
  // If only the left LDR detects light, turn right
  else if (!digitalRead(LeftLDR)) {
    digitalWrite(LeftMotor, 0);
    digitalWrite(RightMotor, MotorSpeed);
  }
  // If only the right LDR detects light, turn left
  else if (!digitalRead(RightLDR)) {
    digitalWrite(LeftMotor, MotorSpeed);
    digitalWrite(RightMotor, 0);
  }
  // If neither LDR detects light, stop
  else {
    digitalWrite(LeftMotor, 0);
    digitalWrite(RightMotor, 0);
  }
}
```
