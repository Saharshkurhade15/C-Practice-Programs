#include<stdio.h>
int main()
{
	int a,b,mul=0,i;
	printf("\n Enter two numbers a and b : ");
	scanf("%d%d",&a,&b);
	for(i=1;i<=b;++i)
	{
	mul=mul+a;
    }
	printf("\n The mul of two numbers %d and %d is %d",a,b,mul);
	
	return 0;
}

