#include <stdio.h>
void main()
{
    int a, i = 1, sum;
    printf("enter num:");
    scanf("%d", &a);
    do
    {
        printf("%dx%d : %d\n", a, i, a * i);
        i++;
        sum += a * i;

    } while (i <= 10);
    printf("sum : %d", sum);
}