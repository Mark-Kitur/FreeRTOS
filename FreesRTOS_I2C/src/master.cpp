// #include <Arduino.h>
// #include <Wire.h>
// #include <IRremote.hpp>
// #define IR_RECEIVE_PIN 8
// #define channel 13
// void setup(){
//     IrReceiver.begin(IR_RECEIVE_PIN,ENABLE_LED_FEEDBACK);
//     Serial.begin(9600);
//     Wire.begin();
// }   
// void loop(){
//     if (IrReceiver.decode()){
//         if(IrReceiver.decodedIRData.decodedRawData ==0xE916FF00){
//             Serial.println("OFF");
//             Wire.beginTransmission(channel);
//             Wire.write(0);
//             delay(100);
//             Wire.endTransmission();
//         }
//         else if (IrReceiver.decodedIRData.decodedRawData ==0xA55AFF00){
//             Serial.println("ONN");
//             Wire.beginTransmission(channel);
//             Wire.write(1);
//             delay(100);
//             Wire.endTransmission();
//             }
//     delay(100);
//     IrReceiver.resume();
//     }
// }


