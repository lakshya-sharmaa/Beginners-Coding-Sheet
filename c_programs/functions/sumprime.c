#include <stdio.h>
// Write a Program to check if an integer (entered by the user)
// can be expressed as the sum of two prime numbers,if yes then
// print all possible combinations with the use of functions.
// Example
// Enter a positive integer: 34
// OUTPUT:
// 34 = 3 + 31
// 34 = 5 + 29
// 34 = 11 + 23
// 34 = 17 + 17

int findprime(int a);
void sumprime (int sum);
int main(void)
{
    int num;
    do
    {
        printf("Enter The Number:");
        scanf("%i", &num);

    } while (num <= 1);

    sumprime(num);   
}

int findprime(int a)
{
    for (int i = 2; i*i <= a; i++)
    {
        if (a % i == 0)
        {
            return 0;
        }
    }
    return 1;
}

void sumprime (int sum)
{
    for (int i=0; i <= sum/2; i++)
    {
        if(findprime(i) && findprime(sum-i))
        {
            printf("%i = %i + %i\n", sum, i , sum-i);
        }
    }
}