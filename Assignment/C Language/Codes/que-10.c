#include<stdio.h>

void main(void) 
{
	int a;
	printf("Enter a number: ");
	scanf("%d", &a);
	
	(a > 0) ? printf("Positive number!") : (a == 0) ? printf("Nuetral number!") : printf("Negative number");
}