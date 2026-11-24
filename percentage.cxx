#include<stdio.h>
void main()
{
	float a=50,b=60,c=78;
	float total,percentage;
	total=a+b+c;
	percentage = (total/300)*100;
	printf ("total =%.2f\n",total);
	printf ("percentage =%.2f%%\n",percentage);
}