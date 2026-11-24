#include<stdio.h>
void main()
{
	int a[2][3],b[2][3],sum[2][3],sub[2][3],i,j;
	printf("Enter value of first matrix:-\n");
	for(i=0; i<2; i++)
	{
	    for(j=0; j<3; j++)
	    {
	        scanf("%d",&a[i][j]);
	    }}
	    printf("Enter value of second matrix:-\n");
	    for(i=0; i<2; i++)
	    {
	        for(j=0; j<3; j++)
	        {
	            scanf("%d",&b[i][j]);
	        }}
	        for(i=0; i<2; i++)
	        {
	            for(j=0; j<3; j++)
	            {
	                sum[i][j]=a[i][j]+b[i][j];
	                
	                sub[i][j]=a[i][j]-b[i][j];
	            }}
	            printf("sum of two matrices :-\n");
	            for(i=0; i<2; i++)
	            {
	                for(j=0; j<3; j++)
	            {
	                printf("[%d][%d]=%d\t",i,j,sum[i][j]);
	                
	            }
	            printf("\n");
	            }
	            printf("subtraction of two matrices :-\n");
	            for(i=0; i<2; i++)
	            {
	                for(j=0; j<3; j++)
	            {
	                printf("[%d][%d]=%d\t",i,j,sub[i][j]);
	                
	            }
	            printf("\n");
	            }
}