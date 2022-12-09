#include <iostream>
#include <cstring>

using namespace std;

class String
{
    char *s1;
    char *s2;
    public:
    String(char S1[], char S2[])
    {
        s1 = S1;
        s2 = S2;
    }
    void concate()
    {
        char s[100];
        int i = 0;
        for(int j = 0; j < strlen(s1); j++)
        {
            s[i] = s1[j];
            i++;
        }
        for(int k = 0; k < strlen(s2); k++)
        {
            s[i] = s2[k];
            i++;
        }
        s[i] = '\0';
        cout << s;
    }
};

int main(void)
{
    String s1("Aniket", "Patel");
    s1.concate();
    return 0;
}