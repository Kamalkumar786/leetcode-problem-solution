class Solution{
public:
 vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
     vector<vector<int>>v;
     vector<int>t;
 fun(0,target,candidates,v,t);
 return v;
 
 }
 private:
  void fun(int i, int a,vector<int>& c,vector<vector<int>>& v,vector<int>& t){
        if(i==c.size()){
        if(a==0){
           v.push_back(t);
        }
        return;
        }
        if(c[i]<=a){
        t.push_back(c[i]);
        fun(i,a-c[i],c,v,t);
        t.pop_back();
        }
        fun(i+1,a,c,v,t);
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