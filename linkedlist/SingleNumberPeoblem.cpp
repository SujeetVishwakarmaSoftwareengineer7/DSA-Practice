#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int ans = 0;

        for (int x : nums)
            ans ^= x;

        return ans;
    }
};

int main() {
    vector<int> nums = {4, 1, 2, 1, 2};

    Solution obj;

    cout << obj.singleNumber(nums);

    return 0;
}