class Solution {
public:
    int dp[55][55][55];
    int fun(int i,int j,int maxi,int m ,int n){
        if(i<0||j<0||i>=m||j>=n)
        return 1;
        if(maxi<=0) return dp[i][j][maxi]=0;
        if (dp[i][j][maxi]!=-1)
        return dp[i][j][maxi];
        int l=fun(i,j-1,maxi-1,m,n);
        int r=fun(i,j+1,maxi-1,m,n);
        int u=fun(i-1,j,maxi-1,m,n);
        int d=fun(i+1,j,maxi-1,m,n);
        return dp[i][j][maxi]=((l+r)%1000000007+(u+d)%1000000007)%1000000007;
    }

    int findPaths(int m, int n, int maxMove, int startRow, int startColumn) {
        memset(dp,-1,sizeof(dp));        
        int k=fun(startRow,startColumn,maxMove,m,n);
        return k;
    }
};