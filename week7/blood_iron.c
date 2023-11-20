#include "utilities.h"

int main()
{
    reading daily_readings[100];

    char line[buffer_size];
    char filename[buffer_size];

    printf("Please enter the name of the data file: ");
    fgets(line, buffer_size, stdin);
    sscanf(line, " %s ", filename);

    char choice;
    float min = 0;
    float max = 0;
    
    FILE *input = fopen(filename, "r");
        if (!input)
        {
        printf("Error: File could not be opened\n");
        return 1;
        }
   
    while (1)
    {
        


        printf("A: View all your blood iron levels\n");                       
        printf("B: View your average blood iron level\n");                    
        printf("C: View your lowest blood iron level\n");                     
        printf("D: View your highest blood iron level\n");                    
        printf("E: View the blood iron levels for a specific month\n");       
        printf("F: See some additional statistics about your iron levels\n"); 
        printf("G: Generate a graph of your iron levels\n");                  
        printf("Q: Exit the program\n");

        choice = getchar();
        while (getchar() != '\n');
        switch (choice)
        {
        case 'A':
        case 'a':
        
        read(input, daily_readings, 0, line);
        break;

        case 'B':
        case 'b':
            while (fgets(line, buffer_size, input))
            {
                find_mean(daily_readings, 0, line, 0);
            }
            break;

        

        case 'E':
        case 'e':
            return 0;
            break;

        case 'F':
        case 'f':
            return 0;
            break;

        case 'G':
        case 'g':
            return 0;
            break;

        case 'Q':
        case 'q':
            return 0;
            break;

        default:
            printf("Invalid choice\n");
            break;
        }
    }
}