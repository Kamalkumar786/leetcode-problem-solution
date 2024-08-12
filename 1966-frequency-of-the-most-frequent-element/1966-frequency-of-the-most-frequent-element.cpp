class Solution {
public:
    int maxFrequency(vector<int>& nums, int k) {
        sort(nums.begin(), nums.end());
        int maxFreq = 1;
        int j = 0;
        long long total = 0;
        for (int i = 0; i < nums.size(); i++) {
            total += nums[i];
            while ((long long)nums[i] * (i - j + 1) > total + k) {
                total -= nums[j];
                j++;
            }
            maxFreq = max(maxFreq, i - j + 1);
        }
        return maxFreq;
    }
};
