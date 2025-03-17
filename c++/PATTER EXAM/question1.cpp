#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "enter your number:";
    cin >> n;

    for (int i = 1; i <= n * n; i++)
    {

      if(i<n || i>n*(n-1)){
        cout<<" ";
      }
    if(i%n==0 || i%n==1 || i<n || i>n*(n-1)){
        cout<<" ";
    }
    else{
        cout << i<<" ";
    }

        if (i % n == 0)
        {
            cout << endl;
        }
    }
   return 0;
}