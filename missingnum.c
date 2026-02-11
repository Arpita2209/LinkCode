#include<stdio.h>
int main(){
    int sum=0,a_sum=0,missing=0;
    int a[5]={5,4,2,1};
    for(int i=1;i<=5;i++){
        sum=sum+i;
        a_sum=a_sum+a[i];

    }
    if(a_sum!=sum){
        missing=sum-a_sum;
    }
    //  missing=sum-a_sum;
    printf("missing num is:%d",missing);

}