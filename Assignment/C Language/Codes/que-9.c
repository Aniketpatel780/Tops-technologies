#include<stdio.h>

void main(void)
{
	int a = 5, b = 10;
	a = a + b;  	  // a = 3 b = 1
	b = a + b;  	  // a = 3 b = 5
	a = b - a; 		  // a = 2 b = 5
	b = b - (a * 2);  // a = 2 b = 1
	
	printf("%d %d", a, b);
}