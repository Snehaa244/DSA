#include<iostream>
using namespace std;

int main() {
    int arr[] = {7, 4, 8, 10, 5, 2, 15, 36};
    int n = sizeof(arr) / sizeof(arr[0]);
    cout << "The number of elements in the array is " << n << endl;
    return 0;
}
