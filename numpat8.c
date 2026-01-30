#include<stdio.h>
int main(){
    int num = 12;
    for(int i=1;i<=3;i++){
        for(int j=1;j<=3;j++){
            printf("%d ",num);
            num=num+2;
        }
        printf("\n");
    }
}