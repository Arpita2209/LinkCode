#include<stdio.h>


void greet()
{
    printf("hello i'm greet function");
}

void add(int a, int b){
    printf("%d",a+b);
}

void cube(int a){
    printf("%d",a*a*a);
}

void factorial(int num){
    int fact=1;
    for(int i=1;i<=num;i++){
       fact=fact*i; 
    }
    printf("%d",fact);
   
}
int main(){
    greet();
    add(2,4);
    cube(3);
    factorial(5);
}