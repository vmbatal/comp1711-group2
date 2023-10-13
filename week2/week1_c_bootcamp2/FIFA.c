#include <stdio.h>

int main (){
    printf("%s\n","Jugamos al fifa, 3 a 0 eliminacion");
    int g = 1;
    while (g<3) {
        printf("Gol, yo %d, %s\n", g, "vos 0");
        ++g;
    }
    printf("%s\n","3 a 0 PA FUERA");
    return 0;
}