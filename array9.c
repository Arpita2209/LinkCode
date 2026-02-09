#include<stdio.h>
int main(){
     int arr[]={23,34,65,50,21,4};
    int min=arr[0],smin=0;

    for(int i=0;i<6;i++)
    {
        if(arr[i]<min){
            min=arr[i];
        }
    }
    

    for(int i=0;i<6;i++){
        if(arr[i]>smin && min>arr[i]){
            smax=arr[i];
        }
    }
    printf("%d%d",max,smax);
}
//hw 4th max and 5th max element 