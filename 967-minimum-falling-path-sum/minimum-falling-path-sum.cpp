class Solution {
public:
       int minFallingPathSum(vector<vector<int>>& matrix) {
        int m=matrix.size();
        int n=matrix[0].size();
        vector<vector<int>>dp(m,vector<int>(n,0));
        for(int j=0;j<n;j++){
            dp[0][j]=matrix[0][j];
        }
        for(int i=1;i<m;i++){
            for(int j=0;j<n;j++){
                int ld=1e9,rd=1e9;
                int up=matrix[i][j] + dp[i-1][j];
                if(j-1>=0)
                    ld=matrix[i][j] + dp[i-1][j-1];
                if(j+1<n)
                    rd=matrix[i][j] + dp[i-1][j+1];
                dp[i][j] = min(up,min(ld,rd));   
            }
        }
        int mini=dp[m-1][0];
        for(int j=1;j<n;j++){ 
            mini=min(mini,dp[m-1][j]);   
        }
        return mini;  
    }
};
    
    