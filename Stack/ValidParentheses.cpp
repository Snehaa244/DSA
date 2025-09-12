#include <iostream>
#include <stack>
#include <string>
using namespace std;

int main() {
    string str;
    cout << "Enter a string with brackets: ";
    cin >> str;

    stack<char> st;
    bool isValid = true;

    for (int i = 0; i < str.size(); i++) {
        char ch = str[i];

        // opening brackets
        if (ch == '{' || ch == '(' || ch == '[') {
            st.push(ch);
        } else {  // closing brackets
            if (st.empty()) {
                isValid = false;
                break;
            }

            if ((st.top() == '(' && ch == ')') ||
                (st.top() == '{' && ch == '}') ||
                (st.top() == '[' && ch == ']')) {
                st.pop();
            } else {
                isValid = false;
                break;
            }
        }
    }

    // agar stack empty nahi hai → invalid
    if (!st.empty()) {
        isValid = false;
    }

    if (isValid)
        cout << "Valid Parentheses!" << endl;
    else
        cout << "Invalid Parentheses!" << endl;

    return 0;
}
