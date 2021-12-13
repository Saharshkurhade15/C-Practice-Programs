#include<stdio.h>
int main()
{
	int cp,dis10,dis5,dis8,dis2;
	char student,nonstudent,user;
	printf("\n Enter Cost Price : ");
	scanf("%d",&cp);
	printf("\n Wheather user is a Student or Non Student : ");
	scanf("%s%s",&student,&nonstudent);
	dis10=(10/500)*100;
	dis5=(5/500)*100;
	dis8=(8/500)*100;
	dis2=(2/500)*100;
	if(user==student && cp>=500)
	{
		printf("\n The Discount for student is %d",dis10);
	}
	else {
		printf("\n The Discount for student is %d",dis5);
	}	
	if(user==nonstudent && cp>=500)
	{
		printf("\n The Discount for student is %d",dis8);
	}
	else {
		printf("\n The Discount for student is %d",dis2);
	}	 
    return 0;
}
