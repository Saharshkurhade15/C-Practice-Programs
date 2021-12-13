#include <stdio.h>
int main ()
{
	int num,a,b,c,d,e,reverse;
	printf (" Enter any 5 digit number : ");
	scanf ("%d",&num);
	a=num%10;
	num=num/10;
	b=num%10;
	num=num/10;
	c=num%10;
	num=num/10;
	d=num%10;
	num=num/10;
	e=num;
	
	reverse=a*10000+b*1000+c*100+d*10+e*1;

	printf ("\nThe Reverse of 5 digit number is %d",reverse);
	
	return 0;
}

