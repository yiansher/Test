#include <stdio.h>
#include <stdlib.h>
#include "string.h"
#include "stdint.h"

int main(){
    uint8_t a,b;
    uint16_t c;
    a = 0x55;
    b = 0xaa;
    c = (a<<8)+b;
    printf("%x\n\r",c);	//only master's branch change
}
















