class Solution {
public:
    int numSquares(int n) {
        vector<int> dp(n + 1, -1);
        return fun(n, dp);
    }
    
    int fun(int n, vector<int>& dp) {
        if (n == 0) return 0;
        if (dp[n] != -1) return dp[n];
        int r = n; 
        for (int i = 1; i * i <= n; ++i) {
            r= min(r,fun(n - i * i, dp) + 1);
        }
        dp[n] = r;
        return r;
    }
};
