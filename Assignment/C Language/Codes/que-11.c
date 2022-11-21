#include<stdio.h>

void main(void)
{
	int y;
	printf("Enter a year: ");
	scanf("%d", &y);
	
	(!(y % 400 != 0 && y % 100 == 0) && y % 4 == 0)	? printf("Leap year!") : printf("Not a leap year!");
	
/*	if (y % 400 == 0) {
		printf("Leap year!");
	} else if (y % 100 == 0) {
		printf("Not a leap year!");
	} else if (y % 4 == 0) {
		printf("leap year!");
	} else {
		printf("Not a leap year!");
	}
*/

/*	if (!(y % 400 != 0 && y % 100 == 0) && y % 4 == 0) 
	{
		printf("Leap year!");
	}
	else
	{
		printf("Not a leap year!");
	}
*/
}