#include<stdio.h>
int main()
{
	int fact,no,i;
	printf("\n Enter any number : ");
	scanf("%d",&no);
	for(i=1;i<=no;--i){

	    fact=fact*i;
	    
	}
	printf("\n The factorial of %d is %d",no,fact);
	return 0;
}
