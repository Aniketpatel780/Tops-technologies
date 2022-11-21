#include<stdio.h>

int get_firstDigit(int a);
int get_lastDigit(int a);

void main(void)
{
    int userNumber;
    printf("Enter number: ");
    scanf("%d", &userNumber);
    printf("Sum of first and last digits: %d", get_firstDigit(userNumber) + get_lastDigit(userNumber));
}



















int get_firstDigit(int a)
{
    while(a > 9)
    {
        a = a / 10;
    }
    return a;
}
int get_lastDigit(int a)
{
    return (a > 9) ? a % 10 : 0;
}