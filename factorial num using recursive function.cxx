#include <stdio.h>
void factorial(int n, int result)
 {
    if (n >= 1)
     {
        printf("Factorial: %d\n", result);
    }
    factorial(n - 1, result * n);
}

void main() 
{
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
       factorial(num, 1); // Starting with result as 1
}