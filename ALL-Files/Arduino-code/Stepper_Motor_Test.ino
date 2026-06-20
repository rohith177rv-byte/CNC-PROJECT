//Built by Rohith & Shahid

#include <AFMotor.h>
// to motor port #1 (M1 and M2) #2 (M3 and M4)
AF_Stepper motor(200, 2);

void setup() {
  // set up Serial library at 9600 bps
  Serial.begin(9600);
  Serial.println("Stepper test!");
  motor.setSpeed(50); // 40 rpm
}

void loop() {
  Serial.println("Micrsostep steps");
  motor.step(100, FORWARD, MICROSTEP);
  motor.step(100, BACKWARD, MICROSTEP);
  motor.step(250, FORWARD, MICROSTEP);
  motor.step(250, BACKWARD, MICROSTEP);
  delay(1000);
}
