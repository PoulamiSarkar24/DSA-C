#include<stdio.h>
void TOH(int n,char source,char aux,char destination){
    
     if(n==0){ 
        return;  
        } 
        TOH(n-1,source,destination,aux); 
        printf(" Move a disc from %c to  %c\n",source,destination);
         TOH(n-1,aux,source,destination); 
         } 
         int main(){
             int n; 
             printf("Enter the number of disc:"); 
             scanf("%d",&n); 
             TOH(n,'A','B','C');
            return 0;
              
 }
              
              
