#include<stdio.h>
int main()
{
	int amt,note,n1;
	printf("\nEnter any Amount : ");
	scanf("%d",&amt);
	printf("\nEnter any Range : ");
	scanf("%d",&note);
	switch(note)
	{
		case 2000: n1=amt/2000;
		           printf("\n Number of 2000 notes in %d is %d",amt,n1);
		           break;
		printf("\n----------------------------------------------------");           
		case 500: n1=amt/500;
		          printf("\n Number of 500 notes in %d is %d",amt,n1);
		          break;
		printf("\n----------------------------------------------------");          
		case 200: n1=amt/200;
		          printf("\n Number of 200 notes in %d is %d",amt,n1); 
		          break;
		printf("\n----------------------------------------------------");		     
		case 100: n1=amt/100;
		          printf("\n Number of 100 notes in %d is %d",amt,n1);
		          break;
		printf("\n----------------------------------------------------");          		        
		case 50: n1=amt/50;
		         printf("\n Number of 50 notes in %d is %d",amt,n1);
		         break;
		printf("\n-----------------------------------------------------");         
		case 10: n1=amt/10;
		         printf("\n Number of 10 notes in %d is %d",amt,n1);
		     
	}
	 
    return 0;
}

