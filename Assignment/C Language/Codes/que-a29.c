#include <stdio.h>

void swap(int *a, int *b);

void main(void)
{
    int a = 10;
    int b = 20;

    swap(&a, &b);

    printf("a = %d, b = %d", a, b);
}

void swap(int *a, int *b)
{
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}