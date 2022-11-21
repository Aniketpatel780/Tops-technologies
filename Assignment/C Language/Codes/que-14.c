#include<stdio.h>

void main(void)
{
	int a, b, c;
	
	printf("Enter three numbers: ");
	scanf("%d %d %d", &a, &b, &c);	

	 (a > b && a > c) ? printf("%d is greater than %d and %d", a, b, c) 
	 : (b > a && b > c) ? printf("%d is greater than %d and %d", b, a, c) 
	 : printf("%d is greater than %d and %d", c, a, b);
}