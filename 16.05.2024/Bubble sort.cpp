//input
//Enter number of elements: 5
//Enter the elements: 25 22 14 96 63
//output
//Sorted Elements are: 14 22 25 63 96
#include<Stdio.h>
#include<stdlib.h>
int main()
{
	int n;
	printf("Enter number of elements: ");
	scanf("%d",&n);
	
	int* arr=(int*)malloc(n*sizeof(int));
	printf("Enter the elements: ");
	for(int i=0;i<n;i++){
		scanf("%d",&arr[i]);
	}
	
	for(int i=0;i<n;i++){
		for(int j=0;j<n-i-1;j++){
			if(arr[j]>arr[j+1]){
				int temp=arr[j];
				arr[j]=arr[j+1];
				arr[j+1]=temp;
			}
		}
	}
	printf("Sorted Elements are: ");
	for(int i=0;i<n;i++){
		printf("%d ",arr[i]);
	}
	return 0;
}

