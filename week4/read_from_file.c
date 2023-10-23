#include <stdio.h>
// you need stdlib to use atoiu
#include <stdlib.h>

int main() {
    char* filename = "data.txt";
    FILE *file = fopen(filename, "r");
    if (file == NULL) {
        printf("Error opening file\n");
        return 1;
    }

    // number of characters which will be read per line. 100 very usual.
    int buffer_size = 100;
    // string which will hold each line as it is read in
    char line_buffer[buffer_size];

    // an arbitrary large number
    int numbers [1000];
    int line_number_something=0;

    // traduction: while there is still stuff (of x size) in the file, turn strings into numbers and print it
    while (fgets(line_buffer, buffer_size, file) != NULL) {
        printf("%d\n", atoi(line_buffer));
        numbers[line_number_something]=atoi(line_buffer);
        line_number_something++;
    }

    printf("There were %d lines\n", line_number_something);

    fclose(file);
    return 0;
}