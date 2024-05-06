#include<stdio.h>
int main()
{
	int n1,n2,lcm;
	scanf("%d %d",&n1,&n2);
	int max = (n1>n2)?n1:n2;
	
	while(1){
		if(max%n1==0 && max %n2==0){
			printf("LCM is %d",max);
			break;
		}
		++max;
	}
	return 0;
}
