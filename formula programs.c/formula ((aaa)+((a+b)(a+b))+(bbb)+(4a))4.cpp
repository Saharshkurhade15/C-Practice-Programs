#include <stdio.h>
int main ()
{
	float a,b,res;
	
	printf (" Enter value of a and b: ");
	scanf ("%f%f",&a,&b);
	res=((a*a*a)+((a+b)*(a+b))+(b*b*b)+(4*a))/4;
	
	printf ("\nThe value of result is %.1f",res);
	
	return 0;
}

