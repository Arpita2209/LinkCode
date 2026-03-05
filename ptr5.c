#include<stdio.h>
int main(){
    int arr[5]={10,20,30,40,50};
    int *ptr;
    ptr=&arr[0];
    for(int i=0;i<5;i++){
        printf("%d\n",*(ptr+i));
    }
    int sum=0;
    int *ptr2;
    ptr2=&sum;
     for(int i=0;i<5;i++){
        *ptr2=*ptr2+*(ptr+i);
        // printf("%d\n",*(ptr2+i));
    }
    printf("%d\n",*ptr2);
    
  
    
    
}