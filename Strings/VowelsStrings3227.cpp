#include <iostream>
#include <string>
#include<algorithm>
using namespace std;

int main() {
    string s;
    cout << "Enter a string: ";
    getline(cin, s);   // ✅ getline use kiya taki spaces bhi le sake

    bool aliceWins = false;

    for (char c : s) {
        // ✅ single quotes use karo for char
        if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' ||
            c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U') {
            aliceWins = true;
            break;  // vowel mil gaya → stop
        }
    }

    if (aliceWins)
        cout << "Alice Wins!" << endl;
    else
        cout << "Alice Loses!" << endl;

    return 0;
}
