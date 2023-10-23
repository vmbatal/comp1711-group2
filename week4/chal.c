#include <stdio.h>
int main(){

int nums[10];
int i=0;
int total=0;
float mean;

for(i=0; i<10; i++)
{
printf("put 10 numbers\n");
scanf("%d",&nums[i]);
total += nums [i];
}

mean = total/10;

for(i=0;i<10;i++){
    printf("%d\n", nums[i]);
}

printf("the average is %f\n", mean);

}