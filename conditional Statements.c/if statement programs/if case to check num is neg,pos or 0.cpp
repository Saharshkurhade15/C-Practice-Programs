#include <stdio.h>
int main()
{
	int n;
	printf("Enter any number : ");
	scanf("%d",&n);
	if(n>0)
	{
		printf("\nThe number %d is positive",n);
	}
	
	if(n<0)
	{
		printf("\nThe number %d is negative",n);
	}
	if(n==0)
	{
		printf("\nThe number %d is zero",n);
	}
	
    return 0;
}

