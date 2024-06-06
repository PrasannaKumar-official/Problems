//input
//kumar@123@
//output
//Total punctuation are: 2
#include<stdio.h>
#include<ctype.h>

int main()
{
	char str[100];
	fgets(str,sizeof(str),stdin);
	int i,count=0;
	for(i=0;str[i]!='\0';i++)
	{
		if(ispunct(str[i]))
		{
			count++;
		}
	}
	printf("Total punctuation are: %d",count);
	return 0;
}
