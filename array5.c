#include<stdio.h>
int main(){
  

    int size,total=0;
    printf("enter the size of array: ");
    scanf("%d",&size);

    int arr[size];
    printf(" enter %d Marks",size);

    for(int i=0;i<size;i++){
          scanf("%d",&arr[i]);
     }
  
    for(int i=0;i<size;i++){
          
    printf("%d\n ",arr[i]);
    total=total+arr[i];
    }
    printf("total marks are: %d",total);

   
}