#include<stdio.h>

struct employee{
    int empid;
    float empsalary;
    char empname[10];
};

int main(){

    struct employee emp;
    printf("enter employee id");
    scanf("%d",&emp.empid);

     printf("enter employee name");
    scanf("%s",&emp.empname);

     printf("enter employee salary");
    scanf("%f",&emp.empsalary);

    printf("\nemployee  id:%d",emp.empid);
    printf("\nemployee  name:%s",emp.empname);
    printf("\nemployee  salary:%f",emp.empsalary);


}