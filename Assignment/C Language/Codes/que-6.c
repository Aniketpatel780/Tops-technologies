#include<stdio.h>

void main(void)
{
	float simpleInterest, p, r ,t;
	
	printf("Enter Principle amount: ");
	scanf("%f", &p);
	
	printf("\n");
	
	printf("Enter time: ");
	scanf("%f", &t);
	
	printf("\n");
	
	printf("Enter interest rate: ");
	scanf("%f", &r);
	
	printf("\n");
	
	simpleInterest = (p * r * t) / 100;
	
	printf("Simple Interest is %.3f", simpleInterest);
	
}