#include <stdio.h>
int main()
{
	int a,b,c,min;
	printf("Enter 3 numbers : ");
	scanf("%d%d%d",&a,&b,&c);
	
	if(a<b){
		if(a<c)
		printf("minimum number is %d",a);
		else
		printf("minimum number is %d",c);
	}
		
	else{
		if(b<c)
			printf("minimum number is %d",b);
		else
			printf("minimum number is %d",c);
		}
	
    return 0;
}

