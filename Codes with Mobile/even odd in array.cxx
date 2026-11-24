#include <stdio.h>
void main()
 {
    int n;

    // Asking the user for the number of elements in the array
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    int arr[n];  // Declare the array of size n

    // Taking input from the user for the array elements
    printf("Enter the elements of the array:\n");
    for (int i = 0; i < n; i++)
     {
        scanf("%d", &arr[i]);
    }

    // Checking whether each element is even or odd
    for (int i = 0; i < n; i++)
     {
        if (arr[i] % 2 == 0)
         {
            printf("%d is Even\n", arr[i]);
        } else
         {
            printf("%d is Odd\n", arr[i]);
        }
    }
}