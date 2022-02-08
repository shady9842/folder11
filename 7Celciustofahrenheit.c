#include <stdio.h>

int main(){
    int celsius;
    printf("What is the temperature of the body in celsius?\n");
    scanf("%d", &celsius);
    printf("The temperature of the body in Fahrenheit is %f", 32+celsius*1.8);
    return 0;
}