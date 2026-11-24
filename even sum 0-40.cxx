#include<stdio.h>
void main()
{
	int a=0,sum=0;
	while(a<=40)
	{
	    printf ("%d\n",a);
	    sum+=a;
	    a+=2;
	}
	printf ("even sum : %d",sum);
}