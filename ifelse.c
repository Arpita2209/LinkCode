#include<stdio.h>
int main(){
    int no;

    printf("enter the number:");
    scanf("%d",&no);

    if((no%3==0)&&(no%5==0))
    {
        printf("%d is divisible by 3 and 5",no);
    }
    else if(no%3==0)
    {
        printf("%d is divisible by 3 only",no);
    }
    else if(no%5==0)
    {
        printf("%d is divisible by 5 only",no);
    }
    else{
        printf("%d is not divisible by 3 or 5",no);
    }

}


