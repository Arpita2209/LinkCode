#include<stdio.h>
int main(){
    char name[10];
    printf("\nEnter the name: ");
    scanf("%s",&name);

    for(int i=0;name[i]!='\0';i++){
        if((name[i]>=97)&&(name[i]<=122)){
            printf("%C",name[i]-32);
        }
        else if((name[i]>=65)&&(name[i]<=90)){
            printf("%c",name[i]);
        }
    }
}