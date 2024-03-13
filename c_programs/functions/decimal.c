#include <stdio.h>

// Write a Program to Convert Binary Number to Decimal
// manually by creating user-defined functions

void decimal(int binarynum);
int main(void)
{
    int num;

    printf("Enter The Binary Number:");
    scanf("%i", &num);

    decimal(num);
}

void decimal(int binarynum)
{
    int decimalnum = 0, base = 1, remainder; 

    while (binarynum > 0)
    {
        remainder = binarynum % 2;
        decimalnum += remainder * base; 
        binarynum /= 10;
        base *= 2;
    }
    printf("Decimal Number is: %i\n", decimalnum);
}