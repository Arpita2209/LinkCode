#include<stdio.h>
#include<string.h>
int main(){
    int ch;
    char str1[50],str2[50],str[50];
     int vows=0,cons=0,vows1=0,cons1=0;
      int choice,flag=2;
       
while(1){
     printf("\n1-Length of the string\n2-Reverse the String\n3-No. of vows and Cons\n4-upper case and lower case\n5-Concatinate\n6-copy string 2 over 1\n7-greater between two strings\n8-Swap two string\n6-exit ");
        printf("\nEnter your choice : ");
        scanf("%d",&ch);
     switch(ch){
        case 1://print length of the string
      
        printf("\nEnter the string1 & 2 : ");
        scanf(" %s %s", str1, str2);

        printf("\nlength of first and second string : %lu & %lu",strlen(str1),strlen(str2));
        break;

        case 2://Reverse the string
         printf("\nEnter the string1 & 2 : ");
        scanf(" %s %s", str1, str2);

        for(int i=strlen(str1)-1;i>=0;i--)
        {
            printf("%c",str1[i]);
        }
        for(int i=strlen(str2)-1;i>=0;i--)
        {
            printf("%c",str2[i]);
        }
        break;

        case 3://print vows and cons in the strings
        
       
         printf("\nEnter the string1 & 2 : ");
        scanf(" %s %s", str1, str2);

        for(int i=0;str1[i]!='\0';i++){
            if((str1[i]=='a' || str1[i]=='e' || str1[i]=='i' || str1[i]=='o' || str1[i]=='u') || (str1[i]=='A' || str1[i]=='E' || str1[i]=='I' || str1[i]=='O' || str1[i]=='U') ){
                vows++;
            }
            else{
                cons++;
            }

        }
        printf("vowels in string1 are: %d and cons in string are : %d",vows,cons);

         for(int i=0;str2[i]<'\0';i++){
            if((str1[i]=='a' || str1[i]=='e' || str1[i]=='i' || str1[i]=='o' || str1[i]=='u') || (str1[i]=='A' || str1[i]=='E' || str1[i]=='I' || str1[i]=='O' || str1[i]=='U') ){
                vows1++;
            }
            else{
                cons1++;
            }

        }
        printf("vowels in string are: %d and cons in string are : %d",vows1,cons1);
       break;

     

     case 4://upper case lowercase
       
         printf("\nEnter the string1 & 2 : ");
        scanf(" %s %s", str1, str2);
        printf("\n1-Upper case\n2-Lower case");
        printf("enter your choice  : ");
        scanf(" %d", &choice);
        switch (choice)
        {
        case 1:
         for(int i=0;str1[i]!='\0';i++){
        if((str1[i]>=97)&&(str1[i]<=122)){
            printf("%C",str1[i]-32);
        }
        else if((str1[i]>=65)&&(str1[i]<=90)){
            printf("%c",str1[i]);
        }
    }
    for(int i=0;str2[i]!='\0';i++){
        if((str2[i]>=97)&&(str2[i]<=122)){
            printf("%C",str2[i]-32);
        }
        else if((str2[i]>=65)&&(str2[i]<=90)){
            printf("%c",str2[i]);
        }
    }
            /* code */
            break;

            case 2: for(int i=0;str1[i]!='\0';i++){
        if((str1[i]>=65)&&(str1[i]<=90)){
            printf("%C",str1[i]+32);
        }
        else if((str1[i]>=97)&&(str1[i]<=122)){
            printf("%c",str1[i]);
        }
    }
    for(int i=0;str2[i]!='\0';i++){
        if((str2[i]>=65)&&(str2[i]<=90)){
            printf("%C",str2[i]+32);
        }
        else if((str2[i]>=97)&&(str2[i]<=122)){
            printf("%c",str2[i]);
        }
    }
        
        default:
            break;
        }

        break;

        case 5://concatinate
         printf("\nEnter the string1 & 2 : ");
        scanf(" %s %s", str1, str2);

        for(int i=0;str1[i]!='\0';i++){
        printf("%c",str1[i]);
    }
    int j;
    
    for(int i=0;str1[i]!='\0';i++){
        for(int j=0;str2[j]!='\0';j++,i++){
            str1[i]=str2[j];
        }
         str1[i]='\0';
     printf("%s",str1);
   
    }

        break;

        case 6://copy string
        printf("\nEnter the string1 & 2 : ");
        scanf(" %s %s", str1, str2);

         for(int i=0;str1[i]!='\0';i++){
        for(int j=0;str2[j]!='\0';j++,i++){
            str1[i]=str2[j];
        }
         str1[i]='\0';
     printf("%s",str1);
   
    }
    break;

    case 7://greater
    printf("\nEnter the string1 & 2 : ");
    scanf(" %s %s", str1, str2);

    flag = 2; // assume equal

    for(int i = 0; str1[i] != '\0' && str2[i] != '\0'; i++){
        if(str1[i] > str2[i]){
            flag = 1;
            break;
        }
        else if(str1[i] < str2[i]){
            flag = 0;
            break;
        }
    }

    if(flag == 1)
        printf("\nstr1 is greater");
    else if(flag == 0)
        printf("\nstr2 is greater");
    else
        printf("\nBoth are same");

    break;

    case 8://swap
     printf("\nEnter the string1 & 2 : ");
        scanf(" %s %s", str1, str2);

        for(int i=0;str1[i]!=0 && str2[i]!=0;i++){
            str[i]=str1[i];
            str1[i]=str2[i];
            str2[i]=str[i];
        }

        printf("str1 : %s",str1);
        printf("str2 : %s",str2);
        break;

    }


}

  

   
}