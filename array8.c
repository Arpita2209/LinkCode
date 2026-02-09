#include<stdio.h>
int main(){
     int arr[]={23,34,65,50,21,4};
    int max=arr[0],smax=0;

    for(int i=0;i<6;i++)
    {
        if(arr[i]>max){
            max=arr[i];
        }
    }
    

    for(int i=0;i<6;i++){
        if(arr[i]>smax && max>arr[i]){
            smax=arr[i];
        }
    }
    printf("%d%d",max,smax);
}