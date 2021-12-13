#include<stdio.h>
#include<string.h>
int main()
{
	char day[3];
	printf("Enter any day : ");
	gets(day);
	if(strcmp(day,"sat"==0) || strcmp(day,"sun")==0)
	printf("Weekend.");	
	else
	printf("working Day.");
    return 0;
}
