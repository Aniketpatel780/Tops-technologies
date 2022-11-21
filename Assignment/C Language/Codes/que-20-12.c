#include<stdio.h>

void main(void)
{
	for (int i = 0; i < 5; i++)
	{
		for (int j = 5; j > i + 1; j--)
		{
			printf(" ");
		}
		for (int k = 0; k < i + 1; k++)
		{
			if (i < 3)
			{
				printf(" ");
			}
			printf(" %d", (i + 1) * (i + 1));
		}
		printf("\n");
	}
}