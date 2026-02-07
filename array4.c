#include<stdio.h>
int main(){
    // int a[5];
    // printf("enter 5 marks :\n");
    // for(int i=0;i<5;i++){
    //      scanf("%d",&a[i]);
    // }
  
    // for(int i=0;i<5;i++){
          
    // printf("%d ",a[i]);
    // }

    int size;
    printf("enter the size of array: ");
    scanf("%d",&size);

    int arr[size];
    printf(" enter %d elements",size);

    for(int i=0;i<size;i++){
          scanf("%d",&arr[i]);
     }
  
    for(int i=0;i<size;i++){
          
    printf("%d ",arr[i]);
    }

   
}