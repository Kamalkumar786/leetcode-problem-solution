class Solution {
private:
    int fun(int ind,vector<int>& cost,map<int,int>&dp){
        if(ind<=0||ind ==1)return 0;
        if(dp.find(ind)!=dp.end())return dp[ind];
        int l=cost[ind-1]+fun(ind-1,cost,dp);
        int r=cost[ind-2]+fun(ind-2,cost,dp);
        return dp[ind]=min(l,r);
    }
public:
    int minCostClimbingStairs(vector<int>& cost) {
        map<int,int> dp;
        return fun(cost.size(),cost,dp);
    }
};