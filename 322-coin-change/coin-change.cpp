class Solution {
private: 
int fun(int i, vector<int>& coins,int amount,vector<vector<int>>&dp){
        if(i<0){
            if(amount==0)
            return 0;
            return INT_MAX;
        }
        if(amount==0)
        return dp[i][amount]=0;
        if(dp[i][amount]!=-1) return dp[i][amount];
        int take=INT_MAX;
        int nottake=0+fun(i-1,coins,amount,dp);
        if(coins[i]<=amount) {
            take=fun(i,coins,amount-coins[i],dp);
            if(take!=INT_MAX)
            take=take+1;
        }
        return dp[i][amount]= min(nottake,take);
    }
public:
    int coinChange(vector<int>& coins, int amount) {
        vector<vector<int>>dp(coins.size(),vector<int>(amount+1,-1));
       int ans=fun(coins.size()-1,coins,amount,dp);
       if(ans==INT_MAX)
       return -1;
       return ans;
    }
};