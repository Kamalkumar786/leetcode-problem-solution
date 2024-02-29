class Solution{
public:
 vector < vector < int >> combinationSum(vector < int > & candidates, int target) {
      vector < vector < int >> ans;
      vector < int > ds;
      fun(0, target, candidates, ans, ds);
      return ans;
    }
 private:
 void fun(int ind, int target, vector < int > & arr, vector < vector < int >> & ans, vector < int > & ds) {
      if (ind == arr.size()) {
        if (target == 0) {
          ans.push_back(ds);
        }
        return;
      }
      if (arr[ind] <= target) {
        ds.push_back(arr[ind]);
        fun(ind, target - arr[ind], arr, ans, ds);
        ds.pop_back();
      }

      fun(ind + 1, target, arr, ans, ds);

    }
};

// class Solution1 {
// public:
//     vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
//         vector<vector<int>> all;
//         vector<int>par;
//         search(candidates,candidates.size(),target,par,all);
//         int count1=0;
//         par.clear();
//         search(candidates,candidates.size(),target,par,count1);
//         assert(count1==all.size());
//         int count2=recursive(candidates,candidates.size(),target);
//         assert(count2==all.size());
//         int count3=improverecursive(candidates,candidates.size(),target);
//         assert(count3==all.size());
//         return all;
//     }
//     private:
//     void search(vector<int>&c,int n,int t,vector<int>&par,vector<vector<int>>&all){
//         if(t==0)all.push_back(par);
//         else if(n==0){}
//         else{
//             search(c,n-1,t,par,all);
//             if(t>=c[n-1]){
//                 par.push_back(c[n-1]);
//                 search(c,n,t-c[n-1],par,all);
//                 par.pop_back();
//             }
//         }
//     }
// };