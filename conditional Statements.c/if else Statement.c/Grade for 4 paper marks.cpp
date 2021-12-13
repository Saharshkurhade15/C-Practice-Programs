#include <stdio.h>
int main()
{
	int p1,p2,p3,p4,total;
	char grade;
	float per;
	printf("Enter 4 paper marks : ");
	scanf("%d%d%d%d",&p1,&p2,&p3,&p4);
	total=p1+p2+p3+p4;
	per=total/4;

	if(per>=90)
	{
		printf("\nGrade A");
	}
	else if(per>=80&& per<=90)
	{
		printf("\nGrade B+");
	}
	else if(per>=70&& per<=80)
	{
		printf("\nGrade B");
	}
	else if(per>=60&& per<=70)
	{
		printf("\nGrade C");
	}
	else if(per>=50&& per<=60)
	{
		printf("\nGrade C");
	}
	else
	{
		printf("\nFail");
	}
    return 0;
}

