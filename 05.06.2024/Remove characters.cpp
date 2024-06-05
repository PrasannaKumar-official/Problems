//input
//kumar@123
//output
//The alphabets are kumar

#include<stdio.h>
#include<ctype.h>

int main()
{
	char str[100],alphabets[100],charac[100];
	int alpha_index=0,charac_index=0;
	fgets(str,sizeof(str),stdin);
	
	for(int i=0;str[i]!='\0';i++)
	{
		if(isalpha(str[i]))
		{
			alphabets[alpha_index++]=str[i];
		}
		else
		{
			charac[charac_index++]=str[i];
		}
	}
	alphabets[alpha_index]=='\0';
	charac[charac_index]=='\0';
	
	printf("The alphabets are %s",alphabets);
	return 0;
}
