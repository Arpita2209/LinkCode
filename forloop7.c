#include<stdio.h>
int main(){
    int start,end;

    printf("Enter starting value: ");
    scanf("%d",&start);

    printf("Enter ending value: ");
    scanf("%d",&end);

    for(int i=start;i<=end;i++){
        printf("%d",i);

    }
}