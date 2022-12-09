#include <iostream>

using namespace std;

class person
{
    public:
    char *name;
    int age;

    public:
    person(char Name[], int Age)
    {
        name = Name;
        age = Age;
    }
    void readata()
    {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
    }
    void writedataage(int Age)
    {
        age = Age;
    }
    void writedataname(char Name[])
    {
        name = Name;
    }
};

class student : public person
{
    double percentage;

    public:
    student(char Name[], int Age, float Percentage) : person
    {
        percentage = Percentage;
    }
};


int main(void)
{
    person aniket("Aniket", 18);
    aniket.readata();
    return 0;
}