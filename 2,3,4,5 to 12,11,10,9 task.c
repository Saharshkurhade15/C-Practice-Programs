# C-Practice-Programs

#include<stdio.h>
int main()
{
	int arr[]={2,3,4,5};
	int sum,res,res1,res2,res3;
	sum=arr[0]+arr[1]+arr[2]+arr[3];
	printf("\n Sum is %d",sum);
	
	res=sum-2;
	res1=sum-3;
	res2=sum-4;
	res3=sum-5;
	printf("\n numbers to be print is \n%d %d %d %d",res,res1,res2,res3);
	return 0;
	
}
