#include<stdio.h>
int main()
{
   int a,b,c,s,res;
   printf("enter values of a,b,c,s:");
   scanf("%d%d%d%d",&a,&b,&c,&s);
   
   res=(s-a)*(s-b)*(s-c);
   printf("\nResult is %d",res);
   
   return 0;
   
}
