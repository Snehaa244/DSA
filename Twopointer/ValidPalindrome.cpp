#include <iostream>
#include <string>
using namespace std;

class Solution {
public:
    bool isPalindrome(string s) {
        int left = 0, right = s.size() - 1;

        while (left < right) {
            // ignore non-alphanumeric characters
            if (!isalnum(s[left])) {
                left++;
            } else if (!isalnum(s[right])) {
                right--;
            } else {
                // compare after converting to lowercase
                if (tolower(s[left]) != tolower(s[right])) {
                    return false;
                }
                left++;
                right--;
            }
        }
        return true;
    }
};

int main() {
    Solution sol;
    string str = "A man, a plan, a canal: Panama";
    cout << (sol.isPalindrome(str) ? "True" : "False") << endl;
    return 0;
}
