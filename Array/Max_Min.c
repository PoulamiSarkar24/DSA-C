#include<stdio.h>
int main(){
    int n;
    printf("Enter the size of array:");
    scanf("%d",&n);
    int arr[n];
    printf("Enter the elements:");
    for(int i =0;i<n;i++){
    scanf("%d",&arr[i]);}
    int a = arr[0];
    int b = arr[0];
    for(int i =0;i<n;i++){
        if(arr[i]>a){
            a = arr[i];
        }
        if(arr[i]<b){
            b = arr[i];
        }
    }
    printf("Maximum element: %d\n",a);
    printf("Minimum element: %d",b);
}
