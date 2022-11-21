#include<stdio.h>

void main(void)
{
	int a, b, c, d, e, total;
	float prc;
	
	printf("Enter marks in five subjects: ");
	scanf("%d %d %d %d %d", &a, &b, &c, &d, &e);
	
	printf("%d, %d, %d, %d, %d\n", a, b, c, d, e);
	
	total = a + b + c + d + e;
	
	prc = (total / 500.00) * 100;
	
	(prc > 75) ? printf("Distinction") : (prc > 60) ? printf("Firstclass") : (prc > 50) ? printf("Secondclass") : (prc > 35) ? printf("Passclass") : printf("Fail");
}