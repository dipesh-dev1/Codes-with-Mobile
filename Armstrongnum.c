#include <stdio.h>

void main() {
    int num, result = 0, remainder, original_num;

    printf("Enter the number: ");
    scanf("%d", &num);

    original_num = num;

    while (num > 0) {
        remainder = num % 10;
        result += remainder * remainder * remainder;
        num /= 10;
    }

    if (result == original_num) {
        printf("It is an Armstrong number\n");
    } else {
        printf("It is not an Armstrong number\n");
    }
}