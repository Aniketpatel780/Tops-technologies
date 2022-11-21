#include<stdio.h>

void get_number(int *array, int a[2][2]);

void main(void)
{
    int a[2][2];
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
    int number = a[0][0];
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            if (number < a[i][j])
            {
                number = a[i][j];
            }
        }
    }
    printf("Max number: %d", number);
}
