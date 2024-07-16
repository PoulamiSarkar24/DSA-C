#include<stdio.h>
int main(){
    int n;
    printf("Enter the size of array:");
    scanf("%d",&n);
    int arr[n];
    printf("Enter the elements:");
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int start = 0;
    int end = n-1;
    while(start<end){
        int temp = arr[start];
        arr[start]= arr[end];
        arr[end]=temp;
        start = start+1;
        end= end-1;
    }
    printf("Reversed array:\n");
    for(int i =0;i<n;i++){
        printf("%d ",arr[i]);
    }
    return 0;
}
