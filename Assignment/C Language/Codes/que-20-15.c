#include<stdio.h>

void main(void)
{
	for (int i = 0; i < 10; i ++)
	{
		for (int n = 5; n > i; n--)
		{
			printf("*");
		}
		if (i == 0)
		{
			printf("*");
		}
		else
		{
			for (int m = 1; m < (i + 1) * 2; m++)
			{
			printf(" ");
			}
		}
	
		for (int o = 5; o > i; o--)
		{
			printf("*");
		}
		printf("\n");
	}
}