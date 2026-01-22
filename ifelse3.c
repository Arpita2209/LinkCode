//wAP for writing area of circle ,rectangle and triangle

#include<stdio.h>
int main(){
    int ch,ct;
    float radius,base,height,carea,tarea,rarea;

    printf("\n1-Area of circle\n2-Area of triangle\n3-Area of rectangle");
    printf("\nEnter your choice: ");
    scanf("%d",&ch);

    menu:
    if(ch==1){
        printf("\nenter the radius of circle:");
        scanf("%f",&radius);
        carea=3.14*radius*radius;
        printf("area of circle is:%f",carea);
    }
    else if(ch==2){
        printf("enter the base and height:");
        scanf("%f%f",&base,&height);
        tarea=0.5*base*height;
        printf("area of triangle is %f",tarea);
    }
    else if(ch==3){
        printf("enter the base and height:");
        scanf("%f%f",&base,&height);
        rarea=base*height;
        printf("area of rectangle %f",rarea);
    }
    else{
        printf("Invalid....");
    }


    printf("Do you want to continue press 1");
    scanf("%d",&ct);
    if(ct==1){
        goto menu;
    }
    else{
        printf("thank you");
    }
}