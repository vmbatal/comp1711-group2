#include <stdio.h>

int main() {

    int num = -13;

    if (num == 0)
    {
        printf ("%d is zero\n", num);
    }
    else if (num < 0)
    {
        printf ("%d is a negative number\n", num);
    }
    else
    {
        printf ("%d is a positive number\n", num);
    }


    return 0;
}