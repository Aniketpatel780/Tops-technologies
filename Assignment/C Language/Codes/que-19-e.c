#include<stdio.h>

void main(void)
{
	int a, c = 0, d = 1, e;
	printf("Enter lenght: ");
	scanf("%d", &a);
	if (a < 1)
	{
		printf("Invalid input!");
	}
	else if (a < 2) 
	{
		printf("%d", c);
	}
	else
	{
		printf("%d %d ", c, d);
		
		for (int i = 0; i < a - 2; i++)
		{
		e = c + d;
		printf("%d ", e);
		c = d;
		d = e;
		}
	}
}

// 0 1 1 2 3 5 8 13 21