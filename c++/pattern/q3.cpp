#include <iostream>
using namespace std;

int main()
{
    for (int i = 1; i <= 25; i++)
    {
        cout << i <<" ";
        if(i%5==0){
            cout<<endl;
        }
    }

    return 0;
}
