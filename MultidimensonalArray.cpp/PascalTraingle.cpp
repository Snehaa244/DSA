#include <iostream>
#include <vector>
using namespace std;

vector<vector<int>> pascalTriangle(int n) {
    vector<vector<int>> pascal(n);

    for (int i = 0; i < n; i++) {
        pascal[i].resize(i + 1);   // har row ka size set karo
        pascal[i][0] = pascal[i][i] = 1; // pehle aur last element hamesha 1 hoga

        for (int j = 1; j < i; j++) {
            pascal[i][j] = pascal[i - 1][j - 1] + pascal[i - 1][j];
        }
    }

    return pascal;
}

int main() {
    int n;
    cin >> n;

    vector<vector<int>> ans = pascalTriangle(n);

    for (int i = 0; i < ans.size(); i++) {
        for (int j = 0; j < ans[i].size(); j++) {
            cout << ans[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
