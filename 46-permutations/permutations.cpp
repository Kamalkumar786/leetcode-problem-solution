class Solution {
private:
void fun(vector<int>& nums,vector<int>&t,vector<vector<int>>&ans){
    if(nums.size()==0){
        ans.push_back(t);
        return;
    }
    for(int i = 0; i < nums.size(); i++) {
        t.push_back(nums[i]);
        vector<int> nums2;
        for(int j = 0; j < i; j++) nums2.push_back(nums[j]);
        for(int j = i+1; j < nums.size(); j++) nums2.push_back(nums[j]);  
        fun(nums2, t, ans);
        t.pop_back();
         }

}
public:
    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>>ans;
        vector<int>t;
        int n=nums.size();
        fun(nums,t,ans);
        return ans;
    }
};