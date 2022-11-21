#include<stdio.h>

void main(void)
{
	int a;
	printf("Enter the numberof table: ");
	scanf("%d", &a);
	
	for (int i = 0; i < 10; i++)
	{
		printf("%d * %d = %d\n", a, i + 1, a * (i + 1));
	}
}