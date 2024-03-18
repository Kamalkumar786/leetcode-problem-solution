class Solution {
public:
    int climbStairs(int n) {
        vector<int>dp(n+1,-1);
        return fun(n,dp);
    }
private:
 int fun(int n,vector<int>&dp){
    if(n<=1)return 1;
    if(dp[n]!=-1)return dp[n];
    int os=fun(n-1,dp);
    int ts=fun(n-2,dp);
    return dp[n]=os+ts;
 }
};