#include <stdio.h>
#include <stdlib.h>
#include <string.h>

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
    char* infotime;



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

int a;

printf("0 to st 1 to filenm 2 to date\n");
scanf ("%d", &a);

    switch (a)
    {
        case 0:     printf ("%d\n",infst);
        break;

        case 1:     printf ("%s\n",filename);
        break;

        case 2:     printf ("%s\n",info);
        break;

        case 3:     printf ("%s\n",infotime);
        break;

        default:    printf ("That is not a valid option\n");
    }

fclose(file);
return 0;
}