#include<stdio.h>
void main()
{
	FILE *file=fopen("sum.txt","w");
	int a,b,c;
	printf("enter two num");
	scanf("%d%d",&a,&b);
	{
	c=a+b;
	}
	{
	printf("sum : %d",c);
	fprintf (file,"sum : %d",c);
	}
	fclose(file);
	if(file==NULL)
	{
	    printf("file is not found");
	}
}