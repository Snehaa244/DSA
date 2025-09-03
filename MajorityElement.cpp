//leetcode ---> 169
#include <iostream>
#include <vector>
#include <algorithm> // For sort
using namespace std;

class Solution {
public:
    int majorityElement(vector<int>& nums) {
        sort(nums.begin(), nums.end()); // Step 1: Sort
        int n = nums.size(); // Declare n
        int freq = 1, ans = nums[0];

        for (int i = 1; i < n; i++) {
            if (nums[i] == nums[i - 1]) {
                freq++;
            } else {
                freq = 1;
                ans = nums[i];
            }

            if (freq > n / 2) {
                return ans;
            }
        }

        return ans;
    }
};

// Optional main for testing
int main() {
    Solution sol;
    vector<int> nums = {2, 2, 1, 1, 1, 2, 2};
    cout << "Majority Element: " << sol.majorityElement(nums) << endl;
    return 0;
}


//Moore Voting Algorithm

// int majorityElement(vector<int>& nums) {
//     int freq = 0, ans =0;

//     for(int i=0; i<nums.size(); i++) {
//         if(freq = 0) {
//             ans = nums[i];
//         }
//         if(ans == nums[i]) {
//             freq++ ;
//         }
//         else {
//             freq--;
//         }
//     }
// }