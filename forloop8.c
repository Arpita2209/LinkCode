#include<stdio.h>
int main(){
    int start,end,sum=0;

    printf("Enter starting value: ");
    scanf("%d",&start);

    printf("Enter ending value: ");
    scanf("%d",&end);
    
    for(int i=start;i<=end;i++){
        if(i%5==0){
            
             sum=+i;
     }

    }
     printf("%d",sum);


}