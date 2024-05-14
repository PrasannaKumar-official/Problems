//input
//Enter the number of elements: 5
//Enter 5 sorted elements:
//12 15 21 26 30
//Element to search: 26
//Output
//Found
#include<stdio.h>
int main()
{
	int n;
	printf("Enter the number of elements: ");
	scanf("%d",&n);
	if(n<=0)
	printf("Invalid input");
	
	int arr[n];
	printf("Enter %d sorted elements: \n",n);
	for(int i=0;i<n;i++){
		scanf("%d",&arr[i]);
	}
	
	int search;
	printf("Element to search: ");
	scanf("%d",&search);
	
	int low=0,high=n-1,mid,flag=0;
	while(low<=high){
		mid=low+(high-low)/2;
		if(arr[mid]==search){
			printf("Found");
			flag=1;
			break;
		}
		else if(arr[mid]>search){
			high=mid-1;
		}
		else{
			low=mid+1;
		}
	}
	if(flag==0)
	printf("Not found");
	return 0;
}
