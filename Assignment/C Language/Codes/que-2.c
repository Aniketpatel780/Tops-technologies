#include<stdio.h>

void main(void)
{
	int a, b;
	
	printf("First number: ");
	scanf("%d", &a);
	
	printf("Second number: ");
	scanf("%d", &b);
	
	printf("\n");
//	printf("%d %d", a, b);
	printf("Addition: %d\n", a + b);
	printf("Subtraction: %d\n", a - b);
	printf("Multification: %d\n", a * b);
	printf("Division: %.2f", (float) a / b);
	
}