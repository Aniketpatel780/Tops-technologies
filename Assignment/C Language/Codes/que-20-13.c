#include<stdio.h>

void main(void)
{
	for (int i = 0; i < 9; i++)
	{
		if (i < 5)
		{
			for (int j = 0; j < i + 1; j++)
		 	{
				printf("*");
			}
			printf("\n");
		}
		else
		{
			for (int j = 10; j > i + 1; j--)
			{
				printf("*");
			}
			printf("\n");
		}
		
	}
}