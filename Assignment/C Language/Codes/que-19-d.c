#include<stdio.h>

void main(void)
{
	int a,factorial = 1;
	printf("Enter a number: ");
	scanf("%d", &a);
	
	for (int i = a; i > 0; i--, a--)
	{
		factorial *= a;
	}
	printf("Factorial: %d", factorial);

}