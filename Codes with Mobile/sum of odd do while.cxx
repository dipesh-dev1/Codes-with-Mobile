#include<stdio.h>
void main()
{
	int a=1;
	int sum=0;
	printf ("odd numbers between 0-100 are:-\n");
	do
	{
	        printf ("%d\n",a);
	        sum+=a;
	        a+=2;
	        }
	            while(a<=100);
	            printf ("sum =%d\n",sum);
}