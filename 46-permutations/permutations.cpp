class Solution {
public:
    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>>v;
        vector<int>visited(nums.size(),0);
        vector<int>t;
        fun(nums,t,visited,v);
        return v;
    }
    private:
    void fun(vector<int>&nums,vector<int>&t,vector<int>&visited,vector<vector<int>>&v){
        if(t.size()==nums.size()){
            v.push_back(t);
            return ;
        }
    
        for(int i=0;i<nums.size();i++){
            // cout<<t[i];
            if(visited[i]==0){
                t.push_back(nums[i]);
                visited[i]=1;
                fun(nums,t,visited,v);
                visited[i]=0;
                t.pop_back();
            }

        }
    }

};