#include<stdio.h>
int main(){
    int a[]={5,0,15,0,10,15};
    int size=sizeof(a)/sizeof(a[0]);

    for(int i=0;i<size;i++){
        if(a[i]==0){
            a[i]=1;
        }
        printf("%d\n",a[i]);
        
    }
}