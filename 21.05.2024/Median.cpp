#include <stdio.h>
#include<stdlib.h>
int compare(const void *a, const void *b) {
    return (*(int *)a - *(int *)b);
}

int main() {
    int n;
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);
    if (n <= 0) {
        printf("Array needs to have at least 1 element.\n");
        return 1;
    }
    int arr[n];
    printf("Enter the elements of the array:\n");
    for (int i=0;i<n;i++) {
        scanf("%d",&arr[i]);
    }
    qsort(arr,n,sizeof(int),compare);

    float median;
    if (n % 2 == 0) {
        median = (arr[n/2-1]+arr[n/2])/2.0;
    } else {
        median = arr[n/2];
    }
    printf("The median of the array is: %.2f", median);
	 return 0;
}

