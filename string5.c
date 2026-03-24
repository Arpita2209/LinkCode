#include<stdio.h>
int main(){
    char name[10],name2[10];
    int l=0;

    printf("\nenter the name:");
    scanf("%s",&name);

    for(int i=0;name[i]!='\0';i++){
        l++;
    }
    printf("\n%d",l);

    for(int i=l-1;i>=0;i--){
        printf("%c",name[i]);
    }
    int j=0;
    for(int i=0;i<l;i++){
        name2[j]=name[i];
        j++;
        printf("%c",name[i]);
    }
    name2[j]='\0';
    printf("\nname 2 is :%s",name2);

    


}