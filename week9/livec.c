#include <stdio.h>

int addtonum(int num){
    return num+10;
}

void addbyref(int* num){
    *num = *num+10;
}

int main() {
    int number = 500;
    int* num = &number;

    printf("original: %d \n addtonum(): %d \n addbyref = &d", number, addtonum(number), number);
    addbyref(num);
    printf("addbyref num = %d %d\n", number , *num);

}