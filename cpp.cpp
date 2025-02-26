#include <iostream>
using namespace std;

int main()
{
    int a, b, c;
    cout << "enter value a" << endl;
    cin >> a;
    cout << "enter value b" << endl;
    cin >> b;
    cout << "enter value c" << endl;
    cin >> c;
    if (a == b && b == c)
    {
        cout << "all are same";
    }
    else if (a == b && b != c)
    {
        cout << "a and b are same";
    }
    else if (a != b && b == c)
    {
        cout << "b and c are same";
    }
    else if (a != b && a == c)
    {
        cout << "a and c are same";
    }
    else
    {

        if (a > b && a > c)
        {
            cout << "a is bigger";
        }
        else if (a < b && b > c)
        {
            cout << "b is bigger";
        }
        else
        {
            cout << "c is bigger";
        }
    }

    return 0;
}
