class Solution {
public:
    int uniquePaths(int m, int n) {

        double ans=1;

        for(int i=1; i<min(m,n); i++)
            ans = ans*(max(m,n)-1+i)/i;
        
        return (int)ans;
        
    }
};