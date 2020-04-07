#include "mbed.h"

Ticker time_up;
DigitalOut LED(LED3);

void blink(){
    LED = !LED;
}

int main(){
    time_up.attach( &blink, 0.5 );
    while(1);
}