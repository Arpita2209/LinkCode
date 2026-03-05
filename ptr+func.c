#include<stdio.h>
void display(int *,int l);
int main(){
    int arr[5]={10,20,30,40,50};
    display(&arr[0],5);

}

void display(int *
    ptr,int l){
    int i;
    for(int i=0;i<l;i++){
        printf("%5d",*(ptr+i));
    }
}