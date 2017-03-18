#include <stdio.h>
#include <cstdint>
#include <math.h>

void bin(int8_t b){
    for(int i=7;i>=0;i--)
        printf("%d", (b&int (pow(2,i))) ? 1 :0 );
}

int main() {
    bin((int8_t) 5);
    return 0;
}