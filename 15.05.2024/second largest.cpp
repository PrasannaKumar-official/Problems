//input
//Enter number of elements: 5
//1 2 2 5 5
//output
//Second largest element is: 2
#include<stdio.h>
#include<stdlib.h>
int main()
{
	int n;
	printf("Enter number of elements: ");
	scanf("%d",&n);
	
	int* arr=(int*)malloc(n*sizeof(int));
	for(int i=0;i<n;i++){
		scanf("%d",&arr[i]);
	}
	
	int largest=INT_MIN,second_largest=INT_MIN;
	for(int i=0;i<n;i++){
		if(arr[i]>largest){
			second_largest=largest;
			largest=arr[i];
		}
		else if(arr[i]<largest && arr[i]>second_largest){
			second_largest=arr[i];
		}	
	}
	printf("Second largest element is: %d",second_largest);
	return 0;
}
