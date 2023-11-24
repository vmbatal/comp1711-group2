#include "FitnessDataStruct.h"

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "FitnessDataStruct.h"

void tokeniseRecord(const char *input, const char *delimiter, char *date, char *time, char *steps) {

    char *inputCopy = strdup(input);
    char *token = strtok(inputCopy, delimiter);
    if (token != NULL) {
        strcpy(date, token);
    }
    
    token = strtok(NULL, delimiter);
    
    if (token != NULL) {
        strcpy(time, token);
    }
    
    token = strtok(NULL, delimiter);
   
    if (token != NULL) {
        strcpy(steps, token);
    }
    
    free(inputCopy);
}

int main() {

char a;

fits fit[100];
char line[buffer_size];



FILE *file = fopen("marks.txt", "r");
    if (file == NULL) {
        printf("Error opening the file.\n");
        return 1;
    }

        printf("A: Specify the filename to be imported\n");       
        printf("B: Display the total number of records in the file\n");          
        printf("C: Find the date and time of the timeslot with the fewest steps\n");           
        printf("D: Find the date and time of the timeslot with the largest number of steps\n");        
        printf("E: Find the mean step count of all the records in the file\n");
        printf("F: Find the longest continuous period where the step count is above 500 steps\n");
        printf("Q: Quit\n");

        a = getchar();
        while (getchar() != '\n');

        switch (a)
        {
            case "A":     printf ("\n");
            break;

            case "B":     printf ("\n");
            break;

            case "C":     printf ("\n");
            break;

            case "D":     printf ("\n");
            break;

            default:    printf ("That is not a valid option\n");
        }

}