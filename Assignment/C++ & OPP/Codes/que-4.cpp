#include <iostream>

using std::cout;
using std::cin;

int main(void)
{
    int width {0},height {0};
    cout << "Enter width: ";
    cin >> width;
    cout << "Enter height: ";
    cin >> height;
    int array[width][height];
    for(int i = 0; i < width; i++)
    {
        for(int j = 0; j < height; j++)
        {
            cin >> array[i][j];
        }
        
    }
    for(int i = 0; i < width; i++)
    {
        for(int j = 0; j < height; j++)
        {
            cout << array[i][j] << "\t";
        }
        cout << "\n";
    }
   
    return 0;
}