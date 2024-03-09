class Solution {
public:
    vector<vector<string>> partition(string s) {
        vector<vector<string>>ans;
        vector<string>t;
        fun(0,s,t,ans);
        return ans;
    }
    private:
    void fun(int k,string s,vector<string>&t,vector<vector<string>>&ans){
        //Base Case
        if(k>=s.size()){
            ans.push_back(t);
            return;
        }

    for(int i=k;i<s.size();i++){
        if(p(s,k,i)){
           t.push_back(s.substr(k, i - k + 1));
           fun(i+1,s,t,ans);
           t.pop_back();
        }
    }
    }
     bool p(string s, int start, int end) {
    while (start <= end) {
      if (s[start++] != s[end--])
        return false;
    }
    return true;
  }
};