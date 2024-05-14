//Input
//Enter number of elements: 5
//15 4 28 47 95
//Element to search: 95
//Output
//Element found
#include<stdio.h>
int main()
{
	int n;
	printf("Enter number of elements: ");
	scanf("%d",&n);
	
	int arr[n];
	printf("Enter %d elements: \n",n);
	for(int i=0;i<n;i++){
		scanf("%d",&arr[i]);
	}
	
	int search;
	printf("Element to search: ");
	scanf("%d",&search);
	
	int found=0;
	for(int i=0;i<n;i++){
		if (search==arr[i]){
		found=1;
		break;
	    }
	}	
	if (found==1)
		printf("Element found");
	else
		printf("Not found");
		
	return 0;
}
