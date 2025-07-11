#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool hasSubarraySumEqualToMax(const vector<int>& arr) {
    int maxNum = *max_element(arr.begin(), arr.end());

    // Filter out all elements equal to maxNum
    vector<int> filtered;
    for (int num : arr) {
        if (num != maxNum) {
            filtered.push_back(num);
        }
    }

    // Check all subarrays of filtered array
    int n = filtered.size();
    for (int i = 0; i < n; ++i) {
        int sum = 0;
        for (int j = i; j < n; ++j) {
            sum += filtered[j];
            if (sum == maxNum) {
                return true;
            }
        }
    }
    return false;
}

int main() {
    vector<int> input = {2, 1, 5, -1, 8};
    cout << (hasSubarraySumEqualToMax(input) ? "True" : "False") << endl;  // Output: True
    return 0;
}
