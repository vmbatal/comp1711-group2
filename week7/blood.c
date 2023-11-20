#include "understandable.h"

int main()
{
    reading daily_readings[100];

    char line[buffer_size];
    char filename[buffer_size];

    printf("Please enter the name of the data file: ");
    fgets(line, buffer_size, stdin);
    sscanf(line, " %s ", filename);

    char choice;
    int counter = 0;
    float mean = 0;
    float min = 0;
    float max = 0;
    
    while (1){
    FILE *input = fopen(filename, "r");
    if (!input)
    {
        printf("Error: File could not be opened\n");
        return 1;
    }    

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
            
            counter = 0;
            while (fgets(line, buffer_size, input)){
            tokeniseRecord(line, ",", daily_readings[counter].date, &daily_readings[counter].bloodIron);
            counter++;
            }
            
            for (int i = 0; i < counter; i++){
                printf("%s - Blood iron: %.1f\n", daily_readings[i].date, daily_readings[i].bloodIron);
            }
            fclose(input);
            break;

        case 'B':
        case 'b':
            counter = 0;
            while (fgets(line, buffer_size, input))
            {
                tokeniseRecord(line, ",", daily_readings[counter].date, &daily_readings[counter].bloodIron);
                mean += daily_readings[counter].bloodIron;
                counter++;
            }
            mean /= counter;
            printf("Your average blood iron was %.2f\n", mean);
            fclose(input);
            break;

        case 'C':
        case 'c':
            counter = 0;
            while (fgets(line, buffer_size, input))
            {
                tokeniseRecord(line, ",", daily_readings[counter].date, &daily_readings[counter].bloodIron);
                min = daily_readings[counter].bloodIron;
                counter++;
            }
            
            }
            printf("Your minimum blood iron was %.2f\n", min);
            fclose(input);
            break;

        case 'D':
        case 'd':
            counter = 0;
            while (fgets(line, buffer_size, input))
            {
                tokeniseRecord(line, ",", daily_readings[counter].date, &daily_readings[counter].bloodIron);
                max = daily_readings[counter].bloodIron;
                counter++;
            }
            max >= counter;
            printf("Your maximum blood iron was %.2f\n", max);
            fclose(input);
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

        // if they type anything else:
        default:
            printf("Invalid choice\n");
            break;
        }
    }
}