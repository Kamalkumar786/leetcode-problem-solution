class Solution {
private:
    int fun(int i,int j,vector<vector<int>>& grid,int m,vector<vector<int>>&dp){
        if(i==m-1)return grid[i][j];
        if(dp[i][j]!=-1)return dp[i][j];
        int d=grid[i][j]+fun(i+1,j,grid,m,dp);
        int dia=grid[i][j]+fun(i+1,j+1,grid,m,dp);
        return dp[i][j]= min(d,dia);
    }
public:
    int minimumTotal(vector<vector<int>>& triangle) {
        int m=triangle.size();
        vector<vector<int>>dp(m,vector<int>(m,-1));
      return fun(0,0,triangle, m,dp);
    }
};