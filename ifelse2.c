#include<stdio.h>
int main(){
    char ch;

    printf("enter any character:");
    scanf("%c",&ch);
      printf("\nASCII value for %d is %c ",ch,ch);

    if((ch>=65)&&(ch<=90))
    {
        printf("\nIts a capital character");
    }
    else if((ch>=97)&&(ch<=122))
    {
        printf("\nIts a small character");
    }
    else if((ch>=48)&&(ch<=57))
    {
        printf("\nits a number");
    }
    else{
        printf("\nits other character");
    }
}