#include <stdio.h>

int main() {

    int mark = 40;

printf("Put your mark\n");
scanf("%d", &mark);

    if (mark >= 40)
    {
        printf ("%d?! YOU LIAR!!!\n", mark);
    }
    else
    {
        printf ("The mark of %d is a BIG FAIL\n", mark);
    }

    return 0;
}