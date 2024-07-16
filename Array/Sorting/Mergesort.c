#include<stdio.h>
void merge(int arr[],int start,int end){
    int mid = (start+end)/2;
    int temp[end-start+1];
    int i = start;
    int j= mid+1;
    int k =0;
    while(i<=mid && j<=end){
        if(arr[i]<=arr[j]){
            temp[k++] = arr[i];
            i++;
        }
        else{
            temp[k++] = arr[j];
            j++;
        }
    }
    while (i<=mid)
    {   
        temp[k++] = arr[i];
        i++;
    }
    while (j<=end)
    {
        temp[k++] = arr[j];
        j++;
    }
    for(int iter=start;iter<=end;iter++){
        arr[iter] = temp[iter-start];
    }

}
void MergeSort(int arr[],int start,int end){
    if(start>end){
        return;
    }
    if(start<end){
        int mid = (start+end)/2;
        MergeSort(arr,start,mid);
        MergeSort(arr,mid+1,end);
        merge(arr,start,end);
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
    MergeSort(arr,0,n-1);
    printf("The sorted array : ");
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
    return 0;
}v
