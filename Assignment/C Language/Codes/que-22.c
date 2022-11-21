#include<stdio.h>

void main(void)
{
    int a[10];
    int odd = 0, even = 0;
    for(int i = 0; i < 10; i++)
    {
        scanf("%d", &a[i]);
    }
    for(int i = 0; i < 10; i++)
    {
        (a[i] % 2 == 0) ? even++ : odd++;
    }
    printf("odd: %d\neven: %d", odd, even);
}