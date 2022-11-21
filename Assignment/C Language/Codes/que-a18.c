#include<stdio.h>

void invoke_me(int a);

void main(void)
{
    int a;
    printf("Enter a number: ");
    scanf("%d", &a);
    invoke_me(a);
}

void invoke_me(int a)
{
    printf("Square: %d\n", a * a);
    printf("Cube: %d\n", a * a * a);
}