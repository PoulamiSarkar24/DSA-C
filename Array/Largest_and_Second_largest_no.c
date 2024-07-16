#include<stdio.h> 
void main () 
{ 
   int arr[50],i,n,large,sec_large; 
   printf("Enter the size of the array?"); 
   scanf("%d",&n); 
   printf("Enter the elements of the array?"); 
   for(i = 0; i<n; i++) 
   { 
     scanf("%d",&arr[i]); 
   } 
   large = arr[0]; 
   sec_large = arr[1]; 
   for(i=0;i<n;i++) 
   { 
     if(arr[i]>large) 
   { 
       sec_large = large; 
       large = arr[i]; 
   } 
   else if (arr[i]>sec_large && arr[i]!=large) 
   sec_large=arr[i]; 
   } 
   printf("The Largest number = %d, and the second largest = %d",large,sec_large); 
}
