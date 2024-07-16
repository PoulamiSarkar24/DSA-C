#include<stdio.h> 
void main () 
{ 
 int i, j,temp; 
 int a[10] = { 40,50,10,20,22,14,5,12,60,2}; 
 for(i = 0; i<10; i++) 
 { 
 for(j = i+1; j<10; j++) 
 { 
 if(a[j] > a[i]) 
 { 
 temp = a[i]; 
 a[i] = a[j]; 
 a[j] = temp; 
 } 
 } 
 } 
 printf("The Sorted Array: \n"); 
 for(i = 0; i<10; i++) 
{ 
 printf("%d\n",a[i]); 
 } 
} 
