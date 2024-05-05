#include<stdio.h>
int main(){
	int n,sq,sum=0,rem;
	printf("Enter the number: ");
	scanf("%d",&n);
	sq = n * n;
//	for(int i=1;sq>0;i++)
//	{
//		rem=sq%10;
//		sum += rem;
//		sq /= 10;
//	}
//Optimised code
    while (sq > 0 && sum <= n) {
        rem = sq % 10;
        sum += rem;
        sq /= 10;
    }
	if(n == sum)
	printf("Neon Number");
	else
	printf("Not a Neon Number");
	return 0;
}
