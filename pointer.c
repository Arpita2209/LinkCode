#include<stdio.h>
int main(){
    int n=10;
    int *ptr;
    ptr=&n;

    printf("value of n:%d\n",n);
    printf("address of n:%u\n",&n);
    printf("---------------------------------------------");
    printf("Value of n: %d\n",*ptr);
    printf("Address of n: %u\n",ptr);

}