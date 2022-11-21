#include <stdio.h>
#include <string.h>

char *strcnct(char *string1, char *string2);

void main(void)
{
    char *s1 = "Aniket";
    char *s2 = "Patel";

    char *concate = strcnct(s1, s2);

    printf("%s", concate);
}

char *strcnct(char *string1, char *string2)
{
    char *temp;
    for(int i = 0; i < strlen(string1); i++)
    {
            temp[i] = string1[i];
    }
    return temp;
}