#include<stdio.h>
int main(){
    char name[5][10];
    char arrlength[10];
    int i,j,l=0,k=0,m=0,n=0;
    int vows=0,cons=0;
    char arrvows[5],arrcons[5];

    printf("enter 5 names: ");

    for(i=0;i<5;i++){
        scanf("%s",name[i]);
    }

    for(int i=0;i<5;i++){
        for(int j=0;name[i][j]!='\0';j++){
            l++;
        }

        arrlength[k]=l;
        k++;
        l=0;

    }

    for(int i=0;i<5;i++)
    {
        for(int j=0;name[i][j]!=0;j++){
       if((name[i][j]=='A' || name[i][j]=='E' || name[i][j]=='I' || name[i][j]=='O' || name[i][j]=='U') || (name[i][j]=='a' || name[i][j]=='e' || name[i][j]=='i'|| name[i][j]=='o' || name[i][j]=='u')){
            vows++;
        }

        else{
            cons++;
        }
    }
    arrvows[m]=vows;
    arrcons[n]=cons;
    m++;
    n++;
    vows=0;
    cons=0;
}

    printf("\nNAME\t\t:LENGTH\t\tVOWELS\t\tconsonents");
    for(int i=0;i<5;i++){
        printf("\n%s\t:\t%d\t\t%d\t\t%d",name[i],arrlength[i],arrvows[i],arrcons[i]);
    }
}