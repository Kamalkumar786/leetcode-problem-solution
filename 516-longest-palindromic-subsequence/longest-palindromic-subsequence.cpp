class Solution {
public:
    int longestPalindromeSubseq(string s) {
        int n = s.size();
        vector<vector<int>> memo(n, vector<int>(n, -1));
        return lps(s, 0, n - 1, memo);
    }
    int lps(string &s, int i, int j, vector<vector<int>> &memo) {
        if (i > j) return 0;       
        if (i == j) return 1;      
        if (memo[i][j] != -1) return memo[i][j]; 
        if (s[i] == s[j]) {
            memo[i][j] = 2 + lps(s, i + 1, j - 1, memo);
        } else {
            memo[i][j] = max(lps(s, i + 1, j, memo), lps(s, i, j - 1, memo));
        }
        return memo[i][j];
    }
};