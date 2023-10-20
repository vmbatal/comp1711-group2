#include <stdio.h>

int main () 
{
    char team;
    char option;

    printf ("Enter your favourite team:\n");
    scanf ("%c", &team);

        if ("%c" == "Manchester City" && "manchester city" && "Manchester city")
    {
        printf("why I even ask of course you gonna be champions");
        }
    else{


    printf ("\n");
    printf ("Select A to see how many titles you are going to win this year\n");
    printf ("Select B to see who is gonna be the champion\n");
    printf ("Select Q to quit(reccomended)\n");

    scanf("%c", &option);
    

    switch (option)
    {
        case 'A': printf ("0\n");
                  break;

        case 'B': printf ("Skyblue Saudi FC\n");
                  break;

        case 'Q': break;

        default:  break;
        
    }}

    return 0;
}