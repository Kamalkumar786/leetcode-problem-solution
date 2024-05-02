class Solution {
public:
    int findMaxK(vector<int>& nums) {
       sort(nums.begin(), nums.end(), greater<int>());
       for(int i=0;i<nums.size();i++){
        auto it = find(nums.begin(), nums.end(),-nums[i]);
        if (it != nums.end())
        return nums[i];
       }
       return -1;
    }
};