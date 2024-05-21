#include <stdio.h>

int main() {
    int n;

    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter the elements of the array:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    int sum = arr[0] + arr[1] + arr[n-1] + arr[n-2];
    printf("The sum of the first, second, last, and second last elements is: %d", sum);

    return 0;
}

