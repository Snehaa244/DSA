#include <iostream>
#include <string>
#include <algorithm> // <-- yaha include karna hoga

using namespace std;

int main() {
    string str = "apna college.";

    reverse(str.begin(), str.end()); // reverse function ka use
    cout << str << endl; // output dekhne ke liye print

    return 0;
}
