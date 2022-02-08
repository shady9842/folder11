#include <stdio.h>

int main(){
    float principal, time,  rate;
    //time should always be in years
    
    printf("Please enter the principal, time and rate for calculation.\n");
    scanf("%f %f %f", &principal, &time, &rate);
    printf("Your interest amount is %f", principal*time*rate/100);
    return 0;
}