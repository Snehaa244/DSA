#include <iostream>
using namespace std;

int linearsearch(int arr[], int size, int target) {
    for (int i = 0; i < size; i++) {
        if (arr[i] == target) {
            return i;  // index return karo
        }
    }
    return -1;  // agar nahi mila
}

int main() {
    int arr[] = {4, 2, 7, 9, 8};
    int size = 5;
    int target = 8;

    int index = linearsearch(arr, size, target);

    if (index != -1)
        cout << "The target value is at index " << index << endl;
    else
        cout << "Target not found in array." << endl;

    return 0;
}
