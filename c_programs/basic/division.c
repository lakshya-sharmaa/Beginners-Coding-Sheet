#include <stdio.h>

// Write a program where the user is asked to enter two
// integers (divisor and dividend) and the quotient and the
// remainder of their division is computed.(Both divisor and
// dividend should be integers.)

int main(void)
{
    int a, b, quot, remain;
    printf("Enter Dividend: ");
    scanf("%i", &a);
    printf("Enter Divisor: ");
    scanf("%i", &b);
    quot = a / b;
    remain = a % b;
    printf("Quotient is: %i\n", quot);
    printf("Remainder is: %i\n", remain);
}