#include<stdio.h>
int main(){
    int n=4;
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n;j++){
            if(j%2==0){
                printf("2 ");
            }
            else{
                printf("1 ");
            }

        }printf("\n");
    }
}