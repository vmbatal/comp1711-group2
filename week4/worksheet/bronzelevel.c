#include <stdio.h>
#include "utils.h"

int main () {
    char* filename = "squares.dat";
    FILE *file = open_file(filename, "w");

    int num = 1;
    int squar = num * num;
    int input;

    printf("Type a number\n");
    scanf("%d\n",&input);

    while(num <= input){
    
    for (num; num++;){
        printf("%d, %d",num, squar);
    }
    }
    
    // fprintf(file,"Hello World!\n");

    fclose(file);
    return 0;
}
