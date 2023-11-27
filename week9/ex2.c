#include <stdio.h>

int main()
{
    int vector[5] = {11,13,17, 23 , 31};

    int* address = vector;
    
    int count = 0;
    
    while(count<5){
    printf("Address = %d\n", *(++address));
    count++;
}}