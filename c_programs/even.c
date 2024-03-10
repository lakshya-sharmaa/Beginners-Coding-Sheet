#include <stdio.h>
//Write a Program to Check Whether Number is Even or Odd
int main(void)
{
    int a;
    printf("Enter The number: ");
    scanf("%i", &a);

    if(a % 2 == 0)
    {
        printf("Number %i is Even\n", a);
    }
    else
    {
        printf("Number %i is Odd\n", a);
    }
}