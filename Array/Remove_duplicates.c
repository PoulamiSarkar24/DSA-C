#include <stdio.h>
int removeDuplicates(int arr[], int n) {
    if (n == 0 || n == 1)
        return n;
    int temp[n],j = 0;

    for (int i = 0; i < n - 1; i++) {
        if (arr[i] != arr[i + 1])
            temp[j++] = arr[i];
    }
    temp[j++] = arr[n - 1];
    for (int i = 0; i < j; i++)
        arr[i] = temp[i];

    return j; 
}

int main() {
    int arr[] = { 10,5,7,2,9,10,7,1,1 };
    int n = sizeof(arr) / sizeof(arr[0]);
    printf("Original array: ");
    n = removeDuplicates(arr, n);
    printf("Array after removing duplicates: ");
    for (int i = 0; i < n; i++)
        printf("%d ", arr[i]);
    printf("\n");


    return 0;
}
