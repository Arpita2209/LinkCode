#include<stdio.h>
// #define max 20;
struct student
{
    /* data */
    int rollno;
    char sname[10];
    int sub1,sub2,sub3,total;
    // int n;
    float perct;

};

int main(){
    struct student stud[10];
    int n;
    printf("\n for how many student record do you want");
    scanf("%d",&n);

    for(int i=0;i<n;i++){
         printf("\nEnter Roll no of a student %d: ",(i+1));
    scanf("%d",&stud[i].rollno);

    printf("\n Enter student name %d: ",(i+1));
    scanf("%s",&stud[i].sname);

    printf("\n Enter subs marks of stud  %d:",(i+1));
    scanf("%d%d%d",&stud[i].sub1,&stud[i].sub2,&stud[i].sub3);

    stud[i].total=stud[i].sub1+stud[i].sub2+stud[i].sub3;
    stud[i].perct=stud[i].total/3.0;
    }

   for(int i=0;i<n;i++){
    printf("\n\t\t Rollno \t\t:\t\t %d",stud[i].rollno);
    printf("\n\t\t\tName\t\t:\t\t%s",stud[i].sname);
    printf("\n\t\t\tTotal\t\t :\t\t %d",stud[i].total);
    printf("\n\t\tpercentage\t\t:\t\t %f",stud[i].perct);
   }
}
