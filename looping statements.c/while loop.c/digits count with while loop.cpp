#include<stdio.h>
int main()
{
	int count=0,num;
	printf("\n Enter any number : ");
	scanf("%d",&num);
	while(num>0){
		 num=num/10;
	     ++count;
	}
	printf(" \n The number of digits entered by user is %d,",count);
	
	return 0;    
}
