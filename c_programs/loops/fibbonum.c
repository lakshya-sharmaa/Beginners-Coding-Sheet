#include <stdio.h>

// Write a Program to Display Fibonacci Series upto
// certain number n (n is entered by user)
// Example: n=100
// Output:
// Fibonacci Series: 0, 1, 1, 2, 3, 5, 8, 13, 21, 34, 55, 89

int main(void) {
    int n;
    
    do {
        printf("Enter a number");
        scanf("%i", &n);

        if (n <= 0) {
            printf("Please enter a valid positive number.\n");
        }
    } while (n <= 0);

    int a = 0, b = 1, next;

    printf("Fibonacci Series up to %i:\n", n);
    printf("%i, %i", a, b);

    while ((a + b) <= n) 
    {
        next = a + b;
        printf(", %i", next);
        a = b;
        b = next;
    }

    printf("\n");
}
