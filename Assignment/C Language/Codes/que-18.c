#include<stdio.h>

void main(void)
{
	int a;
	printf("1. Area of Triangle.\n");
	printf("2. Area of Rectangle.\n");
	printf("3. Area of Circle: ");
	scanf("%d", &a);
	printf("\n");
	
	if (a == 1)
	{
		int a, b;
		printf("Enter height: ");
		scanf("%d", &a);
		printf("Enter base: ");
		scanf("%d", &b);
		printf("Area of triangle: %d", (a * b) / 2);
	}
	else if (a == 2)
	{
		int a, b;
		printf("Enter height: ");
		scanf("%d", &a);
		printf("Enter width: ");
		scanf("%d", &b);
		printf("Area of rectangle: %d", (a * b));
	}
	else if (a == 3)
	{
		int a;
		printf("Enter radius: ");
		scanf("%d", &a);
		printf("Area of circle: %.2f", 3.14 * (a * a));
		
	}
}