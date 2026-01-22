#include<stdio.h>
int main(){
    // int even=0,odd=0;
   
    // for(char ch='C';ch<='W';ch++){
    //     if(ch%2==0){
    //       even++; 
    //     }
    //     else{
    //         odd++;
    //     }

        
    // }
    // printf(" even: %d ",even);
    // printf("odd: %d",odd);
        char start,end;

    printf("Enter starting value: ");
    scanf("%c",&start);

    printf("Enter ending value: ");
    scanf(" %c",&end);
    
    for(char ch=start;ch>=end;ch--){
        if(ch%3==0){
            printf(" %c",ch);
        }

    }
}
