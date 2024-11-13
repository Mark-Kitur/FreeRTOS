#include <Arduino.h>
#include <Servo.h>
#include <Arduino_FreeRTOS.h>
#include <task.h>
#include <Wire.h>

#define potpin A3
#define X A0
#define Y A1
#define S 13
#define pinServo 9
#define led 3
#define light 10
#define channel 13


void receiveEvent(int num);
byte leds = 0;
int latchpin = 5;
int clokpin = 6;  // Ensure no conflict with 'blue' LED pin
int datapin = 4;

void updateShiftRegister();

void updateShiftRegister() {
  digitalWrite(latchpin, LOW);
  shiftOut(datapin, clokpin, LSBFIRST, leds);
  digitalWrite(latchpin, HIGH);
}

Servo myservo;

// I2C Task
int read;
void receiveEvent(int num){
  read=Wire.read();
}
void IR(void *parameters) {
  pinMode(led,OUTPUT);                  
  Wire.begin(channel);
  Wire.onReceive(receiveEvent);
  for (;;) {
    if (read==1){
      digitalWrite(led,1);
      Serial.println(read);
      //vTaskDelay(400/portTICK_PERIOD_MS);
    }
    else if (read==0)
    {
      Serial.println(read);
      digitalWrite(led,0);
    }
    
  }
}

// Shifter Task
void shifter(void *parameters) {
  pinMode(latchpin, OUTPUT);
  pinMode(clokpin, OUTPUT);
  pinMode(datapin, OUTPUT);

  for (;;) {
    int read_pot = analogRead(potpin);
    int pot = map(read_pot, 0, 1023, 0, 180);
    Serial.print("Shifter delay value: ");
    Serial.println(pot);
    leds = 0;
    updateShiftRegister();
    vTaskDelay(pot / portTICK_PERIOD_MS);

    for (int y = 0; y < 8; y++) {
      bitSet(leds, y);
      updateShiftRegister();
      vTaskDelay(pot / portTICK_PERIOD_MS);
    }
  }
}
// Remote Task

void setup() {
  Serial.begin(9600); 
  xTaskCreate(IR, "IR_I2C", 128, NULL, 1, NULL);
  xTaskCreate(shifter, "Shifter", 128, NULL, 2, NULL);
}

void loop() {
  // Empty loop
}
