#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Define an appropriate struct
typedef struct {
	char date[11];
	char time[6];
	int steps;
} FITNESS_DATA;

// Define any additional variables here



// This is your helper function. Do not change it in any way.
// Inputs: character array representing a row; the delimiter character
// Ouputs: date character array; time character array; steps character array
void tokeniseRecord(const char *input, const char *delimiter,
                    char *date, char *time, char *steps) {
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
        strcpy(steps, token);
    }
    
    // Free the duplicated string
    free(inputCopy);

}

// Complete the main function

int main() {

    char* filename = "FitnessData_2023.csv";
    FILE *file = fopen(filename, "r");
    if (file == NULL) {
        printf("Error opening file\n");
        return 1;
    }
   
    int buffer_size = 999999;
    char line_buffer[buffer_size];

    
    int num = 10, i;
    
    
    FITNESS_DATA fit []= {fscanf(file, "%d", num)};

    for(int i = 0; i < num; i++){
        fscanf(file, "%s,%255[^,],%d", &fit[i].date, time, steps);
        printf("%s %s %d\n", fit[i].date, fit[i].time, fit[i].steps);
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


    //while (lin = 1){
       // rec = fgetc(file);
        //if (rec == '\n'){
          //  lin++;
       // } 
    // }
    
    //int linea = 0;
    //int dato;
    
    //while ((dato = fgetc(file)) != EOF && linea <3){
        //if (dato == '\n') linea++;
        //putchar(dato);
    //}
    
    
    
    //struct FITNESS_DATA fit

    //int lines=3,i;
    //FITNESS_DATA fit [] = {dato};
    //for (i = 0; i < lines; i++){
    //printf("%s/", fit[i].date);
    //printf("%s/", fit[i].time);
    //printf("%d/", fit[i].steps);
    //}
    
    //strcpy(fit.date, "124");
    //strcpy(fit.time, "132");
    //printf("%s/", fit.date);
    //printf("%s/", fit.time);

    fclose(file);
    return 0;
}