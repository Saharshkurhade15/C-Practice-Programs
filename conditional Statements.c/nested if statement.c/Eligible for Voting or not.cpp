#include <stdio.h>
int main()
{
	int age;
	printf("Enter your age : ");
	scanf("%d",&age);

	if(age>=18)
	{
		printf("\nThe person is eligible for voting");
	}
	else
	{
		printf("\nThe person is not eligible for voting");
	}
	
    return 0;
}

