#include<stdio.h>
int main(){
    int n=3;
    char ch='a';
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){

         printf("%c ",ch);
         ch=ch+2;
    }
    printf("\n");
    }
}