//input: 5
//12 14 16 18 20
//output: 80

#include<stdio.h>
int main(){
	int n;
	printf("Enter number of elements: ");
	scanf("%d",&n);
	int arr[n],sum=0;
	for(int i=0;i<n;i++){
		scanf("%d",&arr[i]);
	}
	for(int i=0;i<n;i++){
		sum+=arr[i];
	}
	printf("Sum is %d",sum);
	return 0;
}
