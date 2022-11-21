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
			printf("* ");
		}
		printf("\n");
	}
	
	for (int i = 0; i < 4; i++)
	{
		for (int j = 0 ; j < i + 1; j++)
		{
			printf(" ");
		}
		for (int k = 4; k > i ; k--)
		{
			printf("* ");
		}
		printf("\n");
	}
}