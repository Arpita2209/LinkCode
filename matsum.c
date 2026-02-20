#include<stdio.h>
int main(){
    int arr1[3][3];
    int arr2[3][3];
    int sum[3][3];


   

    for(int i=0;i<=2;i++){
        for(int j=0;j<=2;j++){
            scanf("%d",&arr1[i][j]);
        }
        printf("\n");
    }

      for(int i=0;i<=2;i++){
        for(int j=0;j<=2;j++){
            scanf("%d",&arr2[i][j]);
        }
        printf("\n");
    }

    

    for(int i=0;i<=2;i++){
        for(int j=0;j<=2;j++){
            sum[i][j]=arr1[i][j]+arr2[i][j];
            printf("%d ",sum[i][j]);
        }
        printf("\n");
    }


}