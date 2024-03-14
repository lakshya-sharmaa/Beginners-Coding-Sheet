#include <stdio.h>

// Write a Program that takes N elements (max. value of N is 100
// and N is the float number specified by user) from user, stores data
// in an array and Calculates the average of those numbers

int main(void)
{
    int n;
    float num[100], avg, sum=0.0;
    
    do
    {
        printf("Enter The Number of Data: ");
        scanf("%i", &n);

    }while(n > 100 || n <= 0);

    for (int i = 0; i < n; i++)
    {
        printf("Enter The Elements: ");
        scanf("%f", &num[i]);
        sum += num[i];
    }
    avg = sum/n;
    printf("Avg: % .2f\n", avg);
}