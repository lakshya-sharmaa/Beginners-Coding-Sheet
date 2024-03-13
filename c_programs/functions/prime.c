#include <stdio.h>

// Write a Program to Display Prime Numbers Between Two
// Intervals (entered by the user) Using Functions

int prime(int num);
void primenum(int a, int b);

int main(void)
{
    int num1, num2;
    do
    {
    printf("Enter Number: ");
    scanf("%i", &num1);
    if(num1 <= 1)
    {
        printf("Enter the valid Number\n");
    }
    }while (num1 <= 1);
    do
    {
    printf("Enter The Number: ");
    scanf("%i", &num2);

    if(num2 <= num1)
    {
        printf("Enter the number greater than %i\n", num1);
    }

    }while (num2 <= num1 || num2 <= 1);

    primenum(num1, num2);
}


int prime(int num)
{
    if(num <= 1)
    {
       return 0;
    }

    for(int i=2; i * i <= num; i++)
    {
        if (num % i == 0)
        {
            return 0;
        }
    }
    return 1;
}

void primenum(int a, int b)
{
    for (int i=a; i<=b; i++)
    {
        if(prime(i))
        {
            printf("Prime Numbers are: %i\n", i );
        }
    }
}
