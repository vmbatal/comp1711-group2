#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
	char date[11];
	char time[6];
	int steps;
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

int main(){

char* filename = "FitnessData_2023.csv";
    FILE *file = fopen(filename, "r");
    if (file == NULL) {
        printf("Error opening file\n");
        return 1;
    }
   
    int buffer_size = 999999;
    char line_buffer[buffer_size];

FITNESS_DATA fit[90];

int read = 0;
int records = 0;

do{
read = fscanf(file,"%s,%5[^n],%d\n",
fit[records].date, fit[records].time, &fit[records].steps);
    
        records++;
    //}
}while (!feof(file));

printf("\n%d records read.\n\n", records);



for (int i = 0; i<records; i++){
    printf("%s/%s/%d",
    fit[i].date, fit[i].time, fit[i].steps);
}

fclose(file);
return 0;
}