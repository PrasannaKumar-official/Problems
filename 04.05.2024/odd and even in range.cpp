#include<stdio.h>
int main()
{
	int start,end;
	printf("Enter the range: ");
	scanf("%d %d",&start,&end);
	printf("Even: \n");
	for(int i=start;i<=end;i++){
		if(i % 2 == 0)
		printf("%d ",i);
	}
	printf("\nOdd: \n");
	for(int i=start;i<=end;i++){
		if(i % 2 == 1)
		printf("%d ",i);
	}
	return 0;
}
