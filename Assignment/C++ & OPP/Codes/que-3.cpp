#include <iostream>

using std::cout;
using std::cin;

int main(void)
{
    int size {0};
    cout << "Enter size: ";
    cin >> size;
    int array[size];
    for(int i = 0; i < size; i++)
    {
        cin >> array[i];
    }
    for(int i = 0; i < size; i++)
    {
        cout << array[i] << "\t";
    }
    return 0;
}