//input: 5
//1
//22
//333
//4444
//55555
#include<Stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		for(int j=0;i>=j;j++){
			printf("%d",i+1);
		}
		printf("\n");
	}
	return 0;
}
