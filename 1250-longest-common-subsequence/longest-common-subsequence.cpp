class Solution1 {
private:
    int fun(int i, int j,string &text1, string &text2){
        if(i>=text1.size()||j>=text2.size())
         return 0;
        if(text1[i]==text2[j])
        return 1+fun(i+1,j+1,text1,text2);
        else{
            return max(fun(i+1,j,text1,text2),fun(i,j+1,text1,text2));
        }
    }
public:
    int longestCommonSubsequence(string text1, string text2) {
        int n1=text1.size();
        int n2=text2.size();
        return fun(0,0,text1,text2);
    }
};

class Solution2 {
private:
    int fun(int i, int j,string &text1, string &text2){
        if(i<0 ||j<0)return 0;
        if(text1[i]==text2[j])return 1+fun(i-1,j-1,text1,text2);
        else{
            return max(fun(i-1,j,text1,text2),fun(i,j-1,text1,text2));
        }
    }
public:
    int longestCommonSubsequence(string text1, string text2) {
        int n1=text1.size();
        int n2=text2.size();
        return fun(n1-1,n2-1,text1,text2);
    }
};

class Solution3 {//DP
private:
    int fun(int i, int j,string &text1, string &text2,vector<vector<int>>&v){
        if(i<0 ||j<0)
        return 0;
        if(v[i][j]!=-1)
        return v[i][j];
        if(text1[i]==text2[j])
        return v[i][j]=(1+fun(i-1,j-1,text1,text2,v));
        else{
            return v[i][j]=max(fun(i-1,j,text1,text2,v),fun(i,j-1,text1,text2,v));
        }
    }
public:
    int longestCommonSubsequence(string text1, string text2) {
        int n1=text1.size();
        int n2=text2.size();
        vector<vector<int>>v(n1+1,vector<int>(n2+1, -1)); 
        return fun(n1-1,n2-1,text1,text2,v);
    }
};
class Solution {
public:
    int longestCommonSubsequence(string text1, string text2) {
        int n1=text1.size();
        int n2=text2.size();
        vector<vector<int>>v(n1+1,vector<int>(n2+1, -1));
        for(int i=0;i<v.size();i++)
            v[i][0]=0;
        for(int i=0;i<v[0].size();i++)
            v[0][i]=0;
        for(int i=1;i<v.size();i++){
            for(int j=1;j<v[0].size();j++){
                if(text1[i-1]==text2[j-1])
                    v[i][j]=1+v[i-1][j-1];
                else
                    v[i][j]=max(v[i-1][j],v[i][j-1]);
            }
        }
        return v[n1][n2];
    }
};