#include<stdio.h>
#include<string.h>

union Account{
    int accno;
    char accname[2];
    float accsal;
};

int main(){
    union Account acc;
    printf("\nsize of account:%d",sizeof(acc));
    acc.accno=101;
    printf("\nAccount no is :%d",acc.accno);
    strcpy(acc.accname,"ganesh");
    printf("\nAccounder holder:%s",acc.accname);
    acc.accsal=9990.00;
    printf("\nAccount holder's salary: %f",acc.accsal);
}