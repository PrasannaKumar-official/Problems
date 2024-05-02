#include<stdio.h>
int main()
{
	int n,rem1,rem2;
	printf("Enter the number: ");
	scanf("%d",&n);
	rem1 = n % 10;
	rem2 = n * n % 10;
	if(rem1==rem2)
	printf("%d is a Automorphic Number",n);
	else
	printf("%d is not a Automorphic Number",n);
	return 0; 
}
