#include<stdio.h>
int main(){
    int a[]={5,10,15,5,10,10};
    // int count=0;
    
    int size=sizeof(a)/sizeof(a[0]);
    for(int i=0;i<size;i++){
         int count=0;
        //  int times;
        for(int j=1;j<size;j++){
          
            if(a[i]==a[j]){
                
                count++;
                //    printf("%d is repeated for %d times\n",a[i],count);
            
              
       
               
             }
             // printf("%d is repeated for %d times\n",a[i],count);
           
         
         //printf("%d is repeated for %d times\n",a[i],count);
        // if(count>1){
        //       printf("%d is repeated for %d times\n",a[i],count);
            
        // }
    }
  
    
}
