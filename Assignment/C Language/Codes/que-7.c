#include<stdio.h>

void main(void)
{
	float c, f;
	
	printf("Enter degree in celsius: ");
	scanf("%f", &c);
	
	f = ((9 / 5) * c) + 32;
	
	printf("Fahrenheit: %.2f", f);
	
}