//input
//Enter no of elements: 5
//Enter the elements of the array: 10 15 14 9 6
//output
//All subarrays are:
// 10
// 10 15
// 10 15 14
// 10 15 14 9
// 10 15 14 9 6
// 15
// 15 14
// 15 14 9
// 15 14 9 6
// 14
// 14 9
// 14 9 6
// 9
// 9 6
// 6
#include <stdio.h>
#include<stdlib.h>
int main() {
    int n;
    printf("Enter no of elements: ");
    scanf("%d",&n);
    int* arr = (int*)malloc(n*sizeof(int));
    printf("Enter the elements of the array: ");
    for (int i=0;i<n;i++) 
	{
        scanf("%d",&arr[i]);
    }
    printf("All subarrays are:\n");
    for (int i=0;i<n;i++) {
        for (int j=i; j<n;j++) {
            printf(" ");
            for (int k=i;k<=j;k++) {
                printf("%d ",arr[k]);
            }
            printf("\n");
        }
    }
	return 0;
}

