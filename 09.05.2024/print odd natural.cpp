#include<stdio.h>
int main()
{
	int num,sum=0,start=1;
	scanf("%d",&num);
	printf("%d ",start);
	for (int i = 1;i<num;i++){
		printf("%d ",start+=2);
		sum+=start;
	}
	printf("\n%d",sum+1);
	return 0;
}
