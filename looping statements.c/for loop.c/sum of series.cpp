#include<stdio.h>
#include<math.h>
int main()
{
	int sum=1,i,x,no,pow;
	printf("\n Enter any value for x and no : ");
	scanf("%d%d",&no,&x);
	
	for(i=1;i<=no;++i)
	{
		sum=sum+(pow(x,i)/i);
	}
	printf("\n The sum of series is %d",sum);
	return 0;
}

