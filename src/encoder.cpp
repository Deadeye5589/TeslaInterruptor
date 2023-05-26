#include "encoder.h"

AiEsp32RotaryEncoder rotaryEncoder = AiEsp32RotaryEncoder(ROTARY_ENCODER_A_PIN, ROTARY_ENCODER_B_PIN, ROTARY_ENCODER_BUTTON_PIN, ROTARY_ENCODER_VCC_PIN, ROTARY_ENCODER_STEPS);


void IRAM_ATTR readEncoderISR(){
  rotaryEncoder.readEncoder_ISR();
}


void initEncoder() {
  pinMode(ROTARY_ENCODER_A_PIN, INPUT_PULLUP);
  pinMode(ROTARY_ENCODER_B_PIN, INPUT_PULLUP);
  rotaryEncoder.begin();
  rotaryEncoder.setup(readEncoderISR);
  rotaryEncoder.setBoundaries(0, 100, 0);
  rotaryEncoder.setAcceleration(10);
}


bool rotaryencoderchanged() {
    if (rotaryEncoder.encoderChanged())
        return true;
    else 
        return false;
}


bool rotaryencoderbuttonpressed() {
    static unsigned long lastTimePressed = 0;
    if (rotaryEncoder.isEncoderButtonClicked()) {    
        if (millis() - lastTimePressed < 500) {
            return false; //ignore multiple press in that time milliseconds
        }
        else {
            lastTimePressed = millis();
            return true;
        }       
    }
    else 
        return false;
}


uint16_t rotaryencodervalue() {
    return rotaryEncoder.readEncoder();
}