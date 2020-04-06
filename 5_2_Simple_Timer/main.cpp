#include "mbed.h"

Timer t;
Serial pc( USBTX, USBRX );

int main(){
    t.start();
    pc.printf("Hello from the other side\r\n");
    //wait(1);
    t.stop();
    pc.printf("The time taken was %f seconds\r\n", t.read());
}