#include <iostream>
#include <string>
using namespace std;

class Solution {
public:
    string removeOccurrences(string s, string part) {
        while(s.length() > 0 && s.find(part) < s.length()) {
            s.erase(s.find(part), part.length());
        }
        return s;
    }
};

int main() {
    Solution obj;
    string s, part;

    cout << "Enter the main string: ";
    getline(cin, s);  // pura string lene ke liye

    cout << "Enter the substring to remove: ";
    getline(cin, part);

    string result = obj.removeOccurrences(s, part);

    cout << "Final string: " << result << endl;

    return 0;
}
