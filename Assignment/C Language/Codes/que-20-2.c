#include<stdio.h>

void main(void)
{
	int a = 5;
	
	for (int i = 0; i < a; i++)
	{
		for (int j = 0; j < i + 1; j ++)
		{
			printf("%d ", j + 1);
		}
		printf("\n");
	}
}