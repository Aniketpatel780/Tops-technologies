#include<stdio.h>

void i_am_fibonacci_printer(int a);

void main(void)
{
    int a;
    printf("Enter length: ");
    scanf("%d", &a);
    i_am_fibonacci_printer(a);
}

void i_am_fibonacci_printer(int length)
{
    int m = 0;
    int n = 1;
    int o;
    for (int i = 0; i < length; i++)
    {
        printf("%d ", m);
        o = m;
        m = m + n;
        n = o;
    }
}