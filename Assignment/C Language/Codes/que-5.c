#include<stdio.h>

void main(void)
{
	int h, b;
	printf("Enter Height: ");
	scanf("%d", &h);
	
	printf("\n");
	printf("Enter base: ");
	scanf("%d", &b);
	
	printf("\n");
	
	printf("Area of tringle is: %.2f", (float) (h * b) / 2);
}