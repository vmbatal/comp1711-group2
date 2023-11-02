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

    int lin = 0;
    char rec;

    while (rec != EOF){
        rec = fgetc(file);
        if (rec == '\n'){
            lin++;
        } 
    }  

    printf("Number of records in file: %d\n", lin);
    fclose(file);
    fopen(filename, "r");

    int lnum = 0;
    char line[80];
    const char coma[4] = ",";
    char* info;
    int infst;

    while (1) {
        fgets(line, 80,  file);
        if (feof(file))
            break;
            lnum++;
            info = strtok(line,coma);

        while (lnum<4){
            while (info != 0) {
                printf("%s/", info);
                info = strtok(0, coma);
                break;
                }

            while (info != 0) {
                printf("%s/", info);
                info = strtok(0, coma);
                break;
                }

            while (info != 0) {
                infst=atoi(info);
                info = strtok(0, coma);
                printf("%d\n", infst);
                break;
                }
    break;
    }}

fclose(file);
return 0;
}