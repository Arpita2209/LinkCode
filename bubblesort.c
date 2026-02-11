#include<stdio.h>
int main(){
    int a[]={5,3,8,4,6};
    int temp;
    int size=sizeof(a)/sizeof(a[0]);
    for(int i=0;i<size;i++){
        for(int j=0;j<size-1;j++){
            if(a[j]>a[j+1]){
                temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
        }
    }
    printf("sorted array is :\n");
    for(int i=0;i<size;i++){
        printf("%d",a[i]);
    }
}