//input: 5
//1
//3 3
//5 5 5
//7 7 7 7
//9 9 9 9 9
#include<stdio.h>
int main(){
	int n;
	scanf("%d",&n);
	int k=1;
	for(int i=1;i<=n;i++){
		for(int j=1;j<=i;j++){
			printf("%d ",k);
		}
		k+=2;
		printf("\n");
	}
	return 0;
}
