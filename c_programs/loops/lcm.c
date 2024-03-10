#include <stdio.h>

// Write a Program to Find LCM of two numbers entered
// by user

int main(void)
{
    int num1, num2, gcd, lcm;

    printf("Enter the 1st numbers: ");
    scanf("%i", &num1);  
    printf("Enter the 2nd numbers: ");
    scanf("%i", &num2);

    for(int i = 1; i <= num1 && i <=num2; i++)
    {
        if (num1 % i == 0 && num2 % i == 0)
        {
            gcd = i;
        }
    }

    lcm = (num1 * num2) / gcd;

    printf("%i\n", lcm);

    return 0;
}