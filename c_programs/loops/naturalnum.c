#include <stdio.h>

// Write a Program to Calculate Sum of first N Natural
// Numbers (here value of N is Entered by user)

int main(void)
{
    int n;
    int total = 0;
    printf("Enter the number: ");
    scanf("%i", &n);

    for ( int i = 1; i <= n; i++)
    {
        total = total + i;
    }
    printf("Sum is: %i\n", total);
}