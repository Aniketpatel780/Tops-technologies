#include<stdio.h>

void main(void)
{
	int a;
	
	printf("Enter a number: ");
	scanf("%d", &a);
	
	printf("Square of number: %d\nCube of number:%d\n", a * a, a * a * a);
	
}