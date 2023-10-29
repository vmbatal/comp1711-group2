// fit[i].sa = strdup(sa);
        // fit[i].sb = strdup(sb);    
    
    
    
    char input[38];
    char date[11];
    char time[6];
    char steps[10];
    
    //tokeniseRecord(input,",",date,time,steps);

    //int lines=3,i;
    //FITNESS_DATA fit [] = {*date,*time,*steps};
    //for (i = 0; i < lines; i++){
    //printf("%s/", fit[i].date);
    //printf("%s/", fit[i].time);
    //printf("%d/", fit[i].steps);
    //}

    //printf("%s/", date);
    //printf("%s/", time);
    //printf("%s/", steps);


    
    
    
    int max = 0;
    int content;
    int date;
    int steps;

while ((content = fgetc(file)) != EOF && max < 10) {
        if (content == ',') max++;
        putchar(content);
        
            while ((date = fgetc(file)) !=EOF && max <= 20) {
                if (date == ',') max++;
                putchar(date);
                }
                while ((steps = fgetc(file)) !=EOF && max < 10) {
                    if (steps == ',') max++;
                    putchar(steps);
                    }
            

    }




while (lin<4){
        printf("%s/", date);
        printf("%s/", time);
        printf("%d/", steps);
    }


        while (lin < 4){
        rec = fgetc(file);
        if (rec == '\n'){
        lin++;}};














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








        char* filename = "FitnessData_2023.csv";
    FILE *file = fopen(filename, "r");
    if (file == NULL) {
        printf("Error opening file\n");
        return 1;
    }
    int buffer_size = 100;
    char line_buffer[buffer_size];
    while (fgets(line_buffer, buffer_size, file) != NULL)
    {
        printf("%s", line_buffer);
    }

     //FITNESS_DATA = {2023-09-01,08:15,150};







     
    fclose(file);
    return 0;