#include<stdio.h>
void main()
{
	int a,b,c,sum,sub,multiplication,division;
	printf("enter numbers:-\n");
	scanf("%d%d%d", &a,&b,&c);
	sum = a+b+c;
	sub = a-b-c;
	multiplication = a*b*c;
	division = a/b/c;
	printf ("sum = %d sub = %d multiplication = %d division = %d\t",sum,sub,multiplication,division);
}