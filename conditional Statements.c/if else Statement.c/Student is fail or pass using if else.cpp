#include <stdio.h>
int main()
{
	int p1,p2,p3;
	printf("Enter 3 paper marks : ");
	scanf("%d%d%d",&p1,&p2,&p3);
	if(p1<45 || p2<45 || p3<45)
	{
		printf("Student is fail");
	}
	else
	{
		printf("Student is pass");
	}
    return 0;
}

