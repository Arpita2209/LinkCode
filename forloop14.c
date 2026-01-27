#include<stdio.h>
int main(){
    int sum=0,num=145,rem,temp;
    temp=num;

    while(num>0){
        rem=num%10;
        int fact=1;
        for(int i=1;i<=rem;i++){
            fact*=i;
        }
        sum=sum+fact;
        num=num/10;
    }

    if(temp==sum){
        printf("%d is strong num",temp);
    }
    else{
        printf("%d is not a strong number",temp);
    }

}