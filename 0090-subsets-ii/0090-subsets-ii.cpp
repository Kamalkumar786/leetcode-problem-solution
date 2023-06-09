class Solution {
public:
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        vector<vector<int>> allsolutions;
        vector<int>partialsolution;
        search(nums,nums.size(),partialsolution,allsolutions);
        return allsolutions;
    }
private:
   void search(const vector<int>&nums ,int n,vector<int>&par,vector<vector<int>>&all){
       if(n==0) all.push_back(par);
       else{
           int k=1;
           while(n-1-k>=0&&nums[n-1-k]==nums[n-1]) k++;
           search(nums,n-k,par,all);
           par.push_back(nums[n-1]);
           search(nums,n-1,par,all);
           par.pop_back();
       }
   }
};