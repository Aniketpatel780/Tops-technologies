#include<stdio.h>
int get_length(int n);
void main(void)
{
	int a, n, m, main = 0;;
	printf("Enter a number: ");
	scanf("%d", &a);
	int copy = a;
    int length = get_length(a);
    for (int i = 0; i < length; i++)
    {
        n = copy % 10;
        m = copy / 10;
        for(int j = i; j < (length - 1); j++)
        {
            n = n * 10;
        }
        main += n;
        copy = m;
    }
    printf("Length: %d\n", length);
    printf("Entered number: %d\n", a);
    printf("Reversed number: %d", main);
}

int get_length(int n)
{
    int length = 1;
    while(n >= 10 || n <= -10)
    {
        n = n / 10;
        length++;
    }
    return length;
}