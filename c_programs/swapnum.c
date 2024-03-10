#include <stdio.h>
// Write a Program to Swap Two Numbers
int main(void)
{
    int a = 2, b = 4;
    printf("1st Number is: %i\n", a);
    printf("2nd Number is: %i\n", b);
    int temp = a;
    a = b;
    b = temp;
    printf("1st number is: %i\n", a);
    printf("1st number is: %i\n", b);
}