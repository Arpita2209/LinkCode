//WAP for converting currency

#include<stdio.h>
int main(){
    int ch1,ch2;
    int input,result,rupee;

    printf("\n-1 Rupee\n-2 Dollar\n-3 Euro");
    printf("\nEnter your choice: ");
    scanf("%d",&ch1);
    if(ch1==1){
        rupee:
        printf("Enter your amount: ");
        scanf("%d",&input);


        printf("\n-1 Rupee\n-2Dollar \n-3Euro");
        printf("\nEnter your choice: ");
        scanf("%d",&ch2);
        if(ch2==1){
            result=input;
            printf("\n%d rupee = %d rupee",input,result);
        }
        else if(ch2==2){
            result=input/90;
            printf("%d Rupee = %d Dollar",input,result);
        }
        else if(ch2==3){
            result = input/95;
            printf("%d Rupee = %d Euro",input,result);
        }
       /*printf("Do you want to continue press 1%d",rupee );
        if(rupee == 1){
            goto rupee;
        }*/
        }
        if(ch1==2){
             printf("Enter your amount: ");
        scanf("%d",&input);


        printf("\n-1 Rupee\n-2 Dollar \n-3 Euro");
        printf("\nEnter your choice: ");
        scanf("%d",&ch2);
        if(ch2==1){
            result=input*90;
            printf("%d Dollar = %drupee",input,result);
        }
        if(ch2==2){
            result= input;
            printf("%d Dollar = %d Dollar",input,result);
        }
        if(ch2==3){
            result = input*0.86;
            printf("%d Dollar = %d Euro");
        }
        }
         if(ch1==3){
             printf("Enter your amount: ");
        scanf("%d",&input);


        printf("\n-1 Rupee\n-2 Dollar \n-3 Euro");
        printf("\nEnter your choice: ");
        scanf("%d",&ch2);
        if(ch2==1){
            result=input*105;
            printf("%d euro = %drupee",input,result);
        }
        if(ch2==2){
            result= input*1.17;
            printf("%d euro = %d Dollar",input,result);
        }
        if(ch2==3){
            result = input;
            printf("%d euro= %d Euro",input,result);
        }
        }



}