class Solution {
private:
    bool fun(string s, string t,int sind,int tind,vector<vector<int>>&dp){
         if (sind == s.size()) return true;
        if (tind == t.size()) return false;
        if(dp[sind][tind]!=-1)return dp[sind][tind];
        if (s[sind] == t[tind])
            return dp[sind][tind]=fun(s, t, sind + 1, tind+ 1,dp);
        return dp[sind][tind]=fun(s, t, sind, tind+ 1,dp);
    }
public:
    bool isSubsequence(string s, string t) {
        vector<vector<int>>dp(s.size(),vector<int>(t.size(),-1));
        return fun(s,t,0,0,dp);
    }
};