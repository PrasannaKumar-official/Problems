//input:4
//2 3 4 5
//output: 120

#include<stdio.h>
int main(){
	int n;
	printf("Enter number of elements: ");
	scanf("%d",&n);
	int arr[n],product=1;
	for(int i=0;i<n;i++){
		scanf("%d",&arr[i]);
	}
	for(int i=0;i<n;i++){
		product*=arr[i];
	}
	printf("Product is %d",product);
	return 0;
}
