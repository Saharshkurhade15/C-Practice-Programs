#include<stdio.h>

int main()
{
	char ch;
	printf("Enter any Character : ");
	scanf("%c",&ch);
	
	switch(ch)
	{
		case 'a':
		case 'e':
		case 'i':
		case 'o':
		case 'u':
		printf("\n The Character %c is Vowel",ch);
		break;
		default:printf("\n The Character %c is not Vowel",ch);
	}
	 
    return 0;
}

