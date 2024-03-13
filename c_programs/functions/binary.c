#include <stdio.h>

// Write a Program to Convert Decimal to Binary number
// manually by creating user-defined functions

void deci(int decimal);
int main(void)
{
    int num;

    printf("Enter a number: ");
    scanf("%i", &num);

    deci(num);
}

void deci(int decimal)
{
    int binarynum = 0, remainder, base=1;

    while(decimal > 0)
    {
        remainder = decimal % 2;
        binarynum += remainder * base;
        decimal /= 2;
        base *= 10;
    }
    printf("binary number is: %i\n", binarynum);
}