class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n = nums.size();
        vector<int> prefix(n);
        prefix[0] = 1;
        for(int i = 0; i < n - 1; i++) {
            prefix[i + 1] = prefix[i] * nums[i];
        }
        vector<int> suffix(n);
        suffix[n - 1] = 1;
        for(int i = n - 1; i > 0; i--) {
            suffix[i - 1] = suffix[i] * nums[i];
        }
        vector<int> res(n);
        for(int i = 0; i < n; i++) {
            res[i] = prefix[i] * suffix[i];
        }
        return res;
    }
};