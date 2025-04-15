#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int factorial(int n) {
    if (n == 0) {
     return 1;
    }
    return n * factorial(n - 1);
}
int main() {
    int num;
    num= 5;

    if(num < 0) {
        cout << "Factorial of " << num << " is not defined for negative numbers." << endl;
    }
    else {
        cout << "Factorial of " << num << " is: " << factorial(num) << endl;
    }
}

