#include <stdio.h>
int main ()
{
	int a,b,res;
	printf (" Enter value of a and b:");
	scanf ("%d%d",&a,&b);
	res=a*a+b*b+2*a*b;
	
	printf ("\nThe value of result is %d",res);
	
	return 0;
}

