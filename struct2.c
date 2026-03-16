#include<stdio.h>

struct employee{
    int empid;
    float empsalary;
    char empname[10];
};

int main(){

    struct employee emp[3];
    int key,flag=0,ch,ct;
    while(1){
    printf("\n1- create \n2- display \n3-search 4-");

    switch(ch){
        case 1:
         for(int i=0;i<3;i++){
         printf("enter employee id");
    scanf("%d",&emp[i].empid);

     printf("enter employee name");
    scanf("%s",&emp[i].empname);

     printf("enter employee salary");
    scanf("%f",&emp[i].empsalary);
    }

    case 2:
     
    for(int i=0;i<3;i++){
        
    printf("\nemployee  id:%d",emp[i].empid);
    printf("\nemployee  name:%s",emp[i].empname);
    printf("\nemployee  salary:%f",emp[i].empsalary);
    }

    case 3:
    printf("enter empid to search record:");
    scanf(" %d",&key);

    for(int i=0;i<3;i++){
          if(key==emp[i].empid)
          {
            flag=1;
        printf("\nemployee  id:%d",emp[i].empid);
        printf("\nemployee  name:%s",emp[i].empname);
        printf("\nemployee  salary:%f",emp[i].empsalary);
        break;
            }
    }  
    
    if(flag==0){
        printf("not found");
    }


    case 4:
    //sorting..
        int temp=0;
    for(int i=0;i<3;i++){
     
    for(int j=i+1;i<3;i++){
        if(emp[i].empid>emp[j].empid){
            temp=emp[i].empid;
            emp[i].empid=emp[j].empid;
             emp[j].empid=temp;

                }
            }

        }
        
    }


    }

    printf("do you want to continue press 1 and 2 for stop");
    scanf("%d",&ct);
    if(ct!=1){
        break;
    }



}
    
