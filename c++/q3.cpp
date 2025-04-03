#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int row;

    cout << "Enter the array's row & column size:";
    cin >> row;

  int array[row][row];

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < row; j++)
        {
            cout << "Enter element: ";
            cin >> array[i][j];
        }
    }
    cout << "The transpose matrix of an array: "<<endl;
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < row; j++)
        {
            cout << array[j][i]<<" ";
        }
        cout<<endl;
    }
}