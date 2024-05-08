#include<stdio.h>
#include <math.h>
void f(int num)
{
	int root;
	if (num >= 0){
	
	root = sqrt(num);
	
	if (pow(root,2)==num)
	{
		printf("%d is a perfect square",num);
	}
	else
	{
		printf("%d is not a perfect square",num);
	}
}
else 
{
	printf("enter positive");
		scanf("%d",&num);
	f(num);
}
}
int main()
{
	int num,root,res;
	scanf("%d",&num);
	f(num);
	
	return 0;
}
