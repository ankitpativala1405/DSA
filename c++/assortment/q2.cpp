#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int row, column;

    cout << "row:";
    cin >> row;

    cout << "column:";
    cin >> column;

    int array[row][column];

    cout << "Enter array's elements: ";
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < column; j++)
        {
            cout<< "Enter element: ";
            cin >> array[i][j];
        }
    }

    int largest = array[0][0];

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < column; j++)
        {
            if (array[i][j] > largest)
            {
                largest = array[i][j];
            }
        }
    }
    cout << "largest element largest:" << largest;

    return 0;
}