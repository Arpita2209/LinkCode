#include<stdio.h>
int main(){
    char sen[50];
    fgets(sen,sizeof(sen),stdin);
    printf("%c",sen[0]);
    printf("%lu",sizeof(sen));

   


}