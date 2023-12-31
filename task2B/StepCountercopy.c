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
int ithen = 0;
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
        fopen(filename, "r");
        nrecords(file);
        fclose(file);
        break;
    
        case 'C':     printf ("\n");
        fopen(filename, "r");
        ct = 0;
        while (fgets(line, buffer_size, file))
        {
            tokeniseRecord(line, ",", fit[ct].date, fit[ct].time, fit[ct].steps);
            int sts = atoi(fit[ct].steps);
            int ststhen = atoi(fit[ct-1].steps);
            printf("then: %d\n",ststhen);
            printf("now: %d\n",sts);
            if (ct != 0){
                if (sts <= ststhen){
                    printf("%d\n", sts);
                    ithen=ct;
                }}
            else (sts > ststhen);
            ct++;
        }
        printf("Fewest steps: %s %s\n", fit[ithen].date, fit[ithen].time);
        fclose(file);
        break;

        case 'D':     printf ("\n");
        fopen(filename, "r");
        ct = 0;
        ithen = 0;
            while (fgets(line, buffer_size, file))
            {
                tokeniseRecord(line, ",", fit[ct].date, fit[ct].time, fit[ct].steps);
                int sts = atoi(fit[ct].steps);
                int ststhen = atoi(fit[ct-1].steps);
                int ststop = atoi(fit[ithen].steps);
                printf("then: %d\n",ststhen);
                printf("now: %d\n",sts);
                if (ct != 0){
                    if (sts >= ststhen){
                        printf("%d\n", sts); 
                            if (sts >= ststop){
                                printf("max: %d\n", sts);
                                ithen=ct;
                }}}
                else (sts < ststhen);
                ct++;
            }
        printf("Most steps: %s %s\n", fit[ithen].date, fit[ithen].time);
        fclose(file);
        break;

        case 'E':     printf ("\n");
        fopen(filename, "r");
        ct = 0;
        ithen = 0;
        int tot = 0;
            while (fgets(line, buffer_size, file))
            {
                tokeniseRecord(line, ",", fit[ct].date, fit[ct].time, fit[ct].steps);
                int sts = atoi(fit[ct].steps);
                int ststhen = atoi(fit[ct-1].steps);
                printf("then: %d\n",ststhen);
                printf("now: %d\n",sts);
                if (ct != 0){
                    tot = tot + sts + ststhen;
                    printf("%d\n", tot); 
                }
                else (sts != 0);
                ct++;
            }
        int mean = tot/ct;  
        printf("Mean steps: %d\n", mean);
        fclose(file);
        break;

        case 'F':     printf ("\n");
        fopen(filename, "r");
        ct = 0;
        ithen = 0;
        int period = 0;
        int topperiod = 0;
        int ithenstart = 0;   
            
            while (fgets(line, buffer_size, file))
            {
                tokeniseRecord(line, ",", fit[ct].date, fit[ct].time, fit[ct].steps);
                int sts = atoi(fit[ct].steps);
                printf("now: %d\n",sts);
                if (sts <= 500){
                        period = 0;
                        printf("%d\n", period);
                    }
                else (ct != 0);
                if (sts > 500){ 
                    period++;
                    printf("%d\n", period);
                    if (period > topperiod){
                        topperiod++;
                        printf("top: %d\n", topperiod);
                        ithen=ct;
                        ithenstart = ithen - (topperiod-1);
                        printf("ithen: %d\n", ithen);
                        printf("istart: %d\n", ithenstart);
                        }
                else (sts != 0);
                ct++;
            printf("ct: %d\n", ct);
            }}
        printf("Longest period start: %s %s\n", fit[ithenstart].date, fit[ithenstart].time);
        printf("Longest period end: %s %s\n", fit[ithen].date, fit[ithen].time);
        fclose(file);
        break;

        case 'Q':
        return 0;
        break;

        default:    printf ("Invalid choice. Try again.\n");
    }

}}