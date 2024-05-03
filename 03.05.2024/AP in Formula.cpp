#include<stdio.h>
int main()
{
    int a, n, d,last;
    printf("Enter a , n , d: ");
    scanf("%d %d %d", &a, &n, &d);
    last = a + (n-1)*d;
	for(int i=a;i<=last;i+=d){
		printf("%d ",i);
	}
    return 0;
}

