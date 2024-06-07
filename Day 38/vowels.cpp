#include<stdio.h>
#include<string.h>
#include<ctype.h>
int main()
{
	char c;
	scanf("%c",&c);
	c= tolower(c);
	
	if(!isalpha(c))
	{
		printf("invalid");
		return 1;
	}
	
	char vowels[]="aeiou";
	if(strchr(vowels,c)!=NULL)
	printf("vowel");
	else 
	printf("consonant");
	return 0;
}
