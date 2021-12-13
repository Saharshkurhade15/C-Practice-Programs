#include<stdio.h>
int main()
{
	int sum=0,no,rem;
	printf("\n Enter any number : ");
	scanf("%d",&no);
	for(no>0)
	{
		no/=10;
		rem=no%10;
        sum+=rem;   
	}
	printf("\n The sum of number entered by you is %d",sum);
	return 0;
}

