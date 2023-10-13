#include <stdio.h>

int main() {
    int a;

    for (a = 10; a > 0; a--)
    {
        printf ("I have %d%s\n", a, "/10 units of energy");
    }
    printf ("I am depleted\n");

    return (0);
}