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

while (1)
{
    options();
    a = getchar();
    while (getchar() != '\n');

    switch (a)
    {
        case 'A': 
        printf("Input filename: ");
        fgets(line, buffer_size, stdin);
        sscanf(line, " %s ", filename);
        FILE *file = fopen(filename, "r");
        if (file == NULL) {
            printf("Error: Could not find or open the file.\n");
            return 1;
        }
        printf("File successfully loaded.\n");       
        break;

        case 'B':     
        fopen(filename, "r");
        nrecords(file);
        fclose(file);
        break;
    
        case 'C':
        fopen(filename, "r");
        min(file);
        fclose(file);
        break;

        case 'D':
        fopen(filename, "r");
        max(file);
        fclose(file);
        break;

        case 'E':
        fopen(filename, "r");
        means(file);
        fclose(file);
        break;

        case 'F':
        fopen(filename, "r");
        stepperiod(file);
        fclose(file);
        break;

        case 'Q':
        return 0;
        break;

        default:    printf ("Invalid choice. Try again.\n");
    }

}}