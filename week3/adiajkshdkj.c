#include <stdio.h>

int main () 
{
    float fahrenheit;
    char option;

    printf ("Enter a temperature to convert in Fahrenheit:\n");
    scanf ("%f", &fahrenheit);

    printf ("\n");
    printf ("Select A to convert to Celsius\n");
    printf ("Select B to convert to Kelvin\n");
    printf ("Select Q to quit\n");

    scanf(" %c", &option);

    switch (option)
    {
        case 'A': printf ("Converted to degrees Celsius");
                  break;

        case 'B': printf ("Converted to Kelvin");
                  break;

        case 'Q': break;

        default:  break;
    }

    return 0;
}