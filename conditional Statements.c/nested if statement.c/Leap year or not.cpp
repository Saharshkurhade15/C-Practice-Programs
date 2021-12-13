#include <stdio.h>
int main()
{
	int year;
	printf("Enter any year : ");
	scanf("%d",&year);
	if(year%100!=0)
	if(year%4==0)
	printf("\n%d is a Leap year",year);
	else
	printf("\n%d is not a Leap year",year);
	else{
		if(year%400==0)
		printf("\n%d is a Leap year",year);
		else
		printf("\n%d is not a Leap year",year);
		}
	
    return 0;
}

