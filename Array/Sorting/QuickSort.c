#include<stdio.h>
int partition(int arr[],int s,int e){
    int pivot = arr[e];
    int j =s;
    int i =s-1;
    while(j<=e){
        if(arr[j]<pivot){
            i++;
            int temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
        }
        j++;
    }
    int temp = arr[e];
    arr[e] = arr[i+1];
    arr[i+1] = temp;
    return i+1; 
}
void QuickSort(int arr[],int start,int end){
    if(start>=end) return;
    if(start<end){
        int pi = partition(arr,start,end);
        QuickSort(arr,start,pi-1);
        QuickSort(arr,pi+1,end);
    }
}
int main(){
    int n;
    printf("Enter the number of elements of the array : ");
    scanf("%d",&n);
    int arr[n];
    printf("Enter the elements of the array : \n");
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    QuickSort(arr,0,n-1);
      printf("The sorted array : ");
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
    return 0;
}
