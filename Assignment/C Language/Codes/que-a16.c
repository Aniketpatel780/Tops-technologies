#include <stdio.h>
#include <string.h>

void main(void)
{
    char s[20], c[20];
    printf("Enter first string: ");
    scanf("%s", &s);
    printf("Enter second string: ");
    scanf("%s", &c);
    int length = strlen(s) + strlen(c);
    char sc[length];
    int i = 0;
    for(int j = 0; j < strlen(s); j++)
    {
        sc[i] = s[j];
        i++;
    }
    for (int k = 0; k < strlen(c); k++)
    {
        sc[i] = c[k];
        i++;
    }
    printf("%d", sc);
}