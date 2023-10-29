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
    //while (fgets(line_buffer, buffer_size, file) != NULL)
    //{
        //printf("%s", line_buffer);
    //}
    
    int lin;
    int rec = 0;

    //while ((lin=getc(file)) !=EOF){
       // if (lin == '\0')
           // rec ++;
    //}

    while (EOF != (fscanf(file, "%*[^\n]"), fscanf(file,"%*c"))){
        ++rec;
    }

    printf("Number of records in file: %d\n", rec);

    //tokeniseRecord(record, date, time, steps);
    
    //int num = input, i;
    //while (fgets(line_buffer, buffer_size, file) != NULL) {
        //num = atoi(input);
        //}

    //int num = line_buffer, i;
    
    //FITNESS_DATA fit [] = {};
    //printf("Number of records in file: %u\n", num);
    
    //for (i = 0; i < num; i++) {
    //printf("date: %s\n", fit[i].date);
    //printf("time: %s\n", fit[i].time);
    //printf("steps: %u\n", fit[i].steps);
    //}
    
    fclose(file);
    return 0;
}