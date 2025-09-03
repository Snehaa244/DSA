#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

bool isAnagram(string s1, string s2) {
    // Step 1: If lengths differ, they can't be anagrams
    if (s1.length() != s2.length()) {
        return false;
    }

    // Step 2: Sort both strings
    sort(s1.begin(), s1.end());
    sort(s2.begin(), s2.end());

    // Step 3: Compare sorted strings
    return s1 == s2;
}

int main() {
    string str1 = "listen";
    string str2 = "silent";

    if (isAnagram(str1, str2)) {
        cout << "True (Anagram)" << endl;
    } else {
        cout << "False (Not an Anagram)" << endl;
    }

    return 0;
}
