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

  
    int j=0;
    for(int i=0;i<l;i++){
        name2[j]=name[i];
        j++;
        printf("%c",name[i]);
    }
    name2[j]='\0';
    printf("\nname 2 is :%s",name2);
    int flag=1;
    for(int i=0;name[i]!='\0';i--){
        if(name[i]!=name2[j]){
           flag=0;
        }
       
 
    }

    if(flag==1){
        printf("\nnot pallindrome");
    }
    else {
        printf("\npallindrome");
    }


}