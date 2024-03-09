#include <stdio.h>

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