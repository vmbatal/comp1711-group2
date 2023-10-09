#include <stdio.h>
int main(){

    float length, width, area;
    
    printf("Welcome to AREACALC 7.0.1. Let's calculate! To calculate the area of a rectangle, please put its length: ");
    scanf("%f", &length);
    printf("Now put the width: ");
    scanf("%f", &width);
    area = length * width;
    printf("The area of that rectangle is %.4f" ,area);

    return 0;


}