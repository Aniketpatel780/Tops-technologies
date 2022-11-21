#include <stdio.h>

void main(void)
{
    char *s;
    printf("Enter a string: ");
    scanf("%s", s);
    int i =0;
    while (s[i] != '\0')
    {
        i++;
    }
    char c[20];
    for (int j = 0; j != i; j++)
    {
       c[j] = s[j];
    }
    printf("%s", c);
}
