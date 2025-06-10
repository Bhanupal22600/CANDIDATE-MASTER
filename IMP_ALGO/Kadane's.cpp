#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int n = nums.size();
        int sum = 0;
        int maxsum = INT_MIN;
        for (int i = 0; i < n; i++) {
            sum += nums[i];
            if (maxsum < sum) {
                maxsum = sum;
            }
            if (sum < 0) {
                sum = 0;
            }
        }
        return maxsum;
    }
};
int main() {
    vector<int> nums = {4, -2, 8, 3, -1, 6, -5};
    Solution sol;
    cout << sol.maxSubArray(nums) << endl;
    return 0;
}
