//input
//Enter the number of elements: 5
//12 45 63 78 10
//output
//10 is smallest element
#include<stdio.h>
#include<stdlib.h>

int main(){
	int n;
	printf("Enter the number of elements: ");
	scanf("%d",&n);
	
	int* arr =(int*)malloc(n*sizeof(int));
	for(int i=0;i<n;i++){
		scanf("%d",&arr[i]);
	} 
	
	int small=arr[0];
	for(int i=1;i<n;i++){
		if(arr[i]<small){
			small=arr[i];
		}
	}
	printf("%d is smallest element",small);
	free(arr);
	return 0;
}
