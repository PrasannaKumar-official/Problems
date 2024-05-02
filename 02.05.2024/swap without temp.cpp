#include<stdio.h>
int main()
{
	int a,b;
	printf("Enter two Numbers: ");
	scanf("%d %d",&a,&b);
	printf("Before Swapping a is %d b is %d\n",a,b);
	a = a + b;
	b = a - b;
	a = a - b;
	printf("After Swapping a is %d b is %d",a,b);
	return 0;
}
