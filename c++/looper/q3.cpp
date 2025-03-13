#include <iostream>
using namespace std;

int main() {
    int num, 

    // Input from user
    cout << "Enter any number: ";
    cin >> num;

  int  lastdigit = num % 10;

    int temp = num;
    for (; temp >= 10; temp /= 10); 
   int  firstdigit = temp;


    cout << "The sum of the first and the last digit: " << firstdigit + lastdigit << endl;

    return 0;
}
