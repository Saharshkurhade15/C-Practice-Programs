# C-Practice-Programs

#include<stdio.h>
int main()
{
	int arr[]={2,3,4,5};
	int sum,res,i;
	sum=arr[0]+arr[1]+arr[2]+arr[3];
	for(i=2;i<=5;++i)
	{
	res=sum-i;
	printf("%d ",res);
    }
	
	return 0;
	
}
