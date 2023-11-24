#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define ROW 10
#define COLUMN 3

void tokenise(char *input, int *array, int size) {
    char *inputCopy = strdup(input);

    char *token = strtok(inputCopy, ",");
    int i = 0;

    while (token != NULL && i < size) {
        array [i++] = atoi(token);
        token = strtok(NULL, ",");
    }

free (inputCopy);

}

void Ay(int data[ROW][COLUMN], int *values, int row, int column) {
    for (int i = 0; i < row; ++i){
        for (int j = 0; j < column; ++j) {
            data[i][j] = values[i * column + j];
    }}}


int main () {

    FILE *file = fopen("marks.txt", "r");
    if (file == NULL) {
        printf("Error opening the file.\n");
        return 1;
    }

    char line[100];
    fgets(line, sizeof(line), file);
    fclose(file);

    // Tokenize the line into an array of integers
    int values[ROW * COLUMN];
    tokenise(line, values, ROW * COLUMN);

    // Create a 2D array from the values
    int data[ROW][COLUMN];
    Ay(data, values, ROW, COLUMN);

    printf("The students marks are:\n");
    for (int i = 0; i < ROW; ++i) {
        for (int j = 0; j < COLUMN; ++j) {
            printf("%d ", data[i][j]);
        }
        printf("\n");
    }

    return 0;
}