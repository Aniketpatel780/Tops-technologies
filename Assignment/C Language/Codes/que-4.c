#include<stdio.h>

void main(void)
{
	int r;
	const float pie = 3.14;
	
	printf("Enter radius: ");
	scanf("%d", &r);
	
	printf("Area: %.2f", pie * r * r);
}