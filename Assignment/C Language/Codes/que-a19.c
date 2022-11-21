#include <stdio.h>

int factoBro(int a);

void main(void)
{
    int a;
    printf("Enter a number: ");
    scanf("%d", &a);
    printf("Factorial: %d", factoBro(a));
}

int factoBro(int a)
{
    int fact = 1;
    for (int i = a; i > 0; i--)
    {
        fact = fact * i;
    }
    return fact;
}