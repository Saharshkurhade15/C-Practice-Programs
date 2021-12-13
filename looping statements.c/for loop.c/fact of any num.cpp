#include<stdio.h>
int main()
{
	int fact=1,no,i,num;
	printf("\n Enter any number : ");
	scanf("%d",&no);
	num=no;
	if(no<0)
	printf("\n Negative numbers Factorial cannot determined.");
	break;
	else
	for(i=1;i<=no;i++)
	{
      fact*=i;   
	}
	printf("\n The factorial of %d is %d",no,fact);
	return 0;
}
