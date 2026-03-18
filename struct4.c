#include<stdio.h>

struct student
{
    /* data */
    int rollno;
    char sname[10];
    int sub1,sub2,sub3,total;
    int n;
    float perct;

};

int main(){
    struct student stud;

   
    printf("\nEnter Roll no of a student: ");
    scanf("%d",&stud.rollno);

    printf("\n Enter student name : ");
    scanf("%s",&stud.sname);

    printf("\n Enter subs marks:");
    scanf("%d%d%d",&stud.sub1,&stud.sub2,&stud.sub3);

    stud.total=stud.sub1+stud.sub2+stud.sub3;
    stud.perct=stud.total/3;
   
    printf("\n\t\t Rollno \t\t:\t\t %d",stud[i].rollno);
    printf("\n\t\t\tName\t\t:\t\t%d",stud[i].sname);
    printf("\n\t\t\tTotal\t\t :\t\t %d",stud[i].total);
    printf("\n\t\tpercentage\t\t:\t\t %f",stud[i].perct);
   
}
