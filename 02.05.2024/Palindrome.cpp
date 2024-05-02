#include<stdio.h>
int main()
{
	int n,rev,temp;
	printf("Enter the number: ");
	scanf("%d",&n);
	temp = n;
	while(n>0)
	{
		rev = rev * 10 + n % 10;
		n/=10;
	}	
	if(rev == temp)
	printf("%d is a Palindrome Number.",temp);
	else
	printf("%d is not a Palindrome Number.",temp);
	return 0;
}
