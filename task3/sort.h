#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define buffer_size 100

typedef struct {
    char date[11];
    char time[6];
    char steps[5];
} fits;

void tokeniseRecord(const char *input, const char *delimiter, char *date, char *time, char *steps);

char line[buffer_size];
char filename[buffer_size];
fits fit[100];
int ct = 0;
int stsarray [100];
int nul = 0;

int nullcheck(FILE *file, int c) {
    int datecheck = atoi(fit[c].date);
    int timecheck = atoi(fit[c].time);
    int stepscheck = atoi(fit[c].steps);
    if (datecheck == 0) {
        printf("Error: invalid file\n");
        nul++;
        return 1;
    }
    if (timecheck == 0) {
        printf("Error: invalid file\n");
        nul++;
        return 1;
    }
    if (stepscheck == 0) {
        printf("Error: invalid file\n");
        nul++;
        return 1;
    }
}
