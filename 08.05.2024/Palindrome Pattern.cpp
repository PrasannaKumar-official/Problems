//Enter the start and total count: 500 3
//505
//515 525
//535 545 555

#include<stdio.h>

int palin(int num){
	int rev = 0;
	int temp = num;
	
	while(num>0){
		int rem = num % 10;
		rev = rev * 10 + rem;
		num/=10;
	}
	return temp == rev;
}

int main()
{
	int start,count;
	printf("Enter the start and total count: ");
	scanf("%d %d",&start,&count);
	int current = start;
	for(int i =0;i<count;i++){
		for(int j=0;j<=i;j++){
			while(!palin(current))
			current++;
			printf("%d ",current);
			current++;
		}
		printf("\n");
	}
		return 0;	
}
