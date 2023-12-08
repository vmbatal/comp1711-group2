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
    
printf("Enter filename: ");
fgets(line, buffer_size, stdin);
sscanf(line, " %s ", filename);
FILE *file = fopen(filename, "r");
if (file == NULL) {
    printf("Error: Could not find or open the file.\n");
    return 1;
}


char* newfile = "FitnessData_2023.csv.tsv";
    FILE *file2 = fopen (newfile, "w");
    if (file2 == NULL) {
        printf("Error opening file\n");
        return 1;
    }

while (fgets(line, buffer_size, file))
{
    tokeniseRecord(line, ",", fit[ct].date, fit[ct].time, fit[ct].steps);
    nullcheck(file,ct);
    if (nul>0){
        return 1;
    }
    int sts = atoi(fit[ct].steps);
    stsarray[ct] = sts;
    fprintf(file2, "%s\t%s\t%d\n", fit[ct].date, fit[ct].time, stsarray[ct]);
    ct++;
}
printf("Data sorted and written to FitnessData_2023.csv.tsv\n");
fclose(file2);
}