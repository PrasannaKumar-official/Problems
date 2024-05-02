#include<stdio.h>
#include<math.h>
int main()
{
	//optimised code
	int n,rev;
	printf("Enter the number");
	scanf("%d",&n);
	while(n>0){
		rev = rev * 10 + n % 10;
		n/=10;
	}
	printf("The reversed number is : %d",rev);
	return 0;
	// My code
	/*
	int rem,a,rev,len;
	len = log10(a)+1;
	while(a>0){
		rem=a%10;
		rev = rev + (rem*pow(10,(len-1)));
		a/=10;
	}
	*/
}
