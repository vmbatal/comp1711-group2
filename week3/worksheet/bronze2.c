#include <stdio.h>

int main() {

    int num = 20;
    int b = 4;
    int c = 5;

    if ((num!=0) && (num % b == 0) && (num % c == 0))
    {
        printf ("%d is divisible by 4 and 5\n", num);
    }
    else
    {
        printf ("%d is not divisible by 4 and 5\n", num);
    }

    return 0;
}