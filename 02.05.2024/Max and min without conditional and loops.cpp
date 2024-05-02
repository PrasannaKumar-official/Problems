#include<stdio.h>
int main()
{
	int a,b,max,min;
	printf("Enter two Numbers: ");
	scanf("%d %d",&a,&b);
	max=(a>b)*a + (b>a)*b;
	min=(a<b)*a + (b<a)*b;
	printf("Maximum Number: %d\n",max);
	printf("Minimum Number: %d\n",min);
	return 0;
}
