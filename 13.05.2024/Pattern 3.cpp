//input: 5
//1234554321
//1234  4321
//123    321
//12      21
//1        1
#include<stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		for(int j=0;j<n-i;j++){
			printf("%d",j+1);
		}
		for(int j=0;j<2*i;j++){
			printf(" ");
		}
		for(int j=n-i;j>0;j--){
			printf("%d",j);
		}
		printf("\n");
	}
	return 0;
}
