#include<stdio.h>

void main(void)
{
	int a = 5;
	for (int i = 0; i < a; i++)
	{
		int n = i;
		for (int j = a; j > i + 1; j--)
		{
			printf(" ");
		}
		for (int k = 0; k < i + 1; k++)
		{
				printf("%d", n + 1);
				n--;
		}
		printf("\n");
	}
}

//     1
//    21
//   321
//  4321
// 54321