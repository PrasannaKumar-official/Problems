//input
//Enter the size of the n x n matrix: 3
//Enter the elements of the matrix:
//1 1 0
//0 1 0
//0 0 0
//output
//The resulting matrix is:
//1 0 0
//1 0 1
//1 1 1
#include <stdio.h>
#include <stdlib.h>

int main() {
    int n;
    printf("Enter the size of the n x n matrix: ");
    scanf("%d", &n);

    int** image = (int**)malloc(n*sizeof(int*));
    for (int i=0;i<n;i++) {
        image[i]=(int*)malloc(n*sizeof(int));
    }
    printf("Enter the elements of the matrix:\n");
    for (int i=0;i<n;i++) {
        for (int j=0;j<n;j++) {
            scanf("%d", &image[i][j]);
        }
    }
    for (int i=0;i<n;i++) {
        int left=0,right=n-1;
        while (left<=right){
            int temp = image[i][left]^1;
            image[i][left]=image[i][right]^1;
            image[i][right]=temp;
            left++;
            right--;
        }
    }
    printf("The resulting matrix is:\n");
    for (int i=0;i<n;i++) {
        for (int j=0;j<n;j++) {
            printf("%d ",image[i][j]);
        }
        printf("\n");
    }
    return 0;
}

