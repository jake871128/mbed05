#include "mbed.h"

Ticker time_up;
DigitalOut redLED(LED3);

void blink(){
    redLED = !redLED;
}

int main(){
    time_up.attach( &blink, 0.25 );
    while(1);
}