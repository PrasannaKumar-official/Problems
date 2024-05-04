#include<stdio.h>
int main(){
	int n,l=1;
	printf("Enter the number: ");
	scanf("%d",&n);
	int u=n;
	for(int i=1;i<=n;i++){
		printf("%d %d ",l,u);
		l+=1;
		u-=1;
	}
	return 0;
}
