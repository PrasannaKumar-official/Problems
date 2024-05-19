#include<stdio.h>
#include<stdlib.h>

void swap(int *a,int *b){
	int temp = *a;
	*a = *b;
	*b = temp;
}

void sortbyparity(int nums[],int n){
	int i=0,j=0;
	
	while(j<n){
		if(nums[j]%2==0){
			swap(&nums[i],&nums[j]);
			i++;
		}
			j++;
	}
}
int main(){
	int n;
	printf("Enter number of elements: ");
	scanf("%d",&n);
	
	int*arr=(int*)malloc(n*sizeof(int));
	printf("Enter the elements: ");
	for(int i=0;i<n;i++){
		scanf("%d",&arr[i]);
	}
	sortbyparity(arr,n);
	
	printf("sorted elements are: ");
	for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
	return 0;
	
}
