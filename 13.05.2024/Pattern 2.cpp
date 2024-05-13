//input: 5
//1        1
//12      21
//123    321
//1234  4321
//1234554321
#include<stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		for(int j=0;j<=i;j++){
			printf("%d",j+1);
		}
		for(int j=0;j<2*(n-i-1);j++){
			printf(" ");
		}
        for(int j=i;j>=0;j--){
            printf("%d",j+1);
        }
		printf("\n");
	}
	
	return 0;
}
