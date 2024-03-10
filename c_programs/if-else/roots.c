#include <stdio.h>
#include <math.h>

// Write a Program which accepts coefficients of a
// quadratic equation from the user and displays the roots
// (both real and complex roots depending upon the
// discriminant)

int main(void)
{
    float a, b, c;

    printf("Enter the Number: ");
    scanf("%f", &a);
    printf("Enter the Number: ");
    scanf("%f", &b);
    printf("Enter the Number: ");
    scanf("%f", &c);

    float dis = b * b - 4 * a * c;

    if (dis > 0)
    {
        float root1 = (-b + sqrt(dis)) / (2 * a);
        float root2 = (-b - sqrt(dis)) / (2 * a);
        printf("%f and %f\n", root1, root2);
    }
    else if (dis == 0)
    {
        float root = -b / (2 * a);
        printf("%f\n", root);

    }
    else
    {
        float realpart = -b / (2 * a);
        float imaginarypart = sqrt(dis / (2 * a));

        printf("real part: %f and imagainary %f\n", realpart, imaginarypart);
    }
}