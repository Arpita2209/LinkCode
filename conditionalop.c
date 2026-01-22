//write a program to print max between 2 num using ternary/conditional operator

#include<stdio.h>
int main(){
    int num1,num2;
    int result;

    printf("\nenter two numbers : ");
    scanf("%d%d",&num1,&num2);
    result = (num1>num2) ? num1 : num2;
    printf("\nResult : %d",result);
    
    return 0; 

}