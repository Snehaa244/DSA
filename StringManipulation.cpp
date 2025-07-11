//size_t is the unassigned integer type
#include <iostream>
using namespace std;

string processString(string s) {
    string result = "";
    for (size_t i = 0; i < s.length(); i++) {
        if (s[i] == 'M') {
            if (!result.empty()) {
                result += result.back(); //duplicate last character
            }
            //skip adding 'M'  
        } else if (s[i] == 'N') {
            ++i; // skip next character after N
        } else {
            result += s[i];
        }
    }
    return result;
}

int main() {
    string input = "MxtyNNgMM";
    cout << processString(input) << endl;  // Output: "xtyggg"
    return 0;
}
