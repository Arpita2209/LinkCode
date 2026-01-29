#include<stdio.h>
int main(){
    int ch,Balance=10000,accno[10],amount,time,loan_amount;
    char Name[10];

    printf("-------------------choice----------------\n");
    printf("1.Deposit\n2.withdraw\n3.fixed\n4.loan\n5.check availaible balance\n");

    printf("\nEnter your choice: ");
    scanf(" %d",&ch);
    
    switch(ch){
        case 1:{
            printf("Enter your Name: ");
            scanf("%s",&Name);

            printf("Enter Your Account Number: ");
            scanf(" %d",&accno);

            printf("Enter amount to be deposited: ");
            scanf(" %d",&amount);

            printf("your amount has been deposited successfully !\n");

            Balance+=amount;

            printf("Balance: %d",Balance);
            break;


        }
        case 2:{
             printf("Enter your Name: ");
            scanf("%s",&Name);

            printf("Enter Your Account Number: ");
            scanf(" %d",&accno);

            printf("Enter amount to be withrawal: ");
            scanf(" %d",&amount);
                if(amount<=Balance){
            printf("your amount has been debited successfully !\n");

            Balance-=amount;

            printf("Balance: %d",Balance);
                }
                else{
                    printf("Insufficient balance!!");
                }
                break;

        }
        case 3:{
            int fd_amount;
            printf("Enter your fixed deposit amount");
            scanf("%d",&fd_amount);

            printf("Time(years): ");
            scanf(" %d",&time);

            float fd_rate = 6;
                float fd_interest = (fd_amount * fd_rate * time) / 100;

                printf("FD Interest: %.2f\n", fd_interest);
                printf("Maturity Amount: %.2f\n", fd_amount + fd_interest);
                break;

        }
        case 4:{
              printf("Enter loan amount: ");
                scanf("%f", &loan_amount);
                printf("Enter time (in years): ");
                scanf("%d", &time);

                float loan_rate = 8;
                float loan_interest = (loan_amount * loan_rate * time) / 100;

                printf("Loan Interest: %.2f\n", loan_interest);
                printf("Total Amount to Pay: %.2f\n", loan_amount + loan_interest);
                break;
        }
         case 5:{
            printf("Available balance is: %d",Balance);
         }

         case 6:{
            printf("-----------------EXIT--------------");
            printf("-----------------thank you--------------");
         }

    }

}