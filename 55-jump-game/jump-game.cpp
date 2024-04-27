class Solution {
public:
    bool fun(int ind, vector<int>& nums,vector<int>&dp){
        if(ind>=nums.size()-1) return true;
        if(dp[ind]!=-1)return dp[ind];
        for(int i=1;i<=nums[ind];i++){
            if(fun(ind+i,nums,dp)) return dp[ind]=true;
        }
        return dp[ind]=false;
    }
    bool canJump(vector<int>& nums) {
        vector<int>dp(nums.size(),-1);
        return fun(0, nums,dp);
    }
};