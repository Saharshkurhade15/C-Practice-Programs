#include<stdio.h>
int main()
{
	int arr[10]={1,4,2,33,26,39,58,23,90,10};
	int small,large,i;
	small=large=arr[0];
	
	for(i=1;i<=10;i++)
	{
		if(arr[i]<small)
		small=arr[i];
		if(arr[i]>large)
		large=arr[i];
	}
	
	printf("\n Small : %d\n Large : %d ",small,large);
	
	return 0;
}
