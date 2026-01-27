#include<stdio.h>
int main(){
    int num=6,sum=0;
    for(int i=1;i<num;i++)
    {
        if(num%i==0){
            sum+=i;
            // printf("%d is a perfect number",sum);
        }
    
    }
    if(num==sum){
        printf("%d is perfect number",sum);
    }
    else{
        printf("%d is not perfect number",sum);
    }

    
}