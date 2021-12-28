# C-Practice-Programs

#include<stdio.h>
int evenodd(int);
int main()
{
	int n,num,ans;
	printf("\n Enter any number : ");
	scanf("%d",&num);
	ans=evenodd(num);
	if(ans==1)
	    printf("\n The number %d is even",num);
	if(ans==0)
    	printf("\n The number %d is odd",num);
	return 0;
}

int evenodd(int n)
{
	if(n%2==0)
		return 1;
	else
		return 0;
}
