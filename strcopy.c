#include<stdio.h>
int main(){
    char str1[10];
    char str2[10];

   printf("enter two strings");
   scanf("%s%s",&str1,&str2);
   
    
    for(int i=0;str1[i]!='\0';i++){
        for(int j=0;str2[j]!='\0';j++,i++){
            str1[i]=str2[j];
        }
         str1[i]='\0';
     printf("%s",str1);
   
    }
}