#include<stdio.h>
void main()
{
	int a=0,b=1,c=a+b,i;
	printf ("%d\t,%d\t",a,b);
	for(i=3; i<=10; i++)
	{
	    printf ("%d\t",c);
	    a=b;
	    b=c;
	    c=a+b;
	    }
}