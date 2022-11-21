#include<stdio.h>

int rev(int a, int temp);

void main(void)
{
    int a; 
    printf("Enter a number: ");
    scanf("%d", &a);
    int b = rev(a, 0);
    (a == b) ? printf("Palindrome") : printf("Not a palindrome");
}

int rev(int n, int temp)
{
    if (n == 0)
        return temp;
 
    temp = (temp * 10) + (n % 10);
 
    return rev(n / 10, temp);
}
