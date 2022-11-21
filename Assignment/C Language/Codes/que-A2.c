#include<stdio.h>

void main(void)
{
    int a[10];
    for(int i =0; i < 10; i++)
    {
        scanf("%d", &a[i]);
    }
    int max = a[0];
    for(int i = 0; i < 10; i++)
    {
        if(max < a[i])  max = a[i];
    }
    printf("Max number: %d",max);
}