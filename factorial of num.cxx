#include <stdio.h>
void main()
{
	int factorial;
	printf ("enter the value of factorial :-");
	scanf ("%d",&factorial);
	int n = 1;
	int tmpfact = 1;
	while (tmpfact < factorial)
	{
		tmpfact *= n;
		n++;
	}
	if (tmpfact == factorial)
		printf("%d is a factorial of %d\n", factorial, n - 1);
	else
		printf("%d is not a factorial\n", factorial);
}
