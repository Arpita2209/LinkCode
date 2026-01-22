#include<stdio.h>
int main(){
    int sub1,sub2,sub3,sub4,Total_Marks;
    char name[10] ,clgName[50];
    float percentage; 

    printf("enter name of the student : ");
    scanf("%s",&name);

    printf("Enter name of the college: ");
    scanf("%s",&clgName);

    printf("Enter the marks of subs: ");
    scanf("%d%d%d%d",&sub1,&sub2,&sub3,&sub4);

    Total_Marks=sub1+sub2+sub3+sub4;
    percentage=((float)Total_Marks/500.0)*100;
    
   /*printf("name:%s",name);
    printf("clgname:%s",clgName);
    printf("marks:%d%d%d%d",sub1,sub2,sub3,sub4);
    printf("totalmarks=%f",Total_Marks);
    printf("percnt: %f",percentage);*/
    

    if(percentage>=80){
        printf("GradeA");
    }
    else if(percentage>=70){
        printf("GradeB");
    }
    else if(percentage>=50){
        printf("GradeC");
    }
    else{
        printf("fail");
    }
     printf("name:%s",name);
    printf("clgname:%s",clgName);
    printf("marks:%d%d%d%d",sub1,sub2,sub3,sub4);
    printf("totalmarks=%f",Total_Marks);
    printf("percnt: %f",percentage);
    
    
    


}