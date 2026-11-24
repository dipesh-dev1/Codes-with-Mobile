#include <stdio.h>

// Function to generate Fibonacci series using loop
void fibonacci(int n) 
{
    int a = 0, b = 1, next, i;

    printf("Fibonacci Series: %d %d ", a, b);  // Printing the first two terms

    for (i = 2; i < n; i++) {
        next = a + b;     // Calculate the next term
        printf("%d ", next);
        a = b;            // Update 'a' and 'b' for the next iteration
        b = next;
    }
}

int main()
 {
    int n;

    printf("Enter the number of terms: ");
    scanf("%d", &n);
        fibonacci(n);  // Call the fibonacci function

    return 0;
}