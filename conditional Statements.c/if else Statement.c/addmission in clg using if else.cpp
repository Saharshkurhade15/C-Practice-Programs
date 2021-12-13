#include <stdio.h>
int main()
{
	int p1,p2,p3,total;
	char gender;
	float per;
	printf("\nEnter 3 paper marks and gender : ");
	scanf("%d%d%d",&p1,&p2,&p3);
	
	printf("\nEnter Gender (F/M) : ",gender);
	scanf("%s",&gender);
	
	total=p1+p2+p3;
	per=total/3;

	if(per>=62 && gender=='F')
	{
		printf("\nShe can take admission in clg");
	}
	else
	{
		printf("\nShe cannot take admission in clg");
	}
    return 0;
}

