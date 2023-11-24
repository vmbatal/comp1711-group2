#include <stdio.h>
#define buffer_size 100

typedef struct {
	char date[11];
	char time[6];
	int steps;
} fits;

void tokeniseRecord(const char *input, const char *delimiter, char *date, char *time, char *steps);

