#include <stdio.h>
int main()
{
	char c1,c2;
    int i1,i2;
    float f1,f2;
    c1='H';
    i1=70.26;
    f1=16.5;
    c2=i1;
    i2=f1;
    printf("\n i2=%d, c2=%c",i2,c2);
    f2=i1;
    i2=c1;
    
    printf("\n f2=%.3f, i2=%d,",f2,i2);
    
    return 0;
}

