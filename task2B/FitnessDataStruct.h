#include <stdio.h>
#define buffer_size 100

typedef struct {
	char date[11];
	char time[6];
	char steps[5];
} fits;

void tokeniseRecord(const char *input, const char *delimiter, char *date, char *time, char *steps);


int lin;
char rec;

int nrecords(FILE *file) { 

lin = 0;
rec = 0;
while (rec != EOF){
    rec = fgetc(file);
    if (rec == '\n'){
        lin++;
    }} 

printf("Number of records in file: %d\n", lin);
lin = 0;
rec = 0;
}

//int nrecords(FILE *file)

