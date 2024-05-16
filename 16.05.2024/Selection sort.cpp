#include<stdio.h>
#include<stdlib.h>
int main(){
	int n;
	printf("Enter number of elements: ");
	scanf("%d",&n);
	
	int* arr=(int*)malloc(n*sizeof(int));
	printf("Enter the elements: ");
	for(int i=0;i<n;i++){
		scanf("%d",&arr[i]);
	}
	
	int temp,ind;
	for(int i=0;i<n;i++){
		ind=i;
		for(int j=i+1;j<n;j++){
			if(arr[j]<arr[ind]){
				ind=j;
			}
		}
		temp=arr[i];
		arr[i]=arr[ind];
		arr[ind]=temp;
	}
	printf("Sorted Elements are: ");
	for(int i=0;i<n;i++){
		printf("%d ",arr[i]);
	}
	return 0;
}
