//input
//Enter number of elements: 5
//Enter the elements: 10 20 23 15 4
//output
//Reversed Array: 4 15 23 20 10
#include<stdio.h>
int main()
{
    int n;
    printf("Enter number of elements: ");
    scanf("%d",&n);
    
    int arr[n];
    printf("Enter the elements: ");
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    
    for(int i=0;i<n/2;i++){
        int temp=arr[i];
        arr[i]=arr[n-i-1];
        arr[n-i-1]=temp;
    }
    printf("Reversed Array: ");
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
    return 0;
}
