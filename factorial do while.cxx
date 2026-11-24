#include<stdio.h>
void main()
{
	int a=1,i=1,f;
	    	printf("enter the number :-\n");
	scanf("%d",&f);
	do
	{
	    a*=i;
	    	 i++;
	}
	while(i<=f);
	{
	    printf ("f! : %d\n",a);
	}
}