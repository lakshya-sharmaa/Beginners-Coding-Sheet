#include <stdio.h>

// Write a Program to Calculate Sum of first N Natural
// Numbers (here value of N is Entered by user)

int main(void)
{
    int n;
    int total = 0;

    do {
        printf("Enter a positive integer for N: ");
        scanf("%i", &n);

        if (n <= 0) {
            printf("Please enter a valid positive integer.\n");
        }

    } while (n <= 0);

    for ( int i = 1; i <= n; i++)
    {
        total = total + i;
    }
    printf("Sum is: %i\n", total);
}