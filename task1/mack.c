#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
	char date[11];
	char time[6];
	char steps[8];
} FITNESS_DATA;

void tokeniseRecord(const char *input, const char *delimiter,
                    char *date, char *time, char *steps) {
    char *inputCopy = strdup(input);
    
    char *token = strtok(inputCopy, delimiter);
    if (token != NULL) {        strcpy(date, token);
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

    char* filename = "FitnessData_2023.csv";
    FILE *file = fopen(filename, "r");
    if (file == NULL) {
        printf("Error opening file\n");
        return 1;
    }
   
    int buffer_size = 999999;
    char line_buffer[buffer_size];

FITNESS_DATA fit[90];

char input[30];
int records = 100, i;

fscanf(file,"%s,%16[^,],%s,\n",
fit[records].date, fit[records].time, fit[records].steps);
    
    while(!feof(file)) {
        fscanf(file, "%s", &date[records]);
        records++;
    }
    
    puts("");
    for(i = 0; i < (records - 1); i++) {
        puts(date[i]);
    }
    
    
    //char input[88];
    //char date[10];
    //char time[6];
    //char steps[8];

    //tokeniseRecord(input,",",date,time,steps);
    
    //printf("%s/", date);
    //printf(",]", fit[records].time);
    //printf("%d/", steps);

    fclose(file);
    return 0;
}