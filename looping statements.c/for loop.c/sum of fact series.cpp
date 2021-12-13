#include<stdio.h>
#include<math.h>
int main()
{
	int sum=1,i,x,n,fact;
	printf("\n Enter any value for x and no : ");
	scanf("%d%d",&n,&x);
	
	for(i=1;i<=n;++i)
	{
		n=i;
		fact=1;
		while(n>0){
			fact=fact*n;
			n--;
		}
		sum=sum+(pow(x,i)/fact);  
	}
	printf("\n The sum of series is %d",sum);
	return 0;
}

