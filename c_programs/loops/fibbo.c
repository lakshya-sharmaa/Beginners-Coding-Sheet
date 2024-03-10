#include <stdio.h>

// Write a Program to Display Fibonacci Series upto nth term (n is entered by user)

int main(void)
{
    int a;
    int first = 0, second = 1, next;
    do
    {
        printf("Enter The Number: ");
        scanf("%i", &a);

        if (a <= 0)
        {
            printf("Pls enter valid number");
        }
    }while(a <= 0);

    for(int i = 0; i < a; i++)
    {
        if (i <= 1)
        {
            next = i;
        }
        else
        {
            next = first + second;
            first = second;
            second = next;
        }
    printf("%i\n", next);
    }
}