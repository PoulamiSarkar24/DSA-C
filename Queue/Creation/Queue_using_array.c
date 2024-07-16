#include<stdio.h>
int f=-1; int r=-1; 
void insert(int a[],int n){ 
    int x;
     if (r== (n-1)) 
         printf("OVERFLOW\n");
     else{ 
        if (f==-1) 
            f=0;
        printf("Enter the numbers in the queue: "); 
        for (int i=0; i<n; i++){ 
            scanf("%d", &x); 
            r=r+1; 
            a[r] =x;         
        }     
    } 
} 
void display(int a[]) { 
    if (f==-1) 
        printf("Queue is empty\n"); 
    else { 
        printf("Queue :\n"); 
        for (int i=f; i<=r; i++) 
            printf("%d ", a[i]);    
        } 
        printf("\n");
} 
void del(int a[]) { 
    printf("Enter 1 to delete else 0:\n"); 
    int z; 
    scanf("%d", &z); 
    if (z==1) {
         if (f==-1||r==-1) { 
            printf("Underflow\n"); 
            return;         
        } 
            else {
                 printf("Element deleted from queue: %d\n", a[f]);
                  f=f+1;         
                  }     
            } 
} 
int main() { 
    int num;
    printf("Enter length of queue: "); 
    scanf("%d", &num); 
    int a[num]; 
    printf("Enter 1 to enter data into the queue.\n");
    printf("Enter 2 to delete data from the queue.\n");
    printf("Enter 3 to print the entire queue.\n");
    printf("Enter any other to exit.\n"); 
        int choice; 
        scanf("%d",&choice);
         while (choice!=0){
             if(choice==1){
                 insert(a,num); 
            } 
            else if(choice==2){
            del(a);
            } 
             else if(choice==3){ 
             display(a);        
            }else { 
                break;        
            } 
    } 
    return 0;
}
