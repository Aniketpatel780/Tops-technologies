#include <iostream>

using namespace std;

class student
{
    int rollNo;
    int sub1;
    int sub2;
    int sub3;

    int maketotal()
    {
        return sub1 + sub2 + sub3;
    }

    float makepercentage()
    {
        return (sub1 + sub2 +sub3) / 3;
    }

    public:

    student(int RollNo, int Sub1, int Sub2, int Sub3)
    {
        rollNo = RollNo;
        sub1 = Sub1;
        sub2 = Sub2;
        sub3 = Sub3;
   }

   void show()
   {
    cout << rollNo << "\t" << sub1 << "\t" << sub2 << "\t" << sub3 << "\t" << maketotal() << "\t" << makepercentage() <<"%" << endl;
   }
   void createTemp()
   {
     cout << "Roll NO" << "\t" << "Sub1" << "\t" << "Sub2" << "\t" << "Sub3" << "\t" << "Total" << "\t" << "Percentage" << endl;
   }
};

int main(void)
{
    student student1(1, 30, 25, 45);
    student1.createTemp();
    student1.show();
    student student2(2, 25, 20, 25);
    student2.show();
    student student3(3, 20, 15, 35);
    student3.show();
    student student4(4, 35, 30, 40);
    student4.show();
    return 0;
}