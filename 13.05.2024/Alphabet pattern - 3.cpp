//input: 5
//Aabcde
//ABabcd
//ABCabc
//ABCDab
//ABCDEa
#include<stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		for(int j=0;j<=i;j++){
			printf("%c",j+65);
		}
		for(int j=1;j<n-i+1;j++){
			printf("%c",j+96);
		}
		printf("\n");
	}
	return 0;
}
