#include <iostream>
#include <climits> // For INT_MIN and INT_MAX
using namespace std;

int main() {
    int arr[] = {7, 4, 10, 0, -20, 400, 1, 6, 8};
    int n = sizeof(arr) / sizeof(arr[0]);
    int mx = INT_MIN; // Initialize max to smallest int
    int mn = INT_MAX; // Initialize min to largest int

    for (int i = 0; i < n; i++) {
        mx = max(mx, arr[i]);
        mn = min(mn, arr[i]);
    }

    cout << mx << " " << mn << endl;
    return 0;
}
