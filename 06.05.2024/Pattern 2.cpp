#include<stdio.h>

int main()
{
	int num=1,n;
	scanf("%d",&n);
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=n;j++)
		{
		printf("%d",num);
	}
	num+=1;
	printf("\n");
	}
	return 0;
}

