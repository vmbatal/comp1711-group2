#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

#define buffer_size 999

typedef struct
{
    char date[20];
    float bloodIron;
} reading;

void tokeniseRecord(const char *input, const char *delimiter,
                    char *date, float *bloodIron)
{
    char *inputCopy = strdup(input);
    char *token = strtok(inputCopy, delimiter);
    
    if (token != NULL)
    {
        strcpy(date, token);
    }

    token = strtok(NULL, delimiter);
    if (token != NULL)
    {
        *bloodIron = atof(token);
    }
    free(inputCopy);
}

char line[buffer_size];

int getter(reading *d){
    
}