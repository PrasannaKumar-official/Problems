//input
//Enter the total number of elements: 5
//Enter the elements:
//2 5 8 6 0
//Enter the target: 7
//output
//[0,1]
// returning the index of the element in which sum gets as target value
#include<Stdio.h>
#include<stdlib.h>
int main(){
	int n,count=0,target;
	printf("Enter the total number of elements: ");
	scanf("%d",&n);
	
	int* arr = (int*)malloc(n*sizeof(int));
	printf("Enter the elements: ");
	for(int i=0;i<n;i++){
		scanf("%d",&arr[i]);
	}
	
	printf("Enter the target: ");
	scanf("%d",&target);
	for(int i=0;i<n;i++){
		for(int j=i+1;j<n;j++){
			if(arr[i]+arr[j]==target){
				printf("[%d,%d]",i,j);
			}
		}
	}
	return 0;
}
