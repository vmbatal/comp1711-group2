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

int ct = 0;
int f;
int ithen;
char datethen;
char timethen;
char a;
char line[buffer_size];
char filename[buffer_size];
fits fit[100];

while (1)
{

printf("A: Specify the filename to be imported\n");       
printf("B: Display the total number of records in the file\n");          
printf("C: Find the date and time of the timeslot with the fewest steps\n");           
printf("D: Find the date and time of the timeslot with the largest number of steps\n");        
printf("E: Find the mean step count of all the records in the file\n");
printf("F: Find the longest continuous period where the step count is above 500 steps\n");
printf("Q: Quit\n");
printf("Enter choice: ");

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
        nrecords(file);
        break;
    
        case 'C':     printf ("\n");
            ct = 0;
            while (fgets(line, buffer_size, file))
            {
                tokeniseRecord(line, ",", fit[ct].date, fit[ct].time, fit[ct].steps);
                int sts = atoi(fit[ct].steps);
                int a = sts;
                ct++;
                int b = sts;
                if (b <= a){
                    f = b;               
                }
            }
            for (int i = 0; i < ct; i++){
                if (f<15) 
                //hay que hacer f un pointer
                {
                printf("Fewest steps: %s %s", fit[i].date, fit[i].time);
            }}
        fclose(file);
        break;

        case 'D':     printf ("\n");
        break;

        case 'Q':
        return 0;
        break;

        default:    printf ("Invalid choice. Try again.\n");
    }

}}