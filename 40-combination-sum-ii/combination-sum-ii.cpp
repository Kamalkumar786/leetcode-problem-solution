class Solution {
private:
  void fun(int fc,vector<int>& c, int ta,vector<int>& t,vector<vector<int>>& ans){
      if(ta==0){
          ans.push_back(t);
          return;
      }
      for(int i=fc;i<c.size();i++){
          if(i!=fc&&c[i]==c[i-1])continue;
          if(c[i]>ta)break;
          t.push_back(c[i]);
          fun(i+1,c,ta-c[i],t,ans);
          t.pop_back();

      }
  }
public:
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        sort(candidates.begin(),candidates.end());
        vector<vector<int>>ans;
        vector<int>t;
        fun(0,candidates,target,t,ans);
        return ans;
    }


};