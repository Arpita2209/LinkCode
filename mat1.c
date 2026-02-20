#include<stdio.h>
int main(){
    int arr[3][3];

    // arr[0][0]=1;
    // arr[0][1]=1;
    // arr[0][2]=1;

    //  arr[1][0]=1;
    // arr[1][1]=1;
    // arr[1][2]=1;

    //  arr[2][0]=1;
    // arr[2][1]=1;
    // arr[2][2]=1;

    for(int i=0;i<=2;i++){
        for(int j=0;j<=2;j++){
            scanf("%d",&arr[i][j]);
        }
        printf("\n");
    }

    

    for(int i=2;i>=0;i--){
        for(int j=2;j>=0;j--){
            printf("%d",arr[i][j]);
        }
        printf("\n");
    }


}