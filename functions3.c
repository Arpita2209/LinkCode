#include<stdio.h>
void adddata();//function declaration
void subdata();


void adddata(){  //function defination
    int num1,num2,add;
    printf("enter two numbers");
    scanf("%d%d",&num1,&num2);
    add=num1+num2;
    printf("%d",add);
}

void subdata(){
    int num1,num2,sub;
    printf("enter two numbers");
    scanf("%d%d",&num1,&num2);
    sub=num1-num2;
    printf("%d",sub);
}

int main(){
    adddata(); // function calling
    subdata();
    return 0;
}