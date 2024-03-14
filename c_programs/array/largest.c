#include <stdio.h>

// Write a Program that takes n element from user and displays
// the largest element of an array?

int main(void)
{
    int n, num[100], large;

    do
    {
        printf("Enter The Number Range: ");
        scanf("%i", &n);
    }while(n <= 0 || n > 100);

    printf("Enter The Elements: ");
    scanf("%i", &large);

    for (int i = 1; i < n; i++)
    {
        printf("Enter The Elements: ");
        scanf("%i", &num[i]);
        if(large < num[i])
        {
            large = num[i];
        }
    }
    printf("largest number: %i\n", large);
}