#include<stdio.h>

void main(void)
{
    int a[] = {3, 8, 13, 0, 2, 10, -1, 3, 4, 10};
    int temp = a[0];
    for(int i = 0; i < 10; i++)
    {
        for(int j = i + 1; j < 10; j++)
        {
            if(a[i] > a[j])
            {
                temp = a[i];    //3 
                a[i] = a[j];    //0
                a[j] = temp;    //3
            }
        }
        printf("%d\n", a[i]);
    }
}