#include <stdio.h>

void let_do_math_some(int a, int b);

void main(void)
{
    int a, b;
    printf("Enter a number: ");
    scanf("%d", &a);
    printf("Enter second number: ");
    scanf("%d", &b);
    let_do_math_some(a, b);
}

void let_do_math_some(int a, int b)
{
    printf("Addition: %d\n", a + b);
    printf("Subtraction: %d\n", a - b);
    printf("Multification: %d\n", a * b);
    printf("Division: %.2f\n", (float) a / b);
}