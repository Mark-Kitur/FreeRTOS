// #include <Arduino.h>
// #include <Stepper.h>

// #define pot A5
// const int stepsPerReno=100;
// Stepper myStepper=Stepper(stepsPerReno,2,4,3,5);

// void setup(){

// }

// void loop(){
//     int potValue = analogRead(pot);
//     int mapped_pot= map(potValue,0,1023,0,100);
//     if (mapped_pot>0){
//         myStepper.setSpeed(mapped_pot);
//         myStepper.step(stepsPerReno/100);
//     }
// }