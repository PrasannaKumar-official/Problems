#include<Stdio.h>
int main()
{
	int n,d=1,num=1;
	printf("Enter the Number: ");
	scanf("%d",&n);
	for(int i=1;i<=n;i++){
		printf("%d ",num);
		d++;
		num+=d;
	} 
	return 0;
}

