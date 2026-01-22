#include<stdio.h>
int main(){
    int num1,num2,ch;

    printf("enter the numbers: ");
    scanf("%d%d",&num1,&num2);

    printf("----------Operations----------\n");
    printf("1.Addition\n");
    printf("2.subtraction\n");
    printf("3.multiplication\n");
    printf("4.Division\n");

    printf("enter your choice:");
    scanf("%d",&ch);

    switch(ch){
        case 1:printf("1.Addition:%d",(num1+num2));break;
        case 2:printf("2.Subtraction:%d",(num1-num2));break;
        case 3:printf("3.multiplication:%d",(num1*num2));break;
        case 4:printf("4.division:%d",(num1/num2));break;
        default:printf("Invalid choice");
    }
}