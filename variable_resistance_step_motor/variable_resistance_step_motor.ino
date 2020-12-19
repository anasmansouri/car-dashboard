#include <Stepper.h>

// change this to the number of steps on your motor
#define STEPS 100

// create an instance of the stepper class, specifying
// the number of steps of the motor and the pins it's
// attached to
Stepper stepper(STEPS, 10, 11, 12, 13);

// the previous reading from the analog input
int previous = 0;
int steps=0;
void setup()
{
  // set the speed of the motor to 30 RPMs
  stepper.setSpeed(30);
  Serial.begin(9600);
}

void loop()
{
  // get the sensor value
  int val = analogRead(0);

  steps = val - previous ;
        Serial.println(steps);

  /*if (steps > 4 || steps < -4){
    // move a number of steps equal to the change in the
      stepper.step(-200);
      // remember the previous value of the sensor
      previous = val;
      delay(1000);
  }*/
        stepper.step(-200);

  
}
