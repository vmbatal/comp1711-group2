#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void tokeniseRecord(const char *input, const char *delimiter,
                    char *date, char *time, char *classtime, char *steps) {
    // Create a copy of the input string as strtok modifies the string
    char *inputCopy = strdup(input);
    
    // Tokenize the copied string
    char *token = strtok(inputCopy, delimiter);
    if (token != NULL) {        strcpy(date, token);
    }
    
    token = strtok(NULL, delimiter);
    if (token != NULL) {
        strcpy(time, token);
    }
    
     token = strtok(NULL, delimiter);
    if (token != NULL) {
        strcpy(classtime, token);
    }

    token = strtok(NULL, delimiter);
    if (token != NULL) {
        strcpy(steps, token);
    }
    
    // Free the duplicated string
    free(inputCopy);

}

int main() {
    char record[38] = "2023-10-20,11:48,1h 48m,9000";
    char date[11];
    char time[6];
    char classtime[10];
    char steps[10];  // Large enough to hold a typical step count as a string

    int stepsint;
    
    tokeniseRecord(record, ",", date, time, classtime, steps);
    
    printf("Date: %s\n", date);
    printf("Time: %s\n", time);
    printf("Time at class: %s\n", classtime);
    printf("Goku KI: over %s\n", steps);

    // Convert the steps string to an integer
    stepsint = atoi(steps);
    printf("KI as an integer: %d\n", stepsint);
    
    return 0;
}