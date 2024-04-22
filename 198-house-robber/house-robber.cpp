class Solution1 {
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

class Solution {
private:
    int fun(int ind,vector<int>& nums,vector<int>&dp){
        if(ind==0)return nums[ind];
        if(ind<0)return 0;
        if(dp[ind]!=-1)return dp[ind];
        int t=nums[ind]+fun(ind-2,nums,dp);
        int nt=0+fun(ind-1,nums,dp);
        dp[ind]=max(t,nt);
        return dp[ind];
    }
public:
    int rob(vector<int>& nums) {
        int n=nums.size();
        vector<int> tlb(n+1,0);
        tlb[0]=0;
        tlb[1]=nums[0];
        for(int i=2;i<tlb.size();i++){
            tlb[i]=max(nums[i-1]+tlb[i-2],tlb[i-1]);
        }
        return tlb[n];
    }
};