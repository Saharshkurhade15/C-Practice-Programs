#include<stdio.h>
int main()
{
    int rem,rev=0,no,i;
	i=no;
	for(i=1;i<=50;++i){
		
	do{
		rem=no%10;
		rev=rev*10+rem;
		no/=10;
	}while(no>0);
	if(i==rev)
	   printf("\n The number %d is Palindrome",i);
	else
	   printf("\n The number %d is not Palindrome",i);
  }
	return 0;
	
}

