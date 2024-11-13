// #include <Arduino.h>
// #include <Arduino_FreeRTOS.h>

// #define X A0
// #define pot A5

// void readX(void *pvParameters){
//     Serial.begin(9600);
    
//     for(;;){
//         int read= analogRead(X);
//         Serial.print("For Joystick::");
//         Serial.println(read);
//         vTaskDelay(1000/portTICK_PERIOD_MS);
//     }
    
// }

// void readPot(void *pvParameters){
//     Serial.begin(9600);
    
//     for(;;){
//         int soma= analogRead(pot);
//         Serial.print("For Pot::");
//         Serial.println(soma);
//         vTaskDelay(1000/portTICK_PERIOD_MS);
//     }
// }

// void setup(){
//     xTaskCreate(
//         readX,
//         "readX",
//         256,
//         NULL,
//         1,
//         NULL
//     );
//     xTaskCreate(
//         readPot,
//         "readPot",
//         256,
//         NULL,
//         2,
//         NULL
//     );
// }

// void loop(){

// }
