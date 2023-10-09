#include <stdio.h>

int main(){
// this is a comment
// setting up 15 slots of memory for a string
char name[15];

//prompting the user
printf("Hello, please enter your name: ");

//Take the users imput and storing in name
scanf("%s", name);

//printing name
printf("Your name is %s\n", name);

return 0;
}
