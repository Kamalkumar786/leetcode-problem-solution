class Solution {
    private:
    void fun(vector<int>& nums,int i,vector<int>sub,vector<vector<int>>& res){
        if(i==nums.size()){
            res.push_back(sub);
            return;
        }
        else{
            fun(nums,i+1,sub,res);
            sub.push_back(nums[i]);
            fun(nums,i+1,sub,res);
            sub.pop_back();

        }
    }
public:
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> res;
        vector<int> sub;
        int i=0;
        fun(nums,i,sub,res);
        return res;
    }
};