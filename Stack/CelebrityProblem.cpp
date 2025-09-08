#include <iostream>
#include <vector>
#include <stack>
using namespace std;

// Function to find the celebrity
int getCelebrity(vector<vector<int>> arr) {
    int n = arr.size();
    stack<int> s;

    // Step 1: Push all people into stack
    for (int i = 0; i < n; i++) {
        s.push(i);
    }

    // Step 2: Find potential celebrity by elimination
    while (s.size() > 1) {
        int i = s.top();
        s.pop();

        int j = s.top();
        s.pop();

        if (arr[i][j] == 1) {
            // i knows j -> i can't be celebrity
            s.push(j);
        } else {
            // i doesn't know j -> j can't be celebrity
            s.push(i);
        }
    }

    // Step 3: Verify the candidate
    int celeb = s.top();
    for (int i = 0; i < n; i++) {
        if (i != celeb) {
            // celeb should not know anyone & everyone should know celeb
            if (arr[celeb][i] == 1 || arr[i][celeb] == 0) {
                return -1; // No celebrity
            }
        }
    }

    return celeb;
}

int main() {
    // Example 1 (celebrity exists: person 2)
    vector<vector<int>> arr1 = { {0,1,1},
                                 {0,0,1},
                                 {0,0,0} };

    int ans1 = getCelebrity(arr1);
    if (ans1 == -1) cout << "No celebrity found\n";
    else cout << "Celebrity is: " << ans1 << endl;

    // Example 2 (no celebrity)
    vector<vector<int>> arr2 = { {0,1,0},
                                 {1,0,0},
                                 {0,1,0} };

    int ans2 = getCelebrity(arr2);
    if (ans2 == -1) cout << "No celebrity found\n";
    else cout << "Celebrity is: " << ans2 << endl;

    return 0;
}
