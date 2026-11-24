#include<stdio.h>
void main()
{
	int a[2][3],b[2][3],i,j;
	printf("Enter value of first matrix:-\n");
	for(i=0; i<2; i++)
	{
	    for(j=0; j<3; j++)
	    {
	        scanf("%d",&a[i][j]);
	    }}
	printf ("Transpose matrix is :-\n");
	        for(i=0; i<2; i++)
	        {
	            for(j=0; j<3; j++)
	            {
	                b[j][i]=a[i][j];
	            }}
	            
	            for(i=0; i<3; i++)
	            {
	                for(j=0; j<2; j++)
	            {
	                printf("[%d][%d]=%d\t",i,j,b[i][j]);
	            }
	            printf("\n");
	            }
}