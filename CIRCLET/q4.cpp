#include <iostream>
using namespace std;

int main() {
    int n;
    cin>>n;  
    
    for (int i = 1; i <= n; i++) {
        // Print leading stars
        for (int j = 1; j <= n - i; j++) {
            cout << " ";
        }
        // Print decreasing numbers
        for (int j = i; j > 1; j--) {
            cout << j;
        }
        // Print increasing numbers
        for (int j = 1; j <= i; j++) {
            cout << j;
        }
        // Print trailing stars
        for (int j = 1; j <= n - i; j++) {
            cout << " ";
        }
        // Move to the next line after each row
        cout << endl;
    }
    return 0;
}
