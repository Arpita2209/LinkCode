#include<stdio.h>
int main(){

int i ;
int even_sum=0;
int total_sum=0;
int odd_sum=0;
printf("Reversed Numbers:\n");
for(i=100;i>=50;i--){
    printf("%d ",i);
    total_sum+=i;
    if(i%2 ==0)
    even_sum+=i;
    else
    odd_sum+=i;
}
printf("Total Sum =%d",total_sum);
printf("\nSum of Even Numbers=%d",even_sum);
printf("\nSum of Odd Numbers=%d",odd_sum);
return 0;
}