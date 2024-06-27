#include <stdio.h>
int main() {
    int arr[] = {10, 12, 8, 4, 15};
    int n = sizeof(arr) / sizeof(arr[0]);
    int sum = 0;
    for (int i = 0; i < n; ++i) {
        sum += arr[i];
    }
    printf("Sum of array elements: %d\n", sum);
    return 0;
}