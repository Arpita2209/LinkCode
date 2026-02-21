#include<stdio.h>
int main(){
    int arr[3][3]={{1,2,3},{4,5,6},{7,8,9}};
   

     for(int i=0;i<=2;i++){
        int sum=0;
        for(int j=0;j<=2;j++){
           sum=sum+arr[j][i];
        //    printf("%d",sum);
        }

         printf("%d",sum);
        printf("\n");
    }
}