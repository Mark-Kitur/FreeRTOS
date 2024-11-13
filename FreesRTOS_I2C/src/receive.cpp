// #include <Arduino.h>
// #include <Wire.h>

// #define channel 13
// int led=3;
// int read;
// void receiveEvent();
// void setup(){
//     pinMode(led,OUTPUT);
//     Serial.begin(9600);
//     Wire.begin(channel);
//     Wire.onReceive(receiveEvent);
// }
// void receiveEvent(){
//     read =Wire.read();

// }
// void loop(){
//     if (read==1){
//         Serial.println(read);
//         digitalWrite(led, HIGH);
//         delay(200);
//         digitalWrite(led,LOW);
//         delay(400);
//     }
// }