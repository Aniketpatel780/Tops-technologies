#include<stdio.h>

void main(void)
{
	int a = 0;
	for (int i = 0; i < 5; i++)
	{
		for (int j = 5; j > i + 1; j--)
		{
			printf(" ");
		}
		for (int k = 0; k < i + 1; k++)
		{
			a++;
			printf("%d ", a);
		}
		printf("\n");
	}
}