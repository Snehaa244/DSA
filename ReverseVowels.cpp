#include <iostream>
#include <string>
#include <unordered_set>
using namespace std;

class Solution {
public:
    string reverseVowels(string s) {
        unordered_set<char> vowels = {'a', 'e', 'i', 'o', 'u',
                                      'A', 'E', 'I', 'O', 'U'};
        int left = 0;
        int right = s.length() - 1;

        while (left < right) {
            // Move left to the next vowel
            while (left < right && vowels.find(s[left]) == vowels.end()) {
                left++;
            }

            // Move right to the previous vowel
            while (left < right && vowels.find(s[right]) == vowels.end()) {
                right--;
            }

            // Swap the vowels
            swap(s[left], s[right]);
            left++;
            right--;
        }

        return s;
    }
};

int main() {
    Solution sol;
    string input = "leetcode";
    cout << sol.reverseVowels(input) << endl;  // Output: "leotcede"
    return 0;
}
