#include <stdio.h>
int binarySearch(int arr[], int l, int r, int x){
    if (r >= l) {
        int mid = l + (r - l) / 2;
        if (arr[mid] == x)
            return mid;        
        if (arr[mid] > x)
            return binarySearch(arr, l, mid - 1, x);       
        return binarySearch(arr, mid + 1, r, x);
    } 
    return -1;
}
 int main(void)
 {
    int N,f;
    printf("Size of array:");
    scanf("%d",&N);
    int arr[N];
    printf("Enter the elements:");
    for(int i=0;i<N;i++){
        scanf("%d",&arr[i]);
    }
    printf("enter the element to search:");
    scanf("%d",&f);
    int result = binarySearch(arr, 0, N - 1, f);
    (result == -1)
        ? printf("Element is not present in array")
        : printf("Element is present at index %d", result);
    return 0;
}
