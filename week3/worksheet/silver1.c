#include <stdio.h>

int main() {

    int mark;

printf("WELCOME TO UNIVERSITY OF LEEDS MARK CHECKER -- PLEASE PUT YOUR MARK: ");
scanf("%d", &mark);

    if (mark >=0 && mark <=100)
    {
        if (mark < 50)
        {
            printf ("SCORE REQUIRED: 50\nYOUR SCORE: %d\nSORRY, YOU HAVE NOT PASSED -- THANKS FOR USING THIS SERVICE\n",mark);
        }
        else if (mark < 70)
        {
            printf ("SCORE REQUIRED: 50\nYOUR SCORE: %d\nCONGRATULATIONS, YOU PASSED -- THANKS FOR USING THIS SERVICE\n",mark);
        }
        else
        {
            printf ("SCORE REQUIRED: 50\nYOUR SCORE: %d\nCONGRATULATIONS, YOU PASSED AND GOT A DISTINCTION -- THANKS FOR USING THIS SERVICE\n",mark);
        }
        }
    else
        {
        printf ("ERROR -- SCORE MUST BE BETWEEN 0 AND 100\n");
        }
    
    
    return 0;
}