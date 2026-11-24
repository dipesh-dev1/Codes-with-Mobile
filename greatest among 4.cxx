#include<stdio.h>
void main()
{
	int a,b,c,d;
	printf ("enter numbers \n");
	scanf("%d%d%d%d",&a,&b,&c,&d);
	if(a>b)
	{
	    if(a>c)
	    {
	        if(a>d)
	        {
	            printf("Greater : %d",a);
	        }
	        else
	        {
	            printf("greater : %d",d);
	        }}
	        else
	        {
	            if(c>d)
	        {
	            printf("Greater : %d",c);
	        }
	        else
	        {
	            printf ("greater : %d",d);
	        }}}
	        else
	        {
	            if(b>c)
	            {
	                if(b>d)
	                {
	                    printf("greater : %d",b);
	                }
	                else
	                {
	                    printf("greater : %d",d);
	                }}
	                else
	                {
	                    if(c>d)
	                {
	                    printf("greater : %d",c);
	                }
	                else
	        {
	            printf ("greater : %d",d);
	        }}}
	  
}