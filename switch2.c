#include<stdio.h>
int main(){
    int num;
    printf("enter the number:");
    scanf("%d",&num);

    if(num%5==0){
        printf("buzz");
    }
    else if(num%3==0){
        printf("fizz");
    }
    else if((num%5==0)&&(num%3==0)){
        printf("fizz and buzz");
    }
    
}