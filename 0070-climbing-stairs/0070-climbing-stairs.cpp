class Solution {
public:
   int climb(int p,int n,int *dp){
       if(p>n)
       return 0;
       if(p==n)
       return 1;
       if (dp[p]!=-1){
           return dp[p];
       }
       else{
       return dp[p]=climb(p+1,n,dp)+climb(p+2,n,dp);
       return dp[p];
       }

   }
    int climbStairs(int n) {
        int p=0;
        int dp[n+1];
        for(int i=0;i<n;i++){
            dp[i]=-1;
        }
        
       return climb(p,n,dp);
    }
};