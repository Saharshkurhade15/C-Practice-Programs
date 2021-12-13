#include <stdio.h>
int main()
{
	float per;
	printf("Enter your Percentage : ");
	scanf("%f",&per);

	if(per>=70)
	{
		printf("\nGrade A");
	}
	else if(per>=60&& per<=70)
	{
		printf("\nGrade B+");
	}
	else if(per>=45&& per<=60)
	{
		printf("\nGrade B");
	}
	else if(per>=35&& per<=45)
	{
		printf("\nGrade C");
	}
	else
	{
		printf("\nFail");
	}
    return 0;
}

