#include <Arduino.h>
/**
 * @file main.cpp
 * @brief Embedded RGB LED Control (Digital + PWM)
 * @author Shreya Sharma
 * @date 2026-02-20
 *
 * @details
 * Controls RGB LED using digital ON/OFF
 * and analog PWM brightness control.
 */

#define RED_PIN 9
#define GREEN_PIN 10
#define BLUE_PIN 11




Serial.begin(9600);

pinMode(RED_PIN, OUTPUT);
pinMode(GREEN_PIN, OUTPUT);
pinMode(BLUE_PIN, OUTPUT);



Serial.println("RGB LED System Initialized");

digitalWrite(RED_PIN, HIGH);
delay(1000);

digitalWrite(RED_PIN, LOW);
delay(1000);
