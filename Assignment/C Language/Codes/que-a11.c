#include <stdio.h>
#include <string.h>

void main(void)
{
    char s[] = "Hello";
    printf("Uppercase: %s\n", strupr(s));
    printf("Lowercase: %s\n", strlwr(s));
}