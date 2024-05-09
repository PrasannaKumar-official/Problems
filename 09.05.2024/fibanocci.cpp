/*
Sample input:
5

Sample output:
0 1 1 2 3 
*/
#include<stdio.h>

int main(){
	int n,a=0,b=1,sum;
	scanf("%d",&n);
	printf("%d %d ",a,b);
	for(int i=2;i<n;i++){
		sum = a + b;
		printf("%d ",sum);
		a=b;
		b=sum;
	}
	return 0;
}

