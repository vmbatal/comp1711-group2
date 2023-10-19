#include <stdio.h>

int main() {

    int temp = 58;

    if (temp >=-10 && temp <=40)
    {
        printf("Temperature of %d°C is within the expected range\n",temp);
    }
    else
        {
        printf ("Uh-oh, %d°C is outside the expected range\nPlease call the Temperature Security Service (24hr line)\n0016 391 8802\n",temp);
        }
    
    
    return 0;
    }