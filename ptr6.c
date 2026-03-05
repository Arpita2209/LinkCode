#include<stdio.h>
int main(){
    int arr[10],even=0,odd=0;
    int *ptr;
    ptr=&arr[10];
  
    printf("enter the array elements:\n");
    scanf(" %d",*ptr);

    for(int i=0;i<10;i++){
         scanf(" %d",ptr+i);
        if(*(ptr+i)%2==0){
            even++;

        }
        else{
            
            odd++;
        }
    }
    printf("even count is: %d",even);
    printf("odd count is: %d",odd);

}