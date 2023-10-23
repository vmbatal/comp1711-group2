#include <stdio.h>

int main()
{
    char *filename = "data.txt";

    FILE *file = fopen(filename, "w");
    if (file == NULL)
    {
        printf("Error opening file\n");
        return 1;
    }

    int number;
    int x;
    int mean = number/x;

    printf("how many numbers do you want to enter? (MIN 1, MAX 15)\n");
    scanf("%d\n", &x);
    printf("Type %d numbers: ",x);

    for (int i = 0; i < x; i++)
    {
        scanf("%d", &number);
        fprintf(file, "%d\n", number);
    }

    printf("Average = %d\n",mean);

    fclose(file);
    return 0;
    


    }