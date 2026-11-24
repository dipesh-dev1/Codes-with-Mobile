#include<stdio.h>
void main()
{
	float a,b,c,d,e,avg;
	printf("\n enter marks : \n");
	scanf("%f%f%f%f%f",&a,&b,&c,&d,&e);
	avg=(a+b+c+d+e)/5;
	printf ("\n avg : %.2f\n",avg);
	if(avg>=90)
	{
	    printf ("A+");
	}
	else if(avg>=80)
	{
	    printf("B+");
	}
	else if(avg<=70)
	{
	    printf("C+");
	}
	else if(avg<=60)
	{
	    printf("D");
	}
	else
	{
	    printf("FAIL");
	}
}