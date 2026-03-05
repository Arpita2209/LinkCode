#include<stdio.h>
void callbyvalue(int a,int b){
   int  temp=a;
   a=b;
   b=temp;
   printf("callbyvalue : %d,%d",a,b);
}

void callbyreference(int *a,int *b){
   int  temp=*a;
   *a=*b;
   *b=temp;
   printf("callbyreference : %d,%d",a,b);
}
int main(){
    int a=10,b=20;
    printf("before calling a:%d and b:%d",a,b);
    callbyvalue(a,b);
    callbyreference(&a,&b);
    printf("after calling a:%d and :%d",a,b);
}