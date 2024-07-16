#include<stdio.h>
void SelectionSort(int arr[],int n){
    int minidx;
	for(int i=0;i<n-1;i++){
		minidx=i ;
		for(int j= i+1;j<n;j++){
			if(arr[minidx]>arr[j]){
				minidx  = j;
			}
		}
		int temp = arr[minidx];
		arr[minidx] = arr[i];
		arr[i]= temp;
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
    SelectionSort(arr,n);
      printf("The sorted array : ");

    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
    return 0;
}
