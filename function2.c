#include<stdio.h>



void factorial(int num){
    int fact=1;
    for(int i=1;i<=num;i++){
       fact=fact*i; 
    }
    printf("%d",fact);
   
}
int main(){
    int ip;
    printf("enter the num:");
    scanf("%d",&ip);
    factorial(ip);
}