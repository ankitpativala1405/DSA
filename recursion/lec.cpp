#include <iostream>
#include <vector>
using namespace std;

int maxConsecutiveLength(const vector<int>& arr) {
    if (arr.empty()) return 0;  

    int max_length = 1; 
    int current_length = 1; 

    for (int i = 1; i < arr.size(); i++) {
        if (arr[i] == arr[i - 1] + 1) {
            current_length++; 
        } else {
            if (current_length > max_length) {
                max_length = current_length;  
            }
            current_length = 1; 
        }
    }

    if (current_length > max_length) {
        max_length = current_length;
    }

    return max_length;  
}

int main() {
    vector<int> arr = {1, 3, 3, 0, 0, 1, 5, 6, 7, 8};  
    cout << "Maximum consecutive increasing length: " << maxConsecutiveLength(arr) << endl;
    return 0;
}
