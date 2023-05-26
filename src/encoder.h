#pragma once
#include <AiEsp32RotaryEncoder.h>

/*Define Volume Encoder Pins and Classes*/
#define ROTARY_ENCODER_A_PIN 44
#define ROTARY_ENCODER_B_PIN 18
#define ROTARY_ENCODER_BUTTON_PIN 43
#define ROTARY_ENCODER_VCC_PIN -1
#define ROTARY_ENCODER_STEPS 2

/*Encoder functions*/
void IRAM_ATTR readEncoderISR();
void initEncoder();
bool rotaryencoderchanged();
bool rotaryencoderbuttonpressed();
uint16_t rotaryencodervalue();