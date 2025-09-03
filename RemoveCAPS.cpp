#include <iostream>
#include <string>
using namespace std;

string removeCaps(const string& str) {
    string result = "";
    for (char ch : str) {
        if (!isupper(ch)) {
            result += ch;
        }
    }
    return result;
}

int main() {
    string input;
    cout << "Enter a string: ";
    getline(cin, input);

    string output = removeCaps(input);
    cout << "String without capital letters: " << output << endl;

    return 0;
}
