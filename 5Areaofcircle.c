#include <stdio.h>

int main(){
    int radius;
    float pi=3.14;
    printf("What is the radius of your circle?\n");
    scanf("%d", &radius);
    
    printf("The area of your circle is %f", pi*radius*radius);
    return 0;
}