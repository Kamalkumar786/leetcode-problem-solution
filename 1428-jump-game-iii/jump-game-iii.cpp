class Solution {
private:
    bool fun(int ind, vector<int>& nums, vector<int>& vis) {
        if (ind < 0 || ind >= nums.size() || vis[ind]) return false;
        if (nums[ind] == 0)  return true;
        vis[ind] = 1; 
        return fun(ind - nums[ind], nums, vis) || fun(ind + nums[ind], nums, vis);
    }
    
public:
    bool canReach(vector<int>& nums, int start) {
        vector<int> vis(nums.size(), 0);
        return fun(start, nums, vis);
    }
};
