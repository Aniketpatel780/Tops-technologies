#include<stdio.h>                           
int get_length(int a);                     

void main(void)                             
{
    int userNumber, sum = 0;             
    printf("Enter number: ");   
    scanf("%d", &userNumber);   
    int length = get_length(userNumber);         // getting the length of user entered number(userNumber)
    int lastDigit, remainingDigit = userNumber;  // for last digit of userNumber// for remaining digits 
    for (int i = 0; i < length; i++)
    {
        lastDigit = remainingDigit % 10;
        remainingDigit = remainingDigit / 10;
        sum += lastDigit;
    }
    printf("Sum: %d", sum);
}
int get_length(int a)                       // function for getting the length of entered value
{
    int length = 1;
    while(a > 9)
    {
        a = a / 10;
        length++;
    }
    return length;
}