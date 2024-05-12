//Enter no of elements: 5
//25 87 96 27 14
//Second largest element is: 87
#include<stdio.h>

int main() {
    int n;
    printf("Enter no of elements: ");
    scanf("%d", &n);
    
    int arr[n];
    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    
    int largest = arr[0];	
    int secondLargest = arr[0]; 
    
    for(int i = 1; i < n; i++) {
        if(arr[i] > largest) {
            secondLargest = largest;
            largest = arr[i];
        } else if(arr[i] > secondLargest && arr[i] != largest) {
            secondLargest = arr[i];
        }
    }
    printf("Second largest element is: %d\n", secondLargest);
    return 0;
}

