//input: 5
//*        *
//**      **
//***    ***
//****  ****
//**********
//**********
//****  ****
//***    ***
//**      **
//*        *

#include<stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		//left upper
		for(int j=0;j<=i;j++){
			printf("*");					
		}
		// space
		for(int j=0;j<2*(n-i-1);j++)
		{
			printf(" ");
		}
		//right upper
		for(int j=i+1;j>0;j--){
			printf("*");
		}

		printf("\n");
	}
	
	for(int i=0;i<n;i++){
				//left lower
		for(int j=0;j<n-i;j++){
			printf("*");
		}
		//space
		for(int j=0;j<2*i;j++){
			printf(" ");
		}
		//lower right
		for(int j=n-i;j>0;j--){
			printf("*");
		}
		printf("\n");
	}
	return 0;
}
