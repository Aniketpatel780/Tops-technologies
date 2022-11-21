#include<stdio.h>

void main(void)
{
	int a, b;
	char c;
	
	printf("Enter a number: ");
	scanf("%d", &a);
	printf("Enter second number: ");
	scanf("%d", &b);
	
	printf("(1) + for Addition\t (2) - for Subtraction\t (3) * for Multification\t (4) / for Division\n");
	fflush(stdin);
	scanf("%c", &c);
	
	switch(c)
	{
		case '+': printf("Addition: %d", a + b);
		break;
		case '-': printf("Subtraction: %d", a - b);
		break;
		case '*': printf("Multification: %d", a * b);
		break;
		case '/': printf("Division: %.2f", (float) a / b);
		break;
		default: printf("Invalid input!");
	}
}