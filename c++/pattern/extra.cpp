#include <iostream>
using namespace std;
int main()
{
    int length;
    cout << "enter your length:";
     cin >> length;
    int width;
    cout << "enter your width:";
     cin >> width;

    for (int j = 1; j <= length * width; j++)
    {
        if (j <= length || j >= length * (width - 1))
        {
            cout << "*";
        }
        else
        {

            if (j % length == 1 || j % length == 0)
            {
                cout << "*";
            }
            else
            {
                cout << " ";
            }
        }

        if (j % length == 0)
        {
            cout << endl;
        }
    }
    return 0;
}
