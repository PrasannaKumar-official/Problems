//input
//Enter the total number of elements: 5
//Enter the elements: 1 2 3 4 2
//output
//The maximum product of the subarray is: 48
#include<stdio.h>
#include<stdlib.h>
int main(){
	int n;
	printf("Enter the total number of elements: ");
	scanf("%d",&n);
	
	printf("Enter the elements: ");
	int* arr =(int*)malloc(n*sizeof(int));
	for(int i=0;i<n;i++){
		scanf("%d",&arr[i]);
	}
	
	int prod = 1,max_prod = 0;
	for(int i=0;i<n;i++){
		for(int j=i;j<n;j++){
			prod=1;
			for(int k=i;k<=j;k++){
				prod *= arr[k];
					if(max_prod < prod) {
						max_prod = prod;
					}		
			}
		}
	}

	printf("The maximum product of the subarray is: %d",max_prod);
	return 0;
}
