class Solution {
public:
    int maxAscendingSum(vector<int>& nums) {
        int maxi =nums[0];
        int s=nums[0];
        for(int i=1;i<nums.size();i++) {
            if(nums[i]>nums[i - 1]) {
                s+=nums[i];
            } else {
                s=nums[i];
            }
            maxi=max(maxi, s);
        }
        
        return maxi;
    }
};
