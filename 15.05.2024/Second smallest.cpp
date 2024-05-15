#include<stdio.h>
#include<stdlib.h>
int main(){
	int n;
	printf("Enter number of Elements: ");
	scanf("%d",&n);
	
	int* arr = (int*)malloc(n*sizeof(int));
	for(int i=0;i<n;i++){
		scanf("%d",&arr[i]);
	}
	
	int smallest=INT_MAX,second_smallest=INT_MAX;
	for(int i=0;i<n;i++){
		if(arr[i]<smallest){
			second_smallest=smallest;
			smallest=arr[i];
		}
		else if(arr[i]>smallest && arr[i]<second_smallest){
			second_smallest = arr[i];
		}
	}
	printf("Second smallest is %d",second_smallest);
	return 0;
}
