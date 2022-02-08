#include <stdio.h>

int main(){
    int radius;
    int height;
    float pi=3.14;
    printf("What is the radius of your circle?\n");
    scanf("%d", &radius);
    printf("What is the height of your circle?\n");
    scanf("%d", &height);
    printf("The volume of your cylinder is %f", pi*radius*radius*height);
    return 0;
}