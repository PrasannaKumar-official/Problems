//Enter the total number of elements: 5
//Enter the elements: 2 2 5 1 6
//Odd count:2
//Even count: 3
#include<Stdio.h>
#include<stdlib.h>
int main(){
	int n,odd_count=0,even_count=0;
	printf("Enter the total number of elements: ");
	scanf("%d",&n);
	
	int* arr = (int*)malloc(n*sizeof(int));
	printf("Enter the elements: ");
	for(int i=0;i<n;i++){
		scanf("%d",&arr[i]);
	}

	for(int i=0;i<n;i++){
		if(arr[i]%2==0){
			even_count++;
		}
		else
		odd_count++;
	}
	printf("Odd count:%d\nEven count: %d",odd_count,even_count);
return 0;

}
