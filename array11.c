#include<stdio.h>
int main(){
    int key,found=0;
    int arr[]={5,10,20,25,70};
     int size=sizeof(arr)/sizeof(arr[0]);

    printf("enter key:");
    scanf("%d",&key);
    for(int i=0;i<size;i++){
        if(arr[i]==key){
            found=1;
            printf("key is found at index %d",i);
            break;
        }
    }
    if(found==0){
        printf("not found");
    }
}