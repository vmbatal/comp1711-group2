#include <stdio.h>

int main() {
    int a;

printf("Type 0 to recieve a compliment, type 1 to recieve a insult, type 2 to recieve a romantic compliment, type 3 to recieve a message in River Plate Spanish\n");
scanf ("%d", &a);

    switch (a)
    {
        case 0:     printf ("I love the greatness of your heart. You are such a nice person!\n");
        break;

        case 1:     printf ("You dorky airhead!\n");
        break;

        case 2:     printf ("Careful with the sun, you're going to melt, bonbon\n");
        break;

        case 3:     printf ("Buenoo manito como te trata la vida?\n");
        break;

        default:    printf ("That is not a valid option\n");
    }
}