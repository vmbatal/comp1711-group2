#include <stdio.h>
int main(){
    char str[] = "Hello";
    int lth =0;
    while (str[lth] != '\0') {
        lth++;
    }
    for (int i= lth; i>=0; i--) {
        if (str[i] == '\0') {
            printf("\\0");
        } else {
            printf("%c",str[i]);
        }
    }
    printf("\n");
    return 0;
}