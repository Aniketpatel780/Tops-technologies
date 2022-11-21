#include<stdio.h>

void main(void)
{
    int a[10];
    int sum = 0;
    int odd = 0, even = 0;
    for(int i = 0; i < 10; i++)
    {
        scanf("%d", &a[i]);
    }
    for(int i = 0; i < 10; i++)
    {
        sum += a[i];
    }
    printf("Sum: %d\nAverage: %d", sum, sum / 10);
}