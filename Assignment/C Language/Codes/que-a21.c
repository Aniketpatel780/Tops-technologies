#include <stdio.h>

int max_bata(int a[], int length);

void main(void)
{
    int a[10];
    for (int i = 0; i < 10; i++)
    {
        scanf("%d", &a[i]);
    }
    
    printf("Max number: %d", max_bata(a, 10));
}

int max_bata(int a[], int length)
{
    int max = a[0];
    for (int i = 1; i < length; i++)
    {
        if (max < a[i])
        {
            max = a[i];
        }
    }
    return max;
}

