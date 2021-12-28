# C-Practice-Programs

#include<stdio.h>
int large(int,int);
int main()
{
	int x,y;
	printf("\n Enter two numbers : ");
	scanf("%d%d",&x,&y);
	
	printf("\n Largest number between %d and %d is %d",x,y,large(x,y));
	
	return 0;
}

int large(int x,int y)
{
	if(x>y)
		return x;
	else
		return y;
}
