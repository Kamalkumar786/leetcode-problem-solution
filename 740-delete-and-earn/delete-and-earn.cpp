class Solution {
public:
    int deleteAndEarn(vector<int>& nums) {
        int maxVal = *max_element(nums.begin(), nums.end());
        vector<int> sum(maxVal + 1, 0);
        vector<int> dp(maxVal + 1, -1);
        for (int num : nums) {
            sum[num] += num;
        }
        return helper(sum, maxVal, dp);
    }
    int helper(vector<int>& sum, int i, vector<int>& dp) {
        if (i == 0) return 0;
        if (i == 1) return sum[1];
        if (dp[i] != -1) return dp[i];
        dp[i] = max(helper(sum, i - 1, dp), helper(sum, i - 2, dp) + sum[i]);
        return dp[i];
    }
};
