#include <iostream>
#include <vector>
using namespace std;

void moveZerosToEnd(vector<int>& arr) {
    int insertPos = 0;

    // Step 1: Move non-zero elements forward
    for (int num : arr) {
        if (num != 0) {
            arr[insertPos++] = num;
        }
    }

    // Step 2: Fill the rest of the array with 0s
    while (insertPos < arr.size()) {
        arr[insertPos++] = 0;
    }
}

int main() {
    vector<int> arr = {1, 0, 2, 0, 3, 5, 8, 0, 7, 0, 3};
    moveZerosToEnd(arr);

    // Output the result
    for (int num : arr) {
        cout << num << " ";
    }
    cout << endl;  // Output: 1 2 3 5 8 7 3 0 0 0 0
    return 0;
}
