#include<stdio.h>

int main()
{
	char ch;
	printf("Enter any Character : ");
	scanf("%c",&ch);
	if(ch>=65 && ch<=90)
	{
		printf("\n The Character %c is of Upper Case",ch);
	}
	else if(ch>=97 && ch<=122)
	{
		printf("\n The Character %c is of Lower Case",ch);
	}
	else if(ch>=48 && ch<=57)
	{
		printf("\n The Character %c is digit",ch);
	}
	else
	{
		printf("\n The Character %c is a special symbol",ch);
	}

    return 0;
}

