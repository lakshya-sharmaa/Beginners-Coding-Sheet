#include <stdio.h>

// Write a Program to Find Largest Number Among Three Numbers entered by users

int main(void)
{
    int num1, num2, num3;

    printf("Enter the Number: ");
    scanf("%i", &num1);

    printf("Enter the Number2: ");
    scanf("%i", &num2);

    printf("Enter the Number3: ");
    scanf("%i", &num3);

    if ( num1 >= num2 && num1 >= num3)
    {
        printf("%i number is bigger\n", num1);
    }
    else if ( num2 >= num1 && num2 >= num3)
    {
        printf("%i number is bigger\n", num2);
    }
    else
    {
        printf("%i number is bigger\n", num3);
    }
}