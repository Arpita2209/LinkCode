#include<stdio.h>
int main(){
    int rem,a,temp,sum=0;
    printf("enter the number:");
    scanf("%d",&a);
    temp=a;

    while(a>0){
        rem= a%10;
        sum+=rem*rem*rem;
        a=a/10;
    }

    if(temp==sum){
        printf("amstrong");
        
    }else{
        printf("not armstrong");
    }

}