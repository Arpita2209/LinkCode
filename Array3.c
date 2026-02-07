#include<stdio.h>
int main(){
    int a[]={10,11,12,13,14,15};

   //sizeof(a)=4byte*no.of elements
   //sizeof(a[0])=sizeof(a)/4byte
    int size=sizeof(a)/sizeof(a[0]);
    printf("%d\n",size);



}