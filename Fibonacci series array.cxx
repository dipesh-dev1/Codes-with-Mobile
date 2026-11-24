#include <stdio.h>
void main()
 {
    int n, i;
    
    // Input: Number of terms
    printf("Enter the number of terms: ");
    scanf("%d", &n);
    
    // Declare array to store Fibonacci series
    int arr[n];

    // First two Fibonacci numbers
    arr[0] = 0;
    arr[1] = 1;

    // Generate Fibonacci sequence
    for (i = 2; i < n; i++)
     {
        arr[i] = arr[i - 1] + arr[i - 2];
    }

    // Print the Fibonacci series
    printf("Fibonacci Series: ");
    for (i = 0; i < n; i++)
     {
        printf("%d ", arr[i]);
    }
}