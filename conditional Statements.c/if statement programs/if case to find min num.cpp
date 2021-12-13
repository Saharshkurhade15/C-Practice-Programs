#include <stdio.h>
int main()
{
	int n1,n2,n3,n4,n5,min;
	printf("Enter 5 numbers : ");
	scanf("%d%d%d%d",&n1,&n2,&n3,&n4);
	min=n1;
	if(min>n2)
	{
		min=n2;
	}
	if(min>n3)
	{
		min>n3;
	}
	if(min>n4)
	{
		min=n4;
	}
	printf("\nThe minimum number is %d",min);
    return 0;
}

