//input
//Enter the number of elements: 5
//11 22 22 22 33
//Enter element to search: 22
//output
//count: 3
#include<stdio.h>
int main(){
	int n;
	printf("Enter the number of elements: ");
	scanf("%d",&n);
	
	int arr[n];
	printf("Enter %d elements: \n",n);
	for(int i=0;i<n;i++){
		scanf("%d",&arr[i]);
	}
	
	int search,count=0;
	printf("Enter element to search: ");
	scanf("%d",&search);
	
	for(int i=0;i<n;i++){
		if(search==arr[i]){
			count++;
		}
	}	
	printf("count: %d",count);
	return 0;
}
