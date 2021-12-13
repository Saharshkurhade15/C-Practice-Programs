#include <stdio.h>
int main()
{
	int num,even,odd;
	printf("Enter any number : ");
	scanf("%d",&num);

	if(num%2==0)
	{
		printf("\nThe number %d is even",num);
	}
	else
	{
		printf("\nThe number %d is odd",num);
	}
	
    return 0;
}

