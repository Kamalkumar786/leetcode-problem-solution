class Solution {
private:
     int fun(vector<int>& arr){
    int n = arr.size();
     int prev = arr[0];
    int prev2 =0;
    for(int i=1; i<n; i++){
         int pick = arr[i];
        if(i>1)
            pick += prev2;
        int nonPick = 0 + prev;
         int cur_i = max(pick, nonPick);
        prev2 = prev;
        prev= cur_i;
        
    }
    return prev;
}
public:
    int rob(vector<int>& nums) {
        vector<int> t,t1;
        if(nums.size()==1)return nums[0];
        for(int i=0;i<nums.size();i++){
            if(i!=0)t.push_back(nums[i]);
            if(i!=nums.size()-1)t1.push_back(nums[i]);
        }
        return max(fun(t),fun(t1));
    }
};