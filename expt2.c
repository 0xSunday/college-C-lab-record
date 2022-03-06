// Write a Program to all arithmetic operation using switch case.

#include <stdio.h>

int main()
{
    double a, b;

    int op;
    printf(" 1.Addition\n 2.Subtraction\n 3.Multiplication\n 4.Division\n");
    printf("Enter your Choice : ");
    scanf("%d", &op);
    printf("Enter the values of a & b: ");
    scanf("%lf %lf", &a, &b);

    switch (op)
    {
    case 1:
        printf("Sum of %.1lf and %.1lf is : %.1lf", a, b, a + b);
        break;
    case 2:
        printf("Difference of %.1lf and %.1lf is : %.1lf", a, b, a - b);
        break;
    case 3:
        printf("Multiplication of %.1lf and %.1lf is : %.1lf", a, b, a * b);
        break;
    case 4:
        printf("Division of Two Numbers is %.1lf : ", a / b);
        break;
    default:
        printf(" Enter Your Correct Choice.");
        break;
    }
    return 0;
}