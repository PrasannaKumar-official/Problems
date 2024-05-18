//input
//Enter number of elements: 5
//Enter the elements: 1 2 3 4 5
//Enter the index to delete: 2
//output
//Elements are: 1 2 4 5

#include<stdio.h>
#include<stdlib.h>

int main(){
	int n,ind;
	printf("Enter number of elements: ");
	scanf("%d",&n);
	
	int*arr=(int*)malloc(n*sizeof(int));
	printf("Enter the elements: ");
	for(int i=0;i<n;i++){
		scanf("%d",&arr[i]);
	}
	
	printf("Enter the index to delete: ");
	scanf("%d",&ind);
	
	for(int i=ind;i<n-1;i++){
		arr[i]=arr[i+1];
	}
	n--;
	printf("Elements are: ");
	for(int i=0;i<n;i++){
		printf("%d ",arr[i]);
	}
	
	return 0;
}
