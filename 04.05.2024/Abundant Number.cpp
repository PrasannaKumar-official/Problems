#include<stdio.h>
int main()
{
	int n,sum=0;
	printf("Enter the number: ");
	scanf("%d",&n);
	for(int i=1;i<n;i++)
	{
		if(n%i==0){
			sum+=i;
		}
	}
	if(sum>n)
	printf("It is Abundant Number.");
	else
	printf("It is not a Abundant number.");
	return 0;	
}
