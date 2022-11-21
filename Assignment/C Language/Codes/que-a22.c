#include <stdio.h>

char * reverse(char *s, int length);

void main(void)
{
    char s[20];
    printf("Enter a string: ");
    scanf("%s", &s);
    printf("Reverse: %s", reverse(s, strlen(s)));
}

char * reverse(char *s, int length)
{
    char *c;
    for (int i = 0; i < length; i++)
    {
        c[i] = s[length - i - 1];
    }
    return c;
} 
