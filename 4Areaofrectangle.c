#include <stdio.h>

int main(){
    int length, breadth;
    printf("What is the length of rectangle?\n");
    scanf("%d", &length);
    printf("What is the breadth of rectangle?\n");
    scanf("%d", &breadth);
    int area= length*breadth;
    printf("The area of your rectangle is %d", area);
    return 0;
}