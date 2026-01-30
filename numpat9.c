#include<stdio.h>
int main(){
    char ch= 'a';
    int n=4;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            printf("%c ",ch);
            ch++;
        }
        printf("\n");
    }
}
    