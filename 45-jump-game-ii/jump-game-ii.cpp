class Solution {
private:
 long long int fun(int ind,vector<int>&nums,vector<int>&dp){
    if(ind>=nums.size()-1)return 0;
    if(dp[ind]!=-1)return dp[ind];
    long long int mini=INT_MAX;
    for(int j=1;j<=nums[ind];j++){
         mini=min(mini,1+fun(ind+j,nums,dp));
    }
    return dp[ind]=mini;
 }
public:
    int jump(vector<int>& nums) {
        vector<int>dp(nums.size(),-1);
        return fun(0,nums,dp);
    }
};