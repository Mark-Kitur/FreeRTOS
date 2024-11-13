// #include <Arduino.h>
// #include <IRremote.hpp>
// #define IR_RECEIVE_PIN 8

// void setup()
// {
//   Serial.begin(9600); // // Establish serial communication
//   IrReceiver.begin(IR_RECEIVE_PIN, ENABLE_LED_FEEDBACK); // Start the receiver
// }

// void loop() {
//   if (IrReceiver.decode()) {
//       Serial.println(IrReceiver.decodedIRData.decodedRawData, HEX); // Print "old" raw data
//       IrReceiver.printIRResultShort(&Serial); // Print complete received data in one line
//       IrReceiver.printIRSendUsage(&Serial);   // Print the statement required to send this data
//       if (IrReceiver.decode()){
//             if(IrReceiver.decodedIRData.decodedRawData==0xE916FF00){
//                 Serial.println("Button 1");
//                 //digitalWrite(light,0);
//             }
//             else if (IrReceiver.decodedIRData.decodedRawData==0xA55AFF00){
//                 Serial.println("Button 2");
//                 //digitalWrite(light,1);
//             }
            
//         }
//       delay(150);
//       IrReceiver.resume(); // Enable receiving of the next value
//   }
// }