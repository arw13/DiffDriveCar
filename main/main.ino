// Code for driving a robot car using an Arduno and an Adafruit V1.2 motor shield

// Initialize
#include <AFMotor.h>

 // Construct motor instancs
AF_DCMotor R1(1, MOTOR12_1KHZ); // create motor #1, 1KHz pwm
AF_DCMotor R2(2, MOTOR12_1KHZ); // create motor #2, 1KHz pwm
AF_DCMotor L3(3, MOTOR34_1KHZ); // create motor #3, 1KHz pwm
AF_DCMotor L4(4, MOTOR34_1KHZ); // create motor #4, 1KHz pwm

 
void setup() {
  Serial.begin(9600);           // set up Serial library at 9600 bps
  Serial.println("Motor test!");
  
  R1.setSpeed(128);     // set the speed to 200/255
  R2.setSpeed(128);     // set the speed to 200/255
  L3.setSpeed(128);     // set the speed to 200/255
  L4.setSpeed(128);     // set the speed to 200/255

}
 
void loop() {
  Serial.print("tick ");
  
  R1.run(FORWARD);      // turn it on going forward
  R2.run(FORWARD);      // turn it on going forward
  L3.run(FORWARD);      // turn it on going forward
  L4.run(FORWARD);      // turn it on going forward
  delay(1000);
  
 
  Serial.print("tock ");
  R1.run(BACKWARD);     // the other way
  R2.run(BACKWARD);     // the other way
  L3.run(BACKWARD);     // the other way
  L4.run(BACKWARD);     // the other way
  delay(1000);
  
  
  Serial.println("tack");
  R1.run(RELEASE);      // stopped
  R2.run(RELEASE);      // stopped
  L3.run(RELEASE);      // stopped
  L4.run(RELEASE);      // stopped
  delay(1000);
}
