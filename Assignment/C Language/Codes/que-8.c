#include<stdio.h>

void main(void)
{
	int num1, num2, num3, num4, num5;
	float avg;
	
	printf("Enetr marks in subject1: ");
	scanf("%d", &num1);
		
	printf("Enetr marks in subject2: ");
	scanf("%d", &num2);
	
	printf("Enetr marks in subject3: ");
	scanf("%d", &num3);
	
	printf("Enetr marks in subject4: ");
	scanf("%d", &num4);
	
		printf("Enetr marks in subject5: ");
	scanf("%d", &num5);
	
	avg = (float) (num1 + num2 + num3 + num4 + num5) / 5;
	printf("Average: %.2f", avg);
	
}