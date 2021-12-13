#include<stdio.h>
int main()
{
    int rem,sum=0,no,i;
    printf("\n Enter any number : ");
    scanf("%d",&no);
	i=no;
	do{
		rem=no%10;
		sum=sum+rem*rem*rem;
		no=no/10;
	}while(no>0);
	if(i==sum)
	   printf("\n The number %d is Armstrong",i);
	else
	   printf("\n The number %d is not Armstrong",i);
  
	return 0;
	
}

