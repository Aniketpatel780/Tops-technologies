#include<stdio.h>

void main(void)
{
    int a[10];
    int n;
    for (int i = 0; i < 10; i++)
    {
        scanf("%d", &a[i]);
    }
    printf("Enter position: ");
    scanf("%d", &n);
    (n > 0 && n < 11) ? printf("Number at the %dth position: %d", n, a[n -1]) : printf("There is no value at given position");
}