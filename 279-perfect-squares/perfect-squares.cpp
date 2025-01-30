class Solution {
public:
    int fun(int n, vector<int>& dp) {
        if (n <= 0) return 0;
        if (dp[n] != -1) return dp[n];
        int a = INT_MAX;
        for (int i = 1; i * i <= n; i++) {
            int sn = i * i;
            int c = 1 + fun(n - sn, dp);
            a = min(a, c);
        }
        return dp[n] = a;
    }
    
    int numSquares(int n) {
        vector<int> dp(n + 1, -1);
        return fun(n, dp);
    }
};
