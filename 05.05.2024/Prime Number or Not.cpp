#include<stdio.h>
#include<math.h>
int main()
{
	int n,flag=1;
	printf("Enter the Number: ");
	scanf("%d",&n);
	if (n==0||n==1){
		flag = 0;
	}
	int limit = ceil(sqrt(n));
	for(int i=2;i<=limit;i++)
	{
		if(n % i == 0){
			flag = 0;
			break;
		}
	}
	if(flag)
	printf("Prime Number.");
	else
	printf("Not a Prime Number.");
	
	return 0;
}
