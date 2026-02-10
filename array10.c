#include<stdio.h>
int main(){
     int arr[]={23,34,65,50,21,4};
     int size=sizeof(arr)/sizeof(arr[0]);

   for(int i=size-1;i>=0;i--){
        printf("%d",arr[i]);
   }
}