#include<stdio.h>
int main(){
    int ch,n,rem,rev=0,temp,sum=0;

    printf("1.check pallindrome num\n 2.check armstrong num\n 3.check reverse num\n 4.check sumof digit of num\n 5.exit\n");

    printf("Enter your choice:");
    scanf(" %d",&ch);

    switch (ch)
    {
    case 1:printf("enter number:");
            scanf("%d",&n);
            temp=n;
            while(n>0){
                rem=n%10;
                rev=(rev*10)+rem;
                n=n/10;
            }
            if(temp==rev){
                printf("pallindrome");
            }else{
                printf("not pallindrome");
            }

        /* code */
        break;
    case 2:printf("enter the number:");
    scanf("%d",&n);
    temp=n;

    while(n>0){
        rem= n%10;
        sum+=rem*rem*rem;
        n=n/10;
    }

    if(temp==sum){
        printf("amstrong");
        
    }else{
        printf("not armstrong");
    }
    break;

    case 3: printf("enter the number:");
    scanf("%d",&n);
    temp=n;
    while(n>0){
        rem= n%10;
        rev=(rev*10)+rem;
        n=n/10;

    }
    printf("%d",rev);
    break;

    case 4:{
        scanf("%d",&n);
        printf("%d",n);
        break;
    }
    
        case 5:printf("------------exit---------");
        break;
    
    
    }


}
