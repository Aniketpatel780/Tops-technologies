#include <stdio.h>

void add(int *a, int *b, int *sum);

void main(void)
{
    int a = 10;
    int b = 20;
    int sum;

    add(&a, &b, &sum);

    printf("%d + %d = %d", a, b, sum);
}

void add(int *a, int *b, int *sum)
{
    *sum = *a + *b;
}