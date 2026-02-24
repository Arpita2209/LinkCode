#include<stdio.h>

// circlearea();
// trianglearea();
  void circlearea(){
        float radius,area;
        printf("enter radius:");
        scanf("%f",&radius);
        area=3.14*radius*radius;
        printf("%f",area);

    }

     void trianglearea(){
        float base,height,area;
        printf("enter base height:");
        scanf("%f%f",&base,&height);
        area=0.5*base*height;
        printf("%f",area);

    }


int main(){
    int ch,ct;
 

    printf("\n1-area of circle\n2-area of triangle\n");

    printf("\nenter your choice:");
    scanf(" %d",&ch);
    while(1){
    switch(ch)
    {
    case 1:
        circlearea();
        break;
    case 2:
        trianglearea();

        break;
    }
    printf("if you want to continue press 1");
    scanf("%d",&ct);
    if(ct!=1){
        break;
    }
}


}

  