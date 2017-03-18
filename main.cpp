#include <stdio.h>
#include <cstdint>
#include <math.h>
void enter() {
    for (int i = 0; i < 256; i++) {
        if ((i + 1) % 51 == 0)
            printf("%c\n", i);
        else
            printf("%c", i);
    }
}

void n(){
    for(int i = 1; i< 255; i = i + 2) {
        printf("%c", i);
    }
}

void sw(int a){
    switch(a){
        case 1:
            for(int i = 75; i > 64; i--)
                printf("%c\n", i);
            break;
        case 2:
            for(int i = 21; i < 41; i = i + 2) {
                int a = i;
                while (a > 21) {
                    printf(" ");
                    a = a - 1;
                }
                printf("%c\n", i);
            }
            break;
        case 3:
            for(int i = 50; i > 24; i--)
                printf("%c", i);
            break;
    }

}

int main() {
    enter();
    n();
    printf("\nВведите число от 1 до 3: ");
    int a;
    scanf("%d", &a);
    sw(a);


        return 0;
}