#include <stdio.h>

// Write a Program to Reverse a given Number N by user

int main(void)
{
    int num, reversenum = 0, remain;
    printf("Enter The Number: ");
    scanf("%i", &num);

    while(num != 0)
    {   
        remain = num% 10;
        reversenum = reversenum * 10 + remain;
        num /= 10;
    }

    printf("%i\n", reversenum);

    return 0;

}