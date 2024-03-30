class Solution {
private:
    int fun(int ind,vector<int>& nums,vector<int>&dp){
        if(ind==0)return nums[ind];
        if(ind<0)return 0;
        if(dp[ind]!=-1)return dp[ind];
        int t=nums[ind]+fun(ind-2,nums,dp);
        int nt=0+fun(ind-1,nums,dp);
        return dp[ind]=max(t,nt);
    }
public:
    int rob(vector<int>& nums) {
        int n=nums.size();
        vector<int>dp(n+1,-1);
        return fun(n-1,nums,dp);
    }
};