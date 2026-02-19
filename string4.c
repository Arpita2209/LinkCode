#include<stdio.h>
int main(){
    char str[]="hello";
    int vow=0;
    int len=0;
    for(int i=0;str[i]!='\0';i++){
        if((str[i]=='A' || str[i]=='E' || str[i]=='I' || str[i]=='O' || str[i]=='U') || (str[i]=='a' || str[i]=='e' || str[i]=='i'|| str[i]=='o' || str[i]=='u') ){
            vow++;
        }
    }
    printf("%d",vow);
}