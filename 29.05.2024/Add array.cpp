//input
//Enter no of elements in array1: 5
//Enter the elements: 465 2 3 8 9
//Enter no of elements in array2: 3
//Enter the elements: 2 5 6
//output
//Added array elements are: 467 7 9 8 9
#include<stdio.h>
int main()
{
    int n1,n2;
    printf("Enter no of elements in array1: ");
    scanf("%d",&n1);
    int arr1[n1],sum[n1];
    printf("Enter the elements: ");
    for(int i=0;i<n1;i++){
        scanf("%d",&arr1[i]);
    }
    printf("Enter no of elements in array2: ");
    scanf("%d",&n2);
    int arr2[n2];
    printf("Enter the elements: ");    
    for(int i=0;i<n2;i++){
        scanf("%d",&arr2[i]);
    }
    
    int max_size=n1>n2?n1:n2;
    
    for(int i=0;i<max_size;i++){
        sum[i]=(i<n1?arr1[i]:0)+(i<n2?arr2[i]:0);
    }
    printf("Added array elements are: ");
    for(int i=0;i<max_size;i++){
        printf("%d ",sum[i]);
    }
    
    return 0;
}
