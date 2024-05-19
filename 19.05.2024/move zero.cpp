#include<stdio.h>
#include<stdlib.h>

void swap(int *a,int *b){
	int temp = *a;
	*a = *b;
	*b = temp;
}

void movezero(int nums[],int n){
	int i=0,j=0;
	
	while(j<n){
		if(nums[j]==0){
			j++;
		}
		else{
			swap(&nums[i],&nums[j]);
			i++;
			j++;
		}
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
	movezero(arr,n);

	printf("Moved elements are: ");	
	for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
	return 0;
	
}
