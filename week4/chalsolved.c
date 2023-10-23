#include <stdio.h>

int main()
{
    char *filename = "data.txt";

    FILE *file = fopen(filename, "w"); // or "a", "w+", "a+"
    if (file == NULL)
    {
        printf("Error opening file\n");
        return 1;
    }

    int number;
    printf("How many numbers do you want to write");
    int num_lines = 10;
    scanf("%d",&num_lines);
    int total = 0;
    float mean;
    
    printf("Type %d numbers: ", num_lines);
    
    for (int i = 0; i < num_lines; i++)
    {
        scanf("%d", &number);
        total += number;
        fprintf(file, "%d\n", number);
    }

    mean= total/num_lines;
    fprintf(file,"%f\n",mean);

    fclose(file);
    return 0;
}