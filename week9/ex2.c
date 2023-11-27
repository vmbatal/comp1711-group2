#include <stdio.h>

int main()
{
    int vector[5] = {13,11,17, 23 , 31};

    int* address = vector;
    
    int count = 0;
    
    while(count<5){
        if (vector > address){
    printf("Address = %d\n", *(address++));
        }
    count++;
}}