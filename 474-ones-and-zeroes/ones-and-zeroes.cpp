class Solution {
    vector<vector<vector<int>>>tbl;
public:
    int findMaxForm(vector<string>& strs, int m, int n) {
        tbl.clear();
        tbl.resize(strs.size()+1,vector<vector<int>>(m+1,vector<int>(n+1,INT_MIN)));
        return f1(0,m,n,strs);
    }
private:
int f1(int i,int m ,int n, const vector<string>& strs){
    if(tbl[i][m][n]!=INT_MIN)return tbl[i][m][n];
    if(i==strs.size())return tbl[i][m][n]=0;
    int ans=f1(i+1,m,n,strs);
    int ones=count(strs[i].begin(),strs[i].end(),'1');
    int zeros=strs[i].size()-ones;
    if(m>=zeros && n>=ones){
        ans=max(ans,1+f1(i+1,m-zeros,n-ones,strs));
    }
    return tbl[i][m][n]=ans;
}
};