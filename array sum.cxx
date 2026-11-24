#include<stdio.h>
void main()
{
	int a[5], sum =0, i;
	printf ("enter numbers:-\n");
	for( i=0; i<5; i++)
	{
	    scanf("%d", &a[i]);
	    sum = sum + a[i];
	}
	    
	        printf ("sum =%d\n",sum);
	        
}