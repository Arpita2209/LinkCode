#include<stdio.h>
int main(){
    char name[5][10];
    char arrlength[10];
    int i,j,l=0,k=0;

    printf("enter 5 names: ");

    for(i=0;i<5;i++){
        scanf("%s",name);
    }

    for(int i=0;i<5;i++){
        for(int j=0;name[i][j]!='\0';j++){
            l++;
        }

        arrlength[k]=l;
        k++;
        l=0;
    }
     printf("\nNAME\t\t:LENGTH");
    for(int i=0;i<5;i++){
        printf("\n%s\t:\t%d\t%d\t%d",name[i],arrlength[i]);
    }
}
