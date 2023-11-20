#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

#define buffer_size 100

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

FILE *open_file(char *filename,char *mode){}


char line[buffer_size];
FILE *input;

int read(FILE *inputFile, reading *d, int counter, char *line)
{
    while (fgets(line, buffer_size, input))
    {
        tokeniseRecord(line, ",", d[counter].date, &d[counter].bloodIron);
        counter++;
    }
        for (int i = 0; i < counter; i++)
        {
            printf("%s - Blood iron: %.1f\n", d[i].date, d[i].bloodIron);
        }
    fclose(input);
}

int data_checker(reading *dataArray, int numReadings)
{
    // to do
}

float find_mean(reading* d, int counter, char *line, float mean)
{   
    tokeniseRecord(line, ",", d[counter].date, &d[counter].bloodIron);
    mean += d[counter].bloodIron;
    counter++;
        
    mean /= counter;
    printf("Your average blood iron was %.2f\n", mean);
    fclose(input);
}

float find_highest(reading* dataArray, int numReadings)
{
    // to do
}

float find_lowest(reading* dataArray, int numReadings)
{
    // to do
}

void monthly_iron(reading* dataArray, int numReadings)
{
    // to do
}