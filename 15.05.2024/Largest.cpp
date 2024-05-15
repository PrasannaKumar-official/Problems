//input
//Enter no of elements: 5
//Enter 5 elements: 12 25 13 54 45
//output
//54 is largest element.
#include<stdio.h>
#include<stdlib.h>
int main(){
	int n;
	printf("Enter no of elements: ");
	scanf("%d",&n);
	
	int *arr=(int*)malloc(n*sizeof(int));
	printf("Enter %d elements: ",n);
	for(int i=0;i<n;i++){
		scanf("%d",&arr[i]);
	}
	int high=arr[0];
	for(int i=1;i<n;i++){
		if(arr[i]>high){
			high=arr[i];
		}
	}
	printf("%d is largest element.",high);
	return 0;
}
