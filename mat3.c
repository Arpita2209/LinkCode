#include<stdio.h>
int main(){
    int arr[3][3]={{1,2,3},{4,5,6},{7,8,9}};
  


    for(int i=0;i<=2;i++){
        for(int j=0;j<=2;j++){

           if(arr[i][j]%2==0){
            arr[i][j]=0;
            // printf("%d ",arr[i][j]);
           }
        }
        // printf("\n");
    }

     for(int i=0;i<=2;i++){
        for(int j=0;j<=2;j++){

           printf("%d ",arr[i][j]);
            
        }
         printf("\n");
    }


}