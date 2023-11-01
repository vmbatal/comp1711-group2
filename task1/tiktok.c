#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_LINE_SIZE 1000

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
//char *nxf;
char line[MAX_LINE_SIZE+1];

  while (1) {
    fgets(line, MAX_LINE_SIZE, file);
    if (feof(file))  
      break;
    lnum++;
    //nxf = strtok(line, "");
    
    const char coma[4] = ",";
    char* tok;
 
    //char *dgm = (nxf=",");
    //int zarasa=atoi(dgm); 
 
    tok = strtok(line, coma);
 
    //int lin2 = 0;
    //char rec2;

    while (lnum<4){
        while (tok != 0) {
            printf("%s/", tok);
            tok = strtok(0, coma);
            break;
        }

        while (tok != 0) {
            printf("%s/", tok);
            tok = strtok(0, coma);
            break;
        }

        while (tok != 0) {
            printf("%s", tok);
            tok = strtok(0, coma);
            break;
        }
    break;
    }
    //tok = strtok(date, coma);
    
    //while (tok != 0) {
    //printf("%s\n", tok);
    //if (nxf = ""){
    //printf("dgm");
    //tok = strtok(0, coma);
    
    //}
    //}
    
    
  }

  fclose(file);
return 0;
}