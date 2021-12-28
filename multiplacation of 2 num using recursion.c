# C-Practice-Programs

#include<stdio.h>
int mul(int,int);
int main()
{
    int a,b,product;
    printf("\n Enter any two integers: ");
    scanf("%d%d",&a,&b);
    product = mul(a,b);
    printf("\n Multiplication of two integers is %d",product);
    return 0;
}

int mul(int a,int b)
{
    static int product=0,i=0;
    if(i<a)
	{
         product=product+b;
         i++;
         mul(a,b);
    }
    return product;
}
