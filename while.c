#include<stdio.h>
int main(){
    int rem,a,rev=0,temp;
    printf("enter the number:");
    scanf("%d",&a);
    temp=a;
    while(a>0){
        rem= a%10;
        rev=(rev*10)+rem;
        a=a/10;

    }
    printf("%d",rev);

    
    if(temp==rev){
        printf("pallindrome");
        
    }else{
        printf("not pallindrome");
    }

}