#include <stdio.h>

int main() {

    int mark;

printf("Put your mark\n");
scanf("%d", &mark);

    if (mark == 0)
    {
        printf ("WHAT THE F***** ****** YOU ***************** **************!\n");
    }
    else if (mark < 40)
    {
        printf ("%d IS A BIG FAIL YOU IDIOT, I WILL SELL YOUR F*CKING PHONE, YOU ARE GOING TO LEARN THE HAAARD WAY!\n", mark);
    }
    else if (mark < 60)
    {
        printf ("Lucky guy, %d may be enough for the f*ckin system, but NOT for me. YOU DESERVE GOOD OLD PUNISHMENT! \n", mark);
    }
    else if (mark < 70)
    {
        printf ("%d is a 2:1?! British education is getting worse and worse. You donkey got a 2:1 with a %d?!\n", mark, mark);
    }
    else if (mark < 100)
    {
        printf ("The mark of %d is a 'first'... I mean, what the f*ck\n", mark);
    }
     else if (mark == 100)
    {
        printf ("Ok\n");
    }
    else
    {
        printf ("It is NOT possible to score %d... HOW DARE YOU LIAR! YOU WILL SLEEP IN THE FLOOR FOR THE NEXT TWO WEEKS!\n", mark);
    }
    
    return 0;
}