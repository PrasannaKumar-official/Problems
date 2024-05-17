#include<stdio.h>
#include<stdlib.h>
int main(){
	int n;
	printf("Enter number of elements: ");
	scanf("%d",&n);
	
	printf("Enter the elements: ");
	int* arr=(int*)malloc(n*sizeof(int));
	for(int i=0;i<n;i++){
		scanf("%d",&arr[i]);
	}
	printf("The squared elements are: ");
	for(int i=0;i<n;i++){
		printf("%d ",arr[i]*arr[i]);
	}
	
	return 0;
}
