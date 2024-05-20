class Solution {
public:
    int subsetXORSum(vector<int>& nums) {
        return fun(nums, 0, 0); 
    }
private:
    int  fun(vector<int>& nums, int index, int c) {
        if (index == nums.size()) return c;
        int w = fun(nums, index + 1, c ^ nums[index]);
        int wo = fun(nums, index + 1, c);
        return w + wo;
    }
};